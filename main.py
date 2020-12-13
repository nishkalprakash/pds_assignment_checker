# 1. Auto read assignments from downloads folder
# 2. Only read files of the students from list
# 3. Compile the c file
# 4. Run the output file with the test cases (read from another file)
# 5. For each test case Ask input to grade correct or incorrect
# 6. Open the c file in text editor
# 7. Ask questions to user according to criteria and input the marks for each question
# 8. Make a composite file with the resutls

from pathlib import Path
import os

def pull(path):
    return Path(path).read_text().strip().split("\n")

def push(path,text):
    with Path(path).open("a+") as f:
        f.write(text+"\n")

def main():
    students = pull("students.txt")

    l, a = input("Please enter the lab and assignment number: ").strip().split()

    base = Path(f"Lab_{l}_Assignment_{a}")
    os.chdir(base)

    try:
        home = next(Path.cwd().glob('PDS*/'))
    except StopIteration as si:
        print("PDS Directory not found")
        return

    test_cases = pull("test_cases.txt")
    code_questions = pull("code_questions.txt")
    test_marks_list = [float(i.split(';')[0]) for i in test_cases]
    code_marks_list = [float(i.split(';')[0]) for i in code_questions]

    test_marks = [f'Test_Case_{i} ({test_marks_list[i]:g})' for i in range(len(test_cases))]
    code_marks = [
        f'Code_{i} ({code_marks_list[i]:g})' for i in range(len(code_questions))]

    header = f"Student_Name,{','.join(test_marks)},{','.join(code_marks)},Total_Marks,Comments"

    report_path = f"Lab_{l}_Assignment_{a}_report.csv"
    if not Path(report_path).exists():
        push(report_path,header)

    try:
        done = set(i.split(',')[0] for i in pull(report_path)[1:])
    except:
        done = {}

    print(f"Working for {report_path}".center(100,'*'))

    for student in students:
        if student in done:
            continue
        total_marks=0
        test_marks = [0]*len(test_marks)
        code_marks = [0]*len(code_questions)
        comments=[] #String list
        print("Working for student - ",student)
        try:
            try:
                c = next(home.glob(student+"*"))
                os.system(f'"{c}"')
            except StopIteration as si:
                print(f"C File for {student} not found")
                comments.append(f"Assignment was not submitted on time - Mark/s lost: {sum(test_marks_list+code_marks_list):g}")
                continue
            # TODO: COMPILE THE C FILE
            return_code = os.system(f'gcc "{c}"')
            if return_code == 0:
                print("Code ran successfully")
                # test = test_cases[0]  # TODO: TESTING
                for i, line in enumerate(test_cases):
                    #TODO: RUN C FILE here with the test case
                    mark,test_comment,test=line.split(";")
                    mark=float(mark)
                    print(f"Test_Case_{i+1}: {test}")
                    os.system(f"echo {test} | a.exe")
                    test_marks[i]=float(input(f"\n\nTest_Case_{i+1} - {mark:g} Mark/s : "))
                    if test_marks[i]<mark:
                        comments.append(f"Program failed for Test {i+1}: {test_comment} - Mark/s lost: {mark-test_marks[i]:g}")
                    elif test_marks[i]>mark: #in case of typing errpr
                        test_marks[i] = mark 
            else:
                print("The code didn't compile")
                comments.append(f"The Code didn't compile successfully - Mark/s lost: {sum(test_marks_list):g}")
            for i,q in enumerate(code_questions):
                mark,ques=q.split(';')
                mark=float(mark)
                code_marks[i]=float(input(f"\n\n{ques} - {mark:g} mark/s: "))

                if code_marks[i]<mark:
                    comments.append(
                        f"Failed Criteria: {ques} - Mark/s lost: {mark-code_marks[i]:g}")
                elif code_marks[i] > mark:  # in case of typing errpr
                    code_marks[i] = mark
            total_marks = sum(test_marks+code_marks)
            if input("\n\nGive any other comment? 1/0: ") == '1':
                comments.append(input(f"\nPlease enter your final comment for {student}:\n"))
        
        except Exception as e:
            print("Something went wrong: ",str(e))
            return 
        else:
            report = f'{student},{",".join(f"{i:g}" for i in test_marks)},{",".join(f"{i:g}" for i in code_marks)},{total_marks:g},"{";; ".join(comments)}"'
            push(report_path,report)
            # push(done_path,student)
            done.add(student)
            print("\n".join(comments))
            print(f" Done for {student} ".center(100,'#'))
       
main()