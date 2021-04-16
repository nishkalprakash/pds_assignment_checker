from pathlib import Path

BASE = "Assignment"
# BASE = "Lab_Test_1_Part"
# BASE = "Lab_Test_2_Part"
# BASE = "Lab_Test_3_Part"
MOODLE_COURSE_ID=400

def init(a,q=''):
    base = Path(f"{BASE}_{a}/Question_{q}") if q!='' else Path(f"{BASE}_{a}")
    if base.exists():
        print(f"{base} folder already exists.")
        exit()
    Path.mkdir(base,parents=True)
    code_questions = base / "code_questions.txt"
    Path.touch(code_questions)
    test_cases = base / "test_cases.txt"
    Path.touch(test_cases)
    print(f"Created:\n\t{base}\n\t{test_cases}\n\t{code_questions}")
    # print(f"Please edit the following:\n{test_cases}\n{code_questions}")


if __name__ == "__main__":
    a = input(f"Please enter the {BASE} number: ").strip()
    init(a)