# Main file to check assignments

import random
from pathlib import Path
import os


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
    def_assign = [i.name[-1] for i in Path.cwd().glob("Ass*")][-1]
    if def_assign:
        a = def_input(
            f"Please enter the Assignment number which you want to Grade [{def_assign}]: ",
            def_assign,
        ).strip()
    else:
        a = def_input(
            "Please enter the Assignment number which you want to Grade [1]: ", "1"
        ).strip()

    base = Path(f"Assignment_{a}")
    if base.exists():
        os.chdir(base)
    else:
        from init import init

        init(a)

    try:
        home = next(Path.cwd().glob("PDS*/"))
    except StopIteration as si:
        print("PDS Directory not found,")
        print(f"Please download from moodle and place in the folder, Assignment_{a}")
        return

    test_cases = pull("test_cases.txt")
    code_questions = pull("code_questions.txt")
    test_marks_list = [float(i.split(";")[0]) for i in test_cases]
    code_marks_list = [float(i.split(";")[0]) for i in code_questions]
    max_marks = sum(test_marks_list + code_marks_list)
    test_marks = [
        f'"Test_Case_{i} ({test_marks_list[i]:g})"' for i in range(len(test_cases))
    ]
    code_marks = [
        f'"Code_{i} ({code_marks_list[i]:g})"' for i in range(len(code_questions))
    ]

    header = f"\"Student_Name\",{','.join(test_marks)},{','.join(code_marks)},\"Total_Marks ({max_marks:g})\",\"Comments\""

    report_path = f"Assignment_{a}_report.csv"
    if not Path(report_path).exists():
        push(report_path, header)
    try:
        done = set(
            i.split(",")[0].strip('"')
            for i in pull(report_path)[1:]
            if i.startswith('"')
        )
    except:
        done = set()

    print(f"Working for {report_path}".center(100, "*"))

    for student in students:
        if student in done:
            continue
        total_marks = 0
        test_marks = [0] * len(test_marks)
        code_marks = [0] * len(code_questions)
        comments = []  # String list
        print("Working for student - ", student)
        try:
            try:
                file_exists = True
                c = next(home.glob(student + "*"))
                os.system(f'"{c}"')
            except StopIteration as si:
                print(f"C File for {student} not found")
                comments.append(
                    f"Assignment was not submitted properly - Mark/s lost: {max_marks:g} out of {max_marks:g}"
                )
                file_exists = False
            # TODO: COMPILE THE C FILE
            if file_exists:
                return_code = os.system(f'gcc "{c}"')
                if return_code == 0:
                    print("Code ran successfully")
                    # test = test_cases[0]  # TODO: TESTING
                    for i, line in enumerate(test_cases):
                        # TODO: RUN C FILE here with the test case
                        mark, test_comment, test = line.split(";")
                        mark = float(mark)
                        print(f"Test_Case_{i+1}:".center(50, "-"))
                        print(f"Input: {test}")
                        print(f"Desired Output: {test_comment}")
                        print(f"Program Output:")
                        os.system(f"echo {test} | a.exe")
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
                else:
                    print("The code didn't compile")
                    comments.append(
                        f"The Code didn't compile successfully - Mark/s lost: {sum(test_marks_list):g} out of {sum(test_marks_list):g}"
                    )
                for i, q in enumerate(code_questions):
                    mark, ques = q.split(";")
                    mark = float(mark)
                    code_marks[i] = float(
                        def_input(f"\n\n{ques} - [{mark:g}] Mark/s : ", mark)
                    )

                    if code_marks[i] < mark:
                        comments.append(
                            f"Failed Criteria: {ques} - Mark/s lost: {mark-code_marks[i]:g} out of {mark:g}"
                        )
                    elif code_marks[i] > mark:  # in case of typing errpr
                        code_marks[i] = mark
                total_marks = sum(test_marks + code_marks)
            if def_input("\n\nGive any other comment? [0]/1: ", 0) == "1":
                comments.append("")  # Hack for extra spacing
                comments.append(
                    def_input(f"\nPlease enter your final comment for {student}:\n")
                )
            elif total_marks == max_marks:
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
                comm = ";;".join(comments)
                report = f'"{student}",{",".join(f"{i:g}" for i in test_marks)},{",".join(f"{i:g}" for i in code_marks)},{total_marks:g},"{comm}"'
                # HACK TO fix: keep trying to save record
                while 1:
                    try:
                        push(report_path, report)
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
