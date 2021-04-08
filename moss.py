## This file is to perfom a plag test among the submissions
## Orignal code by Ishwarkar Rohan Shankar - rohan7066@iitkgp.ac.in

from os import chdir, getcwd,mkdir,system
from shutil import copyfile,rmtree
from pathlib import Path
import re
from init import BASE

a = input(f"Please enter the {BASE} number: ")

assign_folder_name = Path(f"{BASE}_{a}").absolute()

# from auto_upload import init_selenium

# driver=init_selenium()

chdir(assign_folder_name)


for question in Path().glob("*/"):
    if question.is_file() or (question/'moss_results.txt').exists():
        continue
    chdir(question)

    try:
        ## Check if PDS Folder exists
        ## TODO: Automate downloading of PDS folder using selenium
        pds_folder_name = next(Path().glob("PDS*/"))
    except StopIteration as si:
        print("PDS Directory not found")
        print("Please download from moodle and place in the folder:", Path().cwd())
        exit()
    
    ## IF the folder exists, delete and then recreate
    moss_folder_name = Path(question.name+"_moss")
    if moss_folder_name.exists():
        rmtree(moss_folder_name)
    mkdir(moss_folder_name)

    moss_command = f"perl moss.pl -l c -c Assignment_{a}_{Path.name}_report "
    ## Only copy files that have the extensions .c, .C or .txt 
    for f in pds_folder_name.glob("*.[cC]"):
        lf = f.name.split("_")
        new_fname = lf[0].strip() + "_" + lf[-1].split(".")[-2].strip()[-9:] + ".c"
        copyfile(f, moss_folder_name/new_fname)
        moss_command += f'"{new_fname}" '
    
    chdir(moss_folder_name)
    moss_command += f' | tee "../moss_results.txt"'
    print(moss_command)
    system(moss_command)
    if moss_folder_name.is_dir():
        rmtree(moss_folder_name)
    chdir(assign_folder_name)
    

out_file=Path()/"moss_results.txt"
if not out_file.exists():
    out=[]
    for moss_results in Path().glob("*/moss_results.txt"):
        text=moss_results.read_text()
        addr=re.findall(r"http.*",text)
        out.append(f"Assignment_{a}_{moss_results.parent}:\n\t{addr[0]}")

    moss_results="\n\n".join(out)
    out_file.write_text(moss_results)

print("Moss results have been genereated")
print(out_file.read_text())
