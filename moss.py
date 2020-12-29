import sys
from os import listdir
from os.path import isfile, join
import os,shutil
from shutil import copyfile
# from pathlib import Path
a=input("Please enter the assignment number: ")
folder_name = "Assignment_"+a
onlyfiles = [f for f in listdir(folder_name) if isfile(join(folder_name, f)) if f.endswith('c') or f.endswith("cfile") or f.endswith("txt")]
new_name = folder_name+"_moss"
if os.path.isdir(new_name):
	shutil.rmtree(new_name)
os.mkdir(new_name)
moss_command = "perl moss.pl -l c -c "+folder_name+"_report "
for f in onlyfiles:
	roll_no = f.split("_")[0]+".c"
	# if len(roll_no)==11:
	copyfile(os.path.join(folder_name,f),os.path.join(new_name,roll_no))
	moss_command = moss_command + '"'+os.path.join(new_name,roll_no)+'"'+" "
# print(moss_command)
os.system(moss_command)

input("Press any key to continue:....")
		
