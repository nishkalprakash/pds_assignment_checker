## This file is to perfom a plag test among the submissions
## Orignal code by Ishwarkar Rohan Shankar - rohan7066@iitkgp.ac.in

import sys
from os import listdir
from os.path import isfile, join
import os, shutil
from shutil import copyfile
from pathlib import Path

# from pathlib import Path
a = input("Please enter the assignment number: ")
folder_name = "Assignment_" + a
new_name = folder_name + "_moss"
if os.path.isdir(new_name):
    shutil.rmtree(new_name)
os.mkdir(new_name)

# pds=Path(folder_name).
try:
    home = next(Path(folder_name).glob("PDS*/"))
except StopIteration as si:
    print("PDS Directory not found,")
    print(f"Please download from moodle and place in the folder, Assignment_{a}")
    exit()
moss_command = "perl moss.pl -l c -c " + folder_name + "_report "
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
    moss_command = moss_command + '"' + os.path.join(new_name, roll_no) + '"' + " "
print(moss_command)
os.system(moss_command)

input("Press any key to continue:....")
if os.path.isdir(new_name):
    shutil.rmtree(new_name)
