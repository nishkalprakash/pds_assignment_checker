## This file is to perfom a plag test among the submissions
## Orignal code by Ishwarkar Rohan Shankar - rohan7066@iitkgp.ac.in

from lib.pds_selenium import get_assignments
from lib.pds_globals import A_, A_MOSS_, A_MOSS_PATH_, A_PATH_, A_Q_, A_Q_MOSS_PATH_, A_Q_REPORT_, BASE, LIB, Q_
from lib.pds_file_op import def_input, get_a_ql_from_user, get_map_roll_to_name, re_sub_space, run_command, push

from os import chdir, mkdir
from shutil import copyfile, rmtree
from pathlib import Path
from itertools import chain

m = (Path(LIB) / Path("moss.pl")).absolute()
base=Path.cwd()
a = get_a_ql_from_user(q=False)

mapping=get_map_roll_to_name(rev=True)

assign_folder_name = Path(A_PATH_.format(a=a)).absolute()
if not assign_folder_name.exists():
    assign_folder_name.mkdir(parents=True, exist_ok=True)

# from auto_upload import init_selenium
# driver=init_selenium()
if not len([i for i in assign_folder_name.iterdir() if i.is_dir()]):
    ## if there are no folders then get the assignments from moodle
    get_assignments(a)

chdir(assign_folder_name)

recheck = False
update_main_moss = False
for question in (i for i in Path().glob("*/") if i.is_dir()):
    q=question.name.replace(Q_.format(q=''),'')
    mq = base/A_Q_MOSS_PATH_.format(a=a,q=q)
    if mq.exists() and len(mq.read_text()):
        print(f"\n\nMoss results for {question} exists.")
        recheck = int(def_input("Do you want to re-generate the moss report? [0]/1", 0))
        if not recheck:
            continue
        else:
            update_main_moss=True
            mq.write_text("")
    if question.is_file():  # bug fix w
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
    moss_folder_name = Path(question.name + "_moss")
    if moss_folder_name.exists():
        rmtree(moss_folder_name)
    mkdir(moss_folder_name)
    moss_command = f'perl "{m}" -l c -c "{A_Q_REPORT_.format(a=a,q=q)}" '
    ## Only copy files that have the extensions .c, .C or .txt
    for f in chain(pds_folder_name.glob("*.[cC]"), pds_folder_name.glob("*.txt")):
        lf = f.name.split("_")
        # new_fname = lf[0].strip() + "_" + lf[-1].split(".")[-2].strip()[-9:] + ".c"
        # name=lf[0].strip().replace(" ", "_")
        name=lf[0].strip()
        new_fname = f"{mapping[name]} - {name} - {A_Q_.format(a=a,q=q)}.c".replace(' ','_')
        copyfile(f, moss_folder_name / new_fname)
        moss_command += f'"{new_fname}" '

    chdir(moss_folder_name)
    # moss_command += f' | tee "../moss_results.txt"'
    print(moss_command)
    # system(moss_command)
    for line in run_command(moss_command):
        print(line)
        push(mq, line)
    # print("Moss finished running - now sleeping for 10 secs")
    # sleep(10)
    chdir(assign_folder_name / question)
    # chdir()
    # Path("moss_results.txt").write_text(moss_out)
    if moss_folder_name.is_dir():
        rmtree(moss_folder_name)
    chdir(assign_folder_name)


moss_out = base/A_MOSS_PATH_.format(a=a)
if not update_main_moss or moss_out.exists():
    recheck = int(def_input("Combined moss results exists.\nDo you want to re-generate the combined moss report? [0]/1", 0))
if update_main_moss or recheck or not moss_out.exists():
    out = ["Hi,", "PFA the moss results."]
    for moss_results in Path().rglob("*moss.txt"):
        text = moss_results.read_text()
        from re import findall

        addr = findall(r"http.*", text)
        out.append(f"{BASE}_{a}_{moss_results.parent}:\n\t{addr[0]}")

    moss_results = "\n\n".join(out)
    moss_out.write_text(moss_results)

print("Moss results have been genereated")
print(moss_out.read_text())
