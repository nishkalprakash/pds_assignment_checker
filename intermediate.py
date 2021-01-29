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
    def_assign = [i.name[-1] for i in Path.cwd().glob("Ass*")][-1]
    if def_assign:
        a = def_input(
            f"Please enter the {BASE} number which you want to Grade [{def_assign}]: ",
            def_assign,
        ).strip()
    else:
        a = def_input(
            "Please enter the {BASE} number which you want to Grade [1]: ", "1"
        ).strip()

    base = Path(f"{BASE}_{a}")
    if base.exists():
        os.chdir(base)
    else:
        from init import init

        init(a)

    try:
        home = next(Path.cwd().glob("PDS*Intermediate*/"))
        home_final = next(Path.cwd().glob("PDS*/"))
    except StopIteration as si:
        print("PDS Directory not found,")
        print(f"Please download from moodle and place in the folder, {BASE}_{a}")
        return
    done_file = "done_intermediate.txt"
    if Path(done_file).exists():
        done = set(pull(done_file))  # TODO: Implement a done function to resume
    else:
        done = set()
    for student in students:
        if student in done:
            continue
        print("Working for student - ", student)
        try:
            try:
                try:
                    c = next(home.glob(student + "*"))
                    os.system(f'"{c}"')
                except:
                    print(
                        f"\n\nIntermediate file for {student} not found".center(
                            100, '*'
                        )
                    )
                try:
                    c_final = next(home_final.glob(student + '*'))
                    os.system(f'"{c_final}"')
                except:
                    print(f"\n\Main file for {student} not found".center(100, '*'))

            except StopIteration as si:
                print(f"C File for {student} not found")

        except Exception as e:
            # print("Something went wrong: ", str(e))
            raise (e)
            return
        done.add(student)
        push(done_file, student)
        print(f" Done for {student} ".center(100, "#"))
        input("Press enter to continue: ")


main()
