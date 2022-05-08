## Main file to check assignments

## Random is used to get the random compliments
import random

from pathlib import Path

from os import system, chdir

from lib.pds_globals import (
    A_Q_,
    A_Q_PATH_,
    HOME, 
    BASE
    )
from lib.pds_file_op import (
    base_missing,
    get_a_q_from_user,
    get_code_cases,
    get_code_questions,
    get_map_name_to_roll,
    get_test_cases,
    pull,
    push,
    def_input,
    get_students,
    print,
)





def init_checker():
    a, q = get_a_q_from_user()
    ## Set base to the required directory
    base = A_Q_PATH_.format(a=a,q=q)

    if base.exists():
        ## Change to the base directory for the rest of the program
        chdir(base)
    else:
        ## The BASE_a directory was not found
        ## try to fetch assignments after confirmation from the user
        base_missing(a)
        

    ## Check if PDS folder exists in the current directory
    try:
        home = next(Path.cwd().glob("PDS*/"))
    ## IF PDS Folder not found then call get assignments
    except StopIteration as si:
        print("PDS Directory not found,")
        print(f"Please download from moodle and place in the folder, {BASE}_{a}")
        base_missing(a)
        home = next(Path.cwd().glob("PDS*/"))
    report_path = f"{A_Q_.format(a=a,q=q)}_report.csv"
    test_cases = get_test_cases(a,q) # pull only once throughout the program
    code_questions = get_code_questions(a,q)

    return home, report_path,test_cases, code_questions


def pds_checker():
    """ This is the main method for checking assignments"""
    ## Pull students list before entering the BASE folder
    students = get_students()

    ## Getting the BASE number details from user and switching working dir to BASE_a
    home, report_path,test_cases,code_questions = init_checker()

    ## TODO: HACK FOR binary marking system
    test_marks_list = [float(i.split(";")[0]) for i in test_cases]

    ## Here there is a change for %age negative markings, keeping the % sign to signify
    # code_questions = pull("code_questions.txt")  # pull only once throughout the program
    code_marks_list = [
        x if "%" in (x := i.split(";")[0]) else float(x) for i in code_questions
    ]

    ## Max marks are calculated ignoring the -ve mark conditions
    max_marks = sum(
        (i for i in (test_marks_list + code_marks_list) if "%" not in str(i) and i > 0)
    )

    ## START: Set header
    test_marks_header = [
        f'"Test_Case_{i} ({tm:g})"' for i, tm in enumerate(test_marks_list, 1)
    ]

    ## Here if % exists in marks then the decimal is not truncated as :g doesnt handle strings
    code_marks_header = [
        f'"Code_{i} ' + (f'({cm})"' if "%" in str(cm) else f'({cm:g})"')
        for i, cm in enumerate(code_marks_list, 1)
    ]

    if not Path(report_path).exists():
        push(
            report_path,
            f"\"Student_Name\",{','.join(test_marks_header)},{','.join(code_marks_header)},\"Total_Marks ({max_marks:g})\",\"Comments\"",
        )
    ## End

    ## START: DONE Support - pulls students details from report to mark them as done
    try:
        done = set(i.split(",")[0].strip('"') for i in pull(report_path)[1:])
    except:
        done = set()
    ## End

    print(f"Working for {report_path}".center(100, "*"))
    ctr=0
    for std in students:
        ctr+=1
        if std in done:
            continue
        n=get_map_name_to_roll(rev=True)
        total_marks = 0  # current student's marks
        test_marks = [0] * len(test_marks_list)  # Current student test case marks
        code_marks = [0] * len(code_marks_list)  # Current student code case marks
        comments = []  # String list for current students comments
        print(f"{ctr} - Working for student - {std} - {n[std]}".center(100,"*"))
        try:
            try:
                file_exists = True
                c = next(home.glob(f"*{std}*"))
                system(f'START /B "" "{c}"')  # Opens the file in the background
            except StopIteration as si:
                print(f"C File for {std} not found")
                comments.append(
                    f"{BASE} file was not submitted properly - Mark/s lost: {max_marks:g} out of {max_marks:g}"
                )
                file_exists = False
            ## Compile and run THE C FILE
            if file_exists:
                return_code = system(f'gcc "{c}"')
                if return_code == 0:
                    print("Code ran successfully")
                    # test = test_cases[0]  # TESTING
                    comments.append(" TEST CASES ".center(30, "="))
                    comments.append("")
                    for i, line in enumerate(test_cases):
                        ## RUN C FILE here with the test case

                        ## HACK START: SUPPORT For file input If test_case_input_file_# exists then copy it to infile.txt
                        if Path(f"test_case_input_{i+1}.txt").exists():
                            Path("infile.txt").write_text(
                                Path(f"test_case_input_{i+1}.txt").read_text()
                            )
                        ## End

                        mark, test_comment, test = line.split(";")
                        mark = float(mark)
                        print(f"Test_Case_{i+1}:".center(50, "-"))
                        print(f"Input: {test}")
                        print(f"Desired Output: {test_comment}")
                        print(f"Program Output:")
                        system(f"echo {test} | a.exe")

                        ## HACK: START: Support to open out file in case an external file is being created
                        if Path("outfile.txt").exists():
                            system("outfile.txt")
                        ## End

                        """
                        This is for non-binary test marks
                        if mark > 0:
                            test_marks[i] = float(
                                def_input(
                                    f"\n\nTest_Case_{i+1} - [{mark:g}] Mark/s : ", mark
                                )
                            )
                            if test_marks[i] < mark:
                                comments.append(
                                    f"FAILED: Test Case {i+1}: {test_comment} - Mark/s lost: {mark-test_marks[i]:g} out of {mark:g}"
                                )
                            elif test_marks[i] >= mark:  # in case of typing errpr
                                test_marks[i] = mark
                                comments.append(
                                    f"PASSED: Test Case {i+1}: {test_comment} - Mark/s : {mark:g}"
                                )
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
                        """
                        ## HACK: Start Support for Binary test marks
                        if mark > 0:
                            test_marks[i] = float(
                                def_input(
                                    f"\n\nTest_Case_{i+1} - [{mark:g}] Mark/s : ", mark
                                )
                            )
                            if test_marks[i] < mark:
                                comments.append(
                                    f"FAILED: Test Case {i+1}: {test_comment}"
                                )
                            elif test_marks[i] >= mark:  # in case of typing errpr
                                test_marks[i] = mark
                                comments.append(
                                    f"PASSED: Test Case {i+1}: {test_comment}"
                                )
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
                        ## End
                    ## HACK: Start Support for Binary test marks
                    max_test_marks = sum(i for i in test_marks_list if i > 0)
                    if sum(test_marks) < max_test_marks:
                        comments.append("")
                        comments.append(
                            f"FAILED: One or More Test Cases - Marks Lost: {max_test_marks:g} out of {max_test_marks:g}"
                        )
                        test_marks = [0] * len(
                            test_marks_list
                        )  # Resetting all marks obtained in test cases to 0
                    else:
                        comments.append("")
                        comments.append(
                            f"PASSED: All test cases - Marks : {max_test_marks:g} out of {max_test_marks:g}"
                        )
                else:
                    print("The code didn't compile")
                    ## HACK: Start Support for Binary test marks
                    max_test_marks = sum(i for i in test_marks_list if i > 0)
                    comments.append(" TEST CASES ".center(30, "="))
                    comments.append("")
                    comments.append(
                        f"FAILED: Code didn't compile successfully - Mark/s lost: {max_test_marks:g} out of {max_test_marks:g}"
                    )
                comments.append("")
                comments.append(" CODE CASES ".center(30, "="))
                comments.append("")
                for i, q in enumerate(code_questions):
                    mark, ques = q.split(";")
                    if (
                        "%" in mark
                    ):  # This case is for % marking, defaults to zero, adds a comment if -ve marks given
                        code_marks[i] = float(
                            def_input(
                                f"\n\n{ques} - ({mark}) Mark/s - [0] / +ve (full negative) / -ve (partial negative): ",
                                0,
                            )
                        )  # defaults to 0
                        ## This is to deal with the case where code marks entered is less than max negtive marks
                        max_neg_mark = float(mark.strip("%"))
                        code_marks[i] = (
                            code_marks[i]
                            if max_neg_mark < code_marks[i] <= 0
                            else max_neg_mark
                        )
                        if code_marks[i] < 0:
                            comments.append(
                                f"FAILED: Negative % Code Case {i+1}:- {ques} - Mark/s lost: {code_marks[i]:g}% out of Total Marks Obtained"
                            )
                            code_marks[i] = f"{code_marks[i]:g}%"
                    else:
                        mark = float(mark)
                        if mark >= 0:
                            code_marks[i] = float(
                                def_input(f"\n\n{ques} - [{mark:g}] Mark/s : ", mark)
                            )
                            if code_marks[i] < mark:
                                comments.append(
                                    f"FAILED: Code Case {i+1}:- {ques} - Mark/s lost: {mark-code_marks[i]:g} out of {mark:g}"
                                )
                            elif code_marks[i] >= mark:  # in case of typing err0r
                                code_marks[i] = mark
                                comments.append(
                                    f"PASSED: Code Case {i+1}:- {ques} - Mark/s : {mark:g}"
                                )
                        elif (
                            mark < 0
                        ):  # This case is for -ve marking, defaults to zero, adds a comment if -ve marks given
                            code_marks[i] = float(
                                def_input(
                                    f"\n\n{ques} - ({mark:g}) Mark/s - [0] / +ve (full negative) / -ve (partial negative): ",
                                    0,
                                )
                            )  # defaults to 0
                            ## This is to deal with the case where code marks entered is less than max negtive marks
                            code_marks[i] = (
                                code_marks[i] if mark <= code_marks[i] <= 0 else mark
                            )
                            if code_marks[i] < 0:
                                comments.append(
                                    f"FAILED: Negative Code Case {i+1}: {ques} - Mark/s lost: {code_marks[i]:g} out of {mark:g}"
                                )
                total_marks = sum(
                    (i for i in (test_marks + code_marks) if "%" not in str(i))
                )
                ## TODO: Here we will deduct the negative percentage sums and round to nearest b=0.5 using formula n=b*round(a/b)
                rounding_base = 0.5
                total_marks = rounding_base * round(
                    (
                        total_marks
                        + total_marks
                        * sum(float(i.strip("%")) for i in code_marks if "%" in str(i))
                        / 100
                    )
                    / rounding_base
                )
            comments.append("")
            comments.append("".center(30, "="))
            comments.append("")
            comments.append(f" TOTAL MARKS OBTAINED = {total_marks:g} ".center(50, "#"))

            if def_input("\n\nGive any other comment? [0]/1: ", 0) == "1":
                comments.insert(0, "")  # Hack for extra spacing
                comments.insert(
                    0, def_input(f"\nPlease enter your final comment for {std}:\n")
                )
            elif total_marks == max_marks:
                comments.insert(0, "")  # Hack for extra spacing
                # comments.append("")  # Hack for extra spacing
                comments.insert(
                    0,
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
                    ).strip(),
                )

        except Exception as e:
            print("Something went wrong: ", str(e))
            raise
            # return
        else:
            try:
                comm = "!!".join(comments).strip("!!")
                report = f'{std},{",".join(f"{i:g}" for i in test_marks)},{",".join(f"{i:g}" if type(i)!=str else i for i in code_marks)},{total_marks:g},"{comm}"'
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
                            print(f"EXITING. {std}'s record not saved")
                            return
                done.add(std)
                print("The comments given for student:")
                print("\n".join(comments))
                print(f" {ctr} - Done for {std} ".center(100, "#"))
            except Exception as e:
                print("Something went wrong: ", e, str(e))
                raise
                return

    print("Report has been generated.")


if __name__ == "__main__":
    pds_checker()
