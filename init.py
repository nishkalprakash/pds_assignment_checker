from pathlib import Path
l, a = input("Please enter the lab and assignment number: ").strip().split()
base = Path(f"Lab_{l}_Assignment_{a}")
if base.exists():
    print("The folder already exists.")
    exit()
Path.mkdir(base)
Path.touch(base/"code_questions.txt")
Path.touch(base/"test_cases.txt")
print("Done creating test_cases.txt and code_questions.txt files")