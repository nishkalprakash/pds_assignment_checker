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

    done = set()

    for student in students:
        if student in done:
            continue
        comments = []  # String list
        print("Working for student - ", student)
        try:
            try:
                file_exists = True
                try:
                    c = next(home.glob(student + "*"))
                except:
                    pass
                try:
                    c_final = next(home_final.glob(student + "*"))
                except:
                    pass
                os.system(f'"{c}"')
                os.system(f'"{c_final}"')
            except StopIteration as si:
                print(f"C File for {student} not found")
                comments.append(
                    f"{BASE} was not submitted properly - Mark/s lost: {max_marks:g} out of {max_marks:g}"
                )
                file_exists = False

        except Exception as e:
            print("Something went wrong: ", str(e))
            return
        else:
            try:
                print("The comments given for student:")
                print("\n".join(comments))
                print(f" Done for {student} ".center(100, "#"))
                input("PRESS ENTER TO CONTINUE...")
            except Exception as e:
                print("Something went wrong: ", e, str(e))
                return

    print("Report has been generated.")


main()
