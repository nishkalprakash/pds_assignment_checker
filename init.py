from pathlib import Path


def init(a):
    base = Path(f"Assignment_{a}")
    if base.exists():
        print(f"{base} folder already exists.")
        exit()
    Path.mkdir(base)
    code_questions = base / "code_questions.txt"
    Path.touch(code_questions)
    test_cases = base / "test_cases.txt"
    Path.touch(test_cases)
    print(f"Created:\n\t{base}\n\t{test_cases}\n\t{code_questions}")
    # print(f"Please edit the following:\n{test_cases}\n{code_questions}")


if __name__ == "__main__":
    a = input("Please enter the Assignment number: ").strip()
    init(a)