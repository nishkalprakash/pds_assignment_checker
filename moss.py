## This file is to perfom a plag test among the submissions
## Orignal code by Ishwarkar Rohan Shankar - rohan7066@iitkgp.ac.in

from lib.pds_selenium import get_assignments
from lib.pds_globals import BASE,LIB,HOME
from lib.pds_file_op import def_input, get_a_q_from_user

from os import chdir, mkdir,system
from shutil import copyfile,rmtree
from pathlib import Path
from time import sleep
from itertools import chain
m=(Path(LIB)/Path("moss.pl")).absolute()
# base=Path.cwd()
a=get_a_q_from_user(q=False)

assign_folder_name = Path(f"{HOME}/{BASE}_{a}").absolute()
if not assign_folder_name.exists():
    assign_folder_name.mkdir(parents=True,exist_ok=True)

# from auto_upload import init_selenium
# driver=init_selenium()
if not len([i for i in assign_folder_name.iterdir() if i.is_dir()]):
    ## if there are no folders then get the assignments from moodle
    get_assignments(a)

chdir(assign_folder_name)

recheck=True
for question in Path().glob("*/"):

    if (question/'moss_results.txt').exists():
        print(f"\n\nMoss results for {question} exists.")
        recheck=def_input("Do you want to re-generate the moss report? [0]/1",0)
        if not recheck: continue
    if question.is_file():
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

    moss_command = f'perl "{m}" -l c -c "{BASE}_{a}_{Path().cwd().name}_report" '
    ## Only copy files that have the extensions .c, .C or .txt 
    for f in chain(pds_folder_name.glob("*.[cC]"),pds_folder_name.glob("*.txt")):
        lf = f.name.split("_")
        # new_fname = lf[0].strip() + "_" + lf[-1].split(".")[-2].strip()[-9:] + ".c"
        new_fname = lf[0].strip() + ".c"
        copyfile(f, moss_folder_name/new_fname)
        moss_command += f'"{new_fname}" '
    
    chdir(moss_folder_name)
    moss_command += f' | tee "../moss_results.txt"'
    print(moss_command)
    system(moss_command)
    # sleep(10)
    chdir(assign_folder_name)
    chdir(question)
    if moss_folder_name.is_dir():
        rmtree(moss_folder_name)
    chdir(assign_folder_name)
    

out_file=Path()/"moss_results.txt"
if recheck or not out_file.exists():
    out=["Hi,",
    'PFA the moss results.'
    ]
    for moss_results in Path().glob("*/moss_results.txt"):
        text=moss_results.read_text()
        from re import findall
        addr=findall(r"http.*",text)
        out.append(f"{BASE}_{a}_{moss_results.parent}:\n\t{addr[0]}")

    moss_results="\n\n".join(out)
    out_file.write_text(moss_results)

print("Moss results have been genereated")
print(out_file.read_text())
