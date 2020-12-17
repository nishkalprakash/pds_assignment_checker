from pathlib import Path
a = input("Please enter the Assignment number: ").strip()
base = Path(f"Assignment_{a}")
if base.exists():
    print("The folder already exists.")
    exit()
Path.mkdir(base)
Path.touch(base/"code_questions.txt")
Path.touch(base/"test_cases.txt")
print("Done creating test_cases.txt and code_questions.txt files")