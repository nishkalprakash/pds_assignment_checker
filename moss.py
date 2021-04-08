## This file is to perfom a plag test among the submissions
## Orignal code by Ishwarkar Rohan Shankar - rohan7066@iitkgp.ac.in

import sys
from os import listdir
from os.path import isfile, join
import os, shutil
from shutil import copyfile
from pathlib import Path
import re
from init import BASE

# from pathlib import Path
a = input(f"Please enter the {BASE} number: ")
assign_folder_name = BASE + "_" + a
for question in Path(assign_folder_name).glob("*_moss/"):
    shutil.rmtree(question)
for question in Path(assign_folder_name).glob("*/"):
    if question.is_file() or (question/'moss_results.txt').exists():
        continue
    folder_name = question
    new_name = f"{folder_name}_moss"
    if os.path.isdir(new_name):
        shutil.rmtree(new_name)
    os.mkdir(new_name)

    # pds=Path(folder_name).
    try:
        home = next(Path(question).glob("PDS*/"))
    except StopIteration as si:
        print("PDS Directory not found,")
        print(f"Please download from moodle and place in the folder, {BASE}_{a}")
        exit()
    moss_command = f"perl moss.pl -l c -c Assignment_{a}_{question.name}_report "
    folder_name = str(home)

    onlyfiles = [
        f
        for f in listdir(folder_name)
        if isfile(join(folder_name, f))
        if f.endswith("c") or f.endswith("cfile") or f.endswith("txt")
    ]

    for f in onlyfiles:
        ll = f.split("_")
        roll_no = ll[0] + "_" + ll[-1].split(".")[0] + ".c"
        # if len(roll_no)==11:
        copyfile(os.path.join(folder_name, f), os.path.join(new_name, roll_no))
        moss_command = moss_command + '"' + os.path.join(roll_no) + '"' + " "
    os.chdir(new_name)
    moss_command = f'{moss_command} | tee "../{question.name}/moss_results.txt"'
    print(moss_command)
    os.system(moss_command)
    os.chdir("../../")
    if os.path.isdir(new_name):
        shutil.rmtree(new_name)

out=[]
for moss_results in Path(assign_folder_name).glob("*/moss_results.txt"):
    # shutil.rmtree(question)
    text=moss_results.read_text()
    addr=re.findall(r"http.*",text)
    out.append(f"{moss_results.parent}:\n\t{addr[0]}")

text="\n\n".join(out)
(Path(assign_folder_name)/"moss_results.txt").write_text(text)

print("Moss results have been genereated")

print(text)
