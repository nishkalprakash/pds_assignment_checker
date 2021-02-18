# Main file to check assignments

import random
from pathlib import Path
import os

from init import BASE


def pull(path):
    return Path(path).read_text().strip().split("\n")


def push(path, text):
    with Path(path).open("a+") as f:
        f.write(text + "\n")


def def_input(text, default=""):
    x = input(text)
    if x:
        return x
    else:
        return default


def main():
    students = pull("students.txt")
    def_assign = [i.name[-1] for i in Path.cwd().glob(f"{BASE}*")][-1]
    if def_assign:
        a = def_input(
            f"Please enter the {BASE} number which you want to Grade [{def_assign}]: ",
            def_assign,
        ).strip()
    else:
        a = def_input(
            f"Please enter the {BASE} number which you want to Grade [1]: ", "1"
        ).strip()

    base = Path(f"{BASE}_{a}")
    if base.exists():
        os.chdir(base)
    else:
        from init import init

        init(a)

    try:
        home = next(Path.cwd().glob("PDS*/"))
        try:
            home_inter = next(Path.cwd().glob("PDS*Intermediate*/"))
            inter = True
        except StopIteration as si:
            print("Inter mediate PDS Directory not found,")
            inter = False
    except StopIteration as si:
        print("PDS Directory not found,")
        print(f"Please download from moodle and place in the folder, {BASE}_{a}")
        return


    test_cases_dict={}
    code_questions_dict={}

    test_marks_dict={}
    code_marks_dict={}
    max_marks_dict={}
    max_marks_0=0

    report_path_dict={}
    report_path_dict[0]=f"{BASE}_{a}_report.csv"

    for s in range(1,3):
        test_cases_dict[s] = pull(f"test_cases_set_{s}.txt")
        code_questions_dict[s] = pull(f"code_questions_set_{s}.txt")
        test_marks_dict[s] = [float(i.split(";")[0]) for i in test_cases_dict[s]]
        code_marks_dict[s] = [float(i.split(";")[0]) for i in code_questions_dict[s]]
        # Max marks are calculated ignoring the -ve mark conditions
        max_marks_dict[s] = sum(i for i in (test_marks_dict[s] + code_marks_dict[s]) if i > 0)
        max_marks_0=max(max_marks_0,max_marks_dict[s])
        test_marks_head = [
            f'"Test_Case_{i} ({test_marks_dict[s][i]:g})"' for i in range(len(test_cases_dict[s]))
        ]
        code_marks_head = [
            f'"Code_{i} ({code_marks_dict[s][i]:g})"' for i in range(len(code_questions_dict[s]))
        ]

        header = f"\"Student_Name\",{','.join(test_marks_head)},{','.join(code_marks_head)},\"Total_Marks ({max_marks_dict[s]:g})\",\"Comments\""

        report_path_dict[s] = f"{BASE}_{a}_Set_{s}_report.csv"
        if not Path(report_path_dict[s]).exists():
            push(report_path_dict[s], header)
    header_0= f"\"Student_Name\",\"Test_Cases\",\"Code_Ques\",\"Total_Marks ({max_marks_0:g})\",\"Comments\""
    if not Path(report_path_dict[0]).exists():
            push(report_path_dict[0], header_0)
    try:
        done = set(i.split(",")[0].strip('"') for i in pull(report_path_dict[0])[1:])
    except:
        done = set()

    print(f"Working for {report_path_dict[0]}".center(100, "*"))

    for student in students:
        if student in done or student.startswith("#"):
            continue
        total_marks = 0 ## This stores the marks the students got (tc)+(cq)
        print("Working for student - ", student)
        
        comments = []  # String list
        try: ## This is for overall
            try: ## For opening Final
                file_exists = True
                if inter:
                    try: ## For opening inter
                        c_inter = next(home_inter.glob(student + "*"))
                        os.system(f'"{c_inter}"')
                    except StopIteration as si:
                        print(f"Intermediate C File for {student} not found")
                c = next(home.glob(student + "*"))
                os.system(f'"{c}"')
            except StopIteration as si:
                print(f"C File for {student} not found")
                comments.append(
                    f"{BASE} was not submitted properly - Mark/s lost: {max_marks_dict[s]:g} out of {max_marks_dict[s]:g}"
                )
                file_exists = False
            ## This COMPILEs THE C FILE
            if file_exists:
                s=int(def_input("\n\nPlease enter the Set number [1] : ","1"))
                ## test_marks has what marks student got in test_cases
                test_marks = [0] * len(test_cases_dict[s]) 
                ## code_marks has what marks student got in code_ques
                code_marks = [0] * len(code_questions_dict[s])
                return_code = os.system(f'gcc "{c}"')
                if return_code == 0:
                    print("Code ran successfully")
                    # test = test_cases[0]  # TODO: TESTING
                    for i, line in enumerate(test_cases_dict[s]):
                        # TODO: RUN C FILE here with the test case
                        mark, test_comment, test = line.split(";")
                        mark = float(mark)
                        print(f"Test_Case_{i+1}:".center(50, "-"))
                        print(f"Input: {test}")
                        print(f"Desired Output: {test_comment}")
                        print(f"Program Output:")
                        os.system(f"echo {test} | a.exe")
                        if mark > 0:
                            test_marks[i] = float(
                                def_input(
                                    f"\n\nTest_Case_{i+1} - [{mark:g}] Mark/s : ", mark
                                )
                            )
                            if test_marks[i] < mark:
                                comments.append(
                                    f"Program failed for Test {i+1}: {test_comment} - Mark/s lost: {mark-test_marks[i]:g} out of {mark:g}"
                                )
                            elif test_marks[i] > mark:  # in case of typing errpr
                                test_marks[i] = mark
                        else:  # This case is for -ve marking, defaults to zero, adds a comment if -ve marks given
                            test_marks[i] = float(
                                def_input(
                                    f"\n\nTest_Case_{i+1} - ({mark:g}) Mark/s - Def: [0]: ",
                                    0,
                                )
                            )  # defaults to 0
                            if test_marks[i] == mark:
                                # if -ve marks are given then add comment
                                comments.append(
                                    f"Passed Negative Criteria: {test_comment} - Mark/s lost: {mark:g}"
                                )
                else:
                    print("The code didn't compile")
                    comments.append(
                        f"The Code didn't compile successfully - Mark/s lost: {sum(test_marks_dict[s]):g} out of {sum(test_marks_dict[s]):g}"
                    )
                for i, q in enumerate(code_questions_dict[s]):
                    mark, ques = q.split(";")
                    mark = float(mark)
                    if mark > 0:
                        code_marks[i] = float(
                            def_input(f"\n\n{ques} - [{mark:g}] Mark/s : ", mark)
                        )
                        if code_marks[i] < mark:
                            comments.append(
                                f"Failed Criteria: {ques} - Mark/s lost: {mark-code_marks[i]:g} out of {mark:g}"
                            )
                        elif code_marks[i] > mark:  # in case of typing errpr
                            code_marks[i] = mark
                    else:  # This case is for -ve marking, defaults to zero, adds a comment if -ve marks given
                        code_marks[i] = float(
                            def_input(f"\n\n{ques} - ({mark:g}) Mark/s - Def: [0]: ", 0)
                        )  # defaults to 0
                        if code_marks[i] == mark:
                            # if -ve marks are given then add comment
                            comments.append(
                                f"Passed Negative Criteria: {ques} - Mark/s lost: {mark:g}"
                            )

                total_marks = sum(test_marks + code_marks)
            if def_input("\n\nGive any other comment? [0]/1: ", 0) == "1":
                comments.append("")  # Hack for extra spacing
                comments.append(
                    def_input(f"\nPlease enter your final comment for {student}:\n")
                )
            elif total_marks == max_marks_dict[s]:
                comments.append("")  # Hack for extra spacing
                # comments.append("")  # Hack for extra spacing
                comments.append(
                    random.choice(
                        """Good work
                        Keep it up
                        Keep up the good work
                        Great Job
                        Clean Code
                        Perfect
                        Good
                        Nice work""".split(
                            "\n"
                        )
                    ).strip()
                )

        except Exception as e:
            print("Something went wrong: ", str(e))
            return
        else:
            try:
                comm = ";;".join(comments).strip(";;")
                report = f'{student},{",".join(f"{i:g}" for i in test_marks)},{",".join(f"{i:g}" for i in code_marks)},{total_marks:g},"{comm}"'
                # HACK TO fix: keep trying to save record
                while 1:
                    try:
                        push(report_path_dict[s], report)
                        report_0 = f'{student},{sum(test_marks):g},{sum(code_marks):g},{total_marks:g},"{comm}"'
                        push(report_path_dict[0], report_0)
                        break
                    except PermissionError:
                        print("The report file is open, please close it to proceed")
                        if (
                            def_input("Press 1 to Try again, or 0 to Quit [1]/0: ", "1")
                            != "1"
                        ):
                            print(f"EXITING. {student}'s record not saved")
                            return
                done.add(student)
                print("The comments given for student:")
                print("\n".join(comments))
                print(f" Done for {student} ".center(100, "#"))
            except Exception as e:
                print("Something went wrong: ", e, str(e))
                return

    print("Report has been generated.")


main()
