## Main file to check assignments

## Random is used to get the random compliments
import random
from pathlib import Path
from subprocess import TimeoutExpired,run
from sys import platform
from os import system, chdir

from lib.pds_globals import (
    A_Q_PATH_,
    A_Q_PDS_FILE_,
    A_Q_PLAG_PATH_,
    A_Q_REPORT_,
    BR,
    CHEAT_CODES,
    DELIM,
    BASE,
    PLAG_COMMENT,
)


from lib.pds_file_op import (
    base_missing,
    pull,
    undo_redo_result,
    get_a_ql_from_user,
    get_code_questions,
    get_std_roll_to_m_c_dict,
    
    
    get_test_cases,
    push,
    def_input,
    get_students,
    print,
)


def init_checker(a, q, s=None):
    base = Path(A_Q_PATH_.format(a=a, q=q))

    if base.exists():
        ## Change to the base directory for the rest of the program
        chdir(base)
    else:
        ## The BASE_a directory was not found
        ## try to fetch assignments after confirmation from the user
        base_missing(a)

    ## Check if PDS folder exists in the current directory
    ## Current Dir = {HOME}/{BASE}{a}/{Q_BASE}{q}
    try:
        home = next(Path.cwd().glob("PDS*/"))
    ## IF PDS Folder not found then call get assignments
    except StopIteration as si:
        print("PDS Directory not found,")
        print(
            f"Please download from moodle and place in the folder, {A_Q_PATH_.format(a=a,q=q)}"
        )
        base_missing(a)
        home = next(Path.cwd().glob("PDS*/"))
    report_path = f"{A_Q_REPORT_.format(a=a,q=q)}"
    test_cases = get_test_cases(a, q, s=s)  # pull only once throughout the program
    code_questions = get_code_questions(a, q, s=s)

    return home, report_path, test_cases, code_questions


def pds_checker(a, q, s=None):
    """This is the main method for checking assignments"""
    ## Pull students list before entering the BASE folder
    # n = get_map_roll_to_name()
    if s:
        # get the mapping for roll;set from var/LT{a}.txt
        x = pull(f"var/LT{a}.txt")
        # get a dict {set_attempt:set(roll_no)}
        std_dict_set = {
            'A':{i[0] for i in x if i[1]=="A"},
            'B':{i[0] for i in x if i[1]=="B"}
        }
    # students = get_students(sort_by_score=True)
    students = get_students(sort_by_score=False)
    plag_students_roll_set = set(
        get_students(A_Q_PLAG_PATH_.format(a=a, q=q), only_roll=True))
    ## Getting the BASE number details from user and switching working dir to BASE_a

    home, report_path, test_cases, code_questions = init_checker(a, q,s=s)

    ## TODO: HACK FOR binary marking system
    test_marks_list = [float(i[0]) for i in test_cases]

    ## Here there is a change for %age negative markings, keeping the % sign to signify
    # code_questions = pull("code_questions.txt")  # pull only once throughout the program
    code_marks_list = [
        x if "%" in (x := i[0]) else float(x) for i in code_questions
    ]

    ## Max marks are calculated ignoring the -ve mark conditions
    max_marks = sum((i for i in (test_marks_list + code_marks_list)
                     if "%" not in str(i) and i > 0))

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
        report_head = [
            f'"Student_Name"',
            DELIM.join(test_marks_header),
            DELIM.join(code_marks_header),
            f'"Total_Marks ({max_marks:g})"',
            f'"Comments"',
        ]
        push(report_path, [report_head])
    ## End

    ## START: DONE Support - pulls students details from report to mark them as done
    try:
        done = set(get_std_roll_to_m_c_dict(a, q, cwd=True).keys())
    except Exception as e:
        print(str(e), "\nSomething wrong with Report FILE, please delete it.")
        done = set()
    ## End

    print(f" Working for {report_path} ".center(100, "*"))
    ctr = 0
    last_comment = ""

    for id, std_name, std_roll in students:
        # std_name=n[std_roll]
        short=False
        ctr += 1
        
        if s and std_roll not in std_dict_set[s]:
            continue
        if std_roll in done:
            continue

        total_marks = 0  # current student's marks
        test_marks = [0] * len(
            test_marks_list)  # Current student test case marks
        code_marks = [0] * len(
            code_marks_list)  # Current student code case marks
        comments = []  # String list for current students comments
        print(
            f" {ctr} - Working for student - {std_roll} - {std_name} ".center(
                100, "*"))
        try:
            if std_roll not in plag_students_roll_set:
                comments.append(PLAG_COMMENT)
                print("<PLAG DETECTED>")
            else:
                try:
                    file_exists = True
                    c = next(
                        home.glob(
                            A_Q_PDS_FILE_.format(a=a,
                                                 q=q,
                                                 r=std_roll,
                                                 n=std_name,
                                                 f="*")))
                    if platform == 'win32':
                        system(f'START /MIN /B "" "{c}"'
                               )  # Opens the file in the background
                    elif platform == 'darwin':
                        system(f'open "{c}"')
                    else:
                        system(f'xdg-open "{c}"')

                except StopIteration as si:
                    print(f"C File for  {std_roll} - {std_name} not found")
                    comments.append(
                        f"{BASE} file was not submitted properly {BR}Mark/s lost: {max_marks:g} out of {max_marks:g}{BR}"
                    )
                    file_exists = False
                    short = '00'
                ## Compile and run THE C FILE
                if file_exists:
                    ## Comment if no plag case exists
                    # if def_input("Is the code a Plag Case?", "0") != "0":
                    #     t = f"\n{std_roll}{DELIM}{std_name}"
                    #     push(A_Q_PLAG_.format(a=a, q=q), t)
                    #     print(f"Added {t} to plag cases, Please RERUN the code")
                    #     return "RERUN"
                    return_code = system(f'gcc "{c}" -lm')
                    if return_code == 0:
                        print("Code ran successfully")
                        # test = test_cases[0]  # TESTING
                        comments.append(" TEST CASES ".center(30, "="))
                        comments.append("")  ## Hack for new line
                        for i, line in enumerate(test_cases):
                            ## RUN C FILE here with the test case

                            ## HACK START: SUPPORT For file input If test_case_input_file_# exists then copy it to infile.txt
                            if Path(f"test_case_in+put_{i+1}.txt").exists():
                                Path("infile.txt").write_text(
                                    Path(f"test_case_input_{i+1}.txt").
                                    read_text())
                            ## End

                            mark, test_comment, test = line
                            mark = float(mark)
                            print(f"Test_Case_{i+1}:".center(50, "-"))
                            print(f"Input: {test}")
                            print(f"Desired Output: \n{test_comment}\n---------\n")
                            print(f"Program Output:")

                            if platform == 'win32':
                                cmd = f"a.exe"
                            else:
                                cmd = f"./a.out"
                            # subprocess.check_output(cmd, shell=True, timeout=2)
                            ### HACK: MANUAL CHECKING
                            # system(cmd)
                            ### END HACK
                            #"""
                            try:
                                proc=run(cmd,input=test.replace(BR,'\n'), capture_output=True, text=True,timeout=3)
                                out=proc.stdout
                                
                            except TimeoutExpired:
                                out=f'[ERROR: SEGMENTATION_FAULT or RUNTIMEOUT]'
                                # comments.append(f'{BR}Code goes into an Infinite Loop')
                                # raise e
                            except Exception as e:
                                print(str(e))
                                raise e
                            try:
                                proc.kill()
                            except (AttributeError,UnboundLocalError):
                                pass
                            except Exception as e:
                                print(str(e))
                                raise e
                                pass
                            print(out)
                            try:
                                out=out.replace('\n',BR)
                            except Exception as e:
                                print(str(e))
                                out=''
                                # raise e
                                pass
                            if len(out)>(lim:=500): out=out[:lim]+"..."
                            
                            #"""
                            # try:
                            ## Try to Kill the process after execution
                            # cmd_kill=f"taskkill -im {cmd} -f"
                            # cmd_kill=f"""wmic process where "name='{cmd}'" delete"""
                            # run(cmd_kill,text=True)
                            # except Exception as e:
                            # print(str(e))
                            # else:
                                # system(f"timeout 1s echo {test.replace(BR,'\n')} | ./a.out")

                            ## HACK: START: Support to open out file in case an external file is being created
                            if Path("outfile.txt").exists():
                                system("outfile.txt")
                            ## End

                            # This is for non-binary test marks
                            if mark > 0:
                                inp=def_input(
                                        f"\n\nTest_Case_{i+1} - [{mark:g}] Mark/s : ",
                                        mark, short,report_path=report_path)
                                if inp == 'ss':
                                    short='ss'
                                    inp = mark
                                elif inp == '00':
                                    short='00'
                                    
                                elif inp == 'RERUN' or inp == 'r': return "RERUN"
                                test_marks[i] = float(inp)
                                if test_marks[i] < mark:
                                    comments.append(
                                        f"{BR}FAILED: Test Case {i+1}: {BR}INPUT:{test}{BR}Desired Output:{BR}{test_comment}"
                                    )
                                    if platform == 'win32':
                                        comments.append(f'{BR}Your output:{BR}{out}')
                                    comments.append(f"{BR}  Mark/s obtained: {test_marks[i]:g} out of {mark:g}{BR}")
                                elif test_marks[
                                        i] >= mark:  # in case of typing errpr
                                    test_marks[i] = mark
                                    comments.append(
                                        f"{BR}PASSED: Test Case {i+1}: {BR}INPUT:{test}{BR}Desired Output:{BR}{test_comment}{BR}  Mark/s obtained: {mark:g} out of {mark:g}{BR}"
                                    )
                            """
                            else:  # This case is for -ve marking, defaults to zero, adds a comment if -ve marks given
                                test_marks[i] = float(
                                    def_input(
                                        f"\n\nTest_Case_{i+1} - ({mark:g}) Mark/s - Def: [0]: ",
                                        0,
                                    ))  # defaults to 0
                                if test_marks[i] == mark:
                                    # if -ve marks are given then add comment
                                    comments.append(
                                        f"{BR}Passed Negative Criteria: {BR}INPUT:{test}{BR}Desired Output:{test_comment}{BR}  Mark/s lost: {mark:g}"
                                    )
                            """
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
                            """
                        ## HACK: END Support for Binary test marks (complete)
                        """ This is for binary test marks (complete), if one test case fails then all marks are lost
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
                        """
                        max_test_marks = sum(i for i in test_marks_list if i > 0)
                        if max_test_marks == sum(test_marks):
                            # short = 'ss'
                            # comments.pop(" TEST CASES ".center(30, "="))
                                                    # delete previous comments
                            comments=comments[:-3*(len(test_cases))]
                            comments.append(
                                    f"PASSED: All test cases - Marks : {max_test_marks:g} out of {max_test_marks:g}"
                                )
                            # pass
                        elif sum(test_marks) == 0:
                            # comments=comments[:-(len(test_cases))]
                            comments=comments[:-3*(len(test_cases))]
                            comments.append(
                                f"{BR}FAILED: All test cases - Marks Lost: {max_test_marks:g} out of {max_test_marks:g}"
                            )
                    else:
                        print("The code didn't compile")
                        ## HACK: Start Support for Binary test marks
                        max_test_marks = sum(i for i in test_marks_list
                                             if i > 0)
                        comments.append(" TEST CASES ".center(30, "="))
                        comments.append("")
                        comments.append(
                            f"{BR}FAILED: Code didn't compile successfully{BR}  Mark/s obtained: {0:g} out of {max_test_marks:g}{BR}"
                        )
                    

                    comments.append("")
                    comments.append(" CODE CASES ".center(30, "="))
                    comments.append("")

                    short = None if short == '00' else short
                    for i, cq in enumerate(code_questions):
                        mark, ques = cq
                        if ("%" in mark):  # This case is for % marking, defaults to zero, adds a comment if -ve marks given
                            code_marks[i] = float(
                                def_input(
                                    f"\n\n{ques} - ({mark}) Mark/s - [0] / +ve (full negative) / -ve (partial negative): ",
                                    0, short))  # defaults to 0
                            ## This is to deal with the case where code marks entered is less than max negtive marks
                            max_neg_mark = float(mark.strip("%"))
                            code_marks[i] = (code_marks[i] if
                                             max_neg_mark < code_marks[i] <= 0
                                             else max_neg_mark)
                            if code_marks[i] < 0:
                                comments.append(
                                    f"{BR}FAILED: Negative % Code Case {i+1}:{BR}{ques} {BR}  Mark/s lost: {code_marks[i]:g}% out of Total Marks Obtained"
                                )
                                code_marks[i] = f"{code_marks[i]:g}%"
                        else:
                            mark = float(mark)
                            if mark >= 0:
                                inp=def_input(
                                        f"\n\n{ques} - [{mark:g}] Mark/s : ",
                                        mark, short,report_path=report_path)
                                if inp == 'ss':
                                    short='ss'
                                    inp = mark
                                elif inp == '00':
                                    short='00'
                                    
                                elif inp == 'RERUN' or inp == 'r': return "RERUN"
                                # elif 'z' in inp or 'r' in inp: return undo_redo_result(report_path,inp)
                                code_marks[i] = float(inp)
                                if code_marks[i] < mark:
                                    comments.append(
                                        f"{BR}FAILED: Code Case {i+1}:{BR}{ques}{BR}  Mark/s obtained: {code_marks[i]:g} out of {mark:g}{BR}"
                                    )
                                elif code_marks[
                                        i] >= mark:  # in case of typing err0r
                                    code_marks[i] = mark
                                    # NOTE: Uncomment this to give a comment for each passed code case
                                    comments.append(
                                        f"{BR}PASSED: Code Case {i+1}:{BR}{ques}{BR}  Mark/s obtained: {mark:g} out of {mark:g}{BR}"
                                    )
                            elif (
                                    mark < 0
                            ):  # This case is for -ve marking, defaults to zero, adds a comment if -ve marks given
                                code_marks[i] = float(
                                    def_input(
                                        f"\n\n{ques} - ({mark:g}) Mark/s - [0] / +ve (full negative) / -ve (partial negative): ",
                                        0, short))  # defaults to 0
                                ## This is to deal with the case where code marks entered is less than max negtive marks
                                code_marks[i] = (code_marks[i]
                                                 if mark <= code_marks[i] <= 0
                                                 else mark)
                                if code_marks[i] < 0:
                                    comments.append(
                                        f"{BR}FAILED: Negative Code Case {i+1}:{BR}{ques}{BR}  Mark/s lost: {code_marks[i]:g} out of {mark:g}{BR}"
                                    )
                    max_code_marks = sum(i for i in code_marks_list if "%" not in str(i) and i > 0)
                    if  max_code_marks == sum(code_marks):
                        # delete previous comments
                        comments=comments[:-(len([i for i in code_marks_list if "%" not in str(i) and i > 0]))]
                        comments.append(
                                f"PASSED: All code cases - Marks : {max_code_marks:g} out of {max_code_marks:g}"
                            )
                    elif sum(code_marks) == 0:
                        comments=comments[:-(len([i for i in code_marks_list if "%" not in str(i) and i > 0]))]
                        comments.append(
                            f"{BR}FAILED: All code cases - Marks Lost: {max_code_marks:g} out of {max_code_marks:g}"
                        )
                    # hack for A5_Q3
                    elif sum(code_marks) == 10:
                        comments=comments[:-(len([i for i in code_marks_list if "%" not in str(i) and i > 0]))+1]
                        comments.append(
                            f"{BR}FAILED: All OTHER code cases - Marks Lost: {max_code_marks-10:g} out of {max_code_marks:g}"
                        )

                    
                    total_marks = sum((i for i in (test_marks + code_marks)
                                       if "%" not in str(i)))
                    ## TODO: Here we will deduct the negative percentage sums and round to nearest b=0.5 using formula n=b*round(a/b)
                    rounding_base = 0.5
                    total_marks = rounding_base * round(
                        (total_marks + total_marks * sum(
                            float(i.strip("%"))
                            for i in code_marks if "%" in str(i)) / 100) /
                        rounding_base)
                    if total_marks > max_marks:
                        total_marks = max_marks
                    elif total_marks < 0:
                        total_marks = 0
                comments.append("")
                comments.append("".center(30, "="))
                comments.append("")
                comments.append(
                    f" TOTAL MARKS OBTAINED = {total_marks:g}/{max_marks:g} ".center(
                        50, "#"))

        except Exception as e:
            print("Something went wrong during test/code checking: ", str(e))
            raise e
            # return
        try:
            # short=False
            # other_comment = def_input("\n\nGive any other comment? [0]/1: ",
            #                           '0')
            other_comment = def_input("\n\nGive any other comment? [0]/1: ",
                                      0, short)
            if other_comment == 1:
                comments.insert(0, "")  # Hack for extra spacing
                last_comment = def_input(
                        f"\nPlease enter your final comment for {std_roll} - {std_name}:\n",
                        last_comment)
                comments.insert(
                    0,
                    last_comment,
                )
            elif total_marks == max_marks:
                comments.insert(0, "")  # Hack for extra spacing
                # comments.append("")  # Hack for extra spacing
                comments.insert(
                    0,
                    random.choice("""Good work
                        Keep it up
                        Keep up the good work
                        Great Job
                        Clean Code
                        Perfect
                        Good
                        Nice work""".split("\n")).strip(),
                )
            comm = f"{BR}".join(comments).strip(f"{BR}")
            report_entry = [
                std_roll,
                DELIM.join(f"{i:g}" for i in test_marks),
                DELIM.join(f"{i:g}" if type(i) != str else i
                           for i in code_marks),
                f"{total_marks:g}",
                comm,
            ]
            # HACK TO fix: keep trying to save record
            while 1:
                try:
                    push(report_path, [report_entry])
                    break
                except PermissionError:
                    print(
                        "The report file is open, please close it to proceed")
                    if (def_input("Press 1 to Try again, or 0 to Quit [1]/0: ",
                                  "1") != "1"):
                        print(f"EXITING. {std_roll}'s record not saved")
                        return
            done.add(std_roll)
            print("The comments given for student:\n")
            print("\n".join(comments))
            print(f" {ctr} - Done for {std_roll} - {std_name} ".center(
                100, "#"))
        except Exception as e:
            print("ERROR: Could not record student details: ", e, str(e))
            raise
            # return

    print("Report has been generated.")
    return 0

def pds_driver(a=None,ql=None, s=None):
    base_home = Path.cwd()
    # s=None
    if a is None:
        a, ql, s = get_a_ql_from_user()
    # print(a)
    # print(ql)
    ## Set base to the required directory
    for q in ql:
        x = "RERUN"
        while x == "RERUN":
            x = pds_checker(a, q, s)
            chdir(base_home)

if __name__ == "__main__":
    pds_driver()
