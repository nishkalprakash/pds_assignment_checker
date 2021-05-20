## Program to check the Submission times of students for the Lab Test Checking


## TODO: GET SUBMISSION TIME for the assignment and question inputted by user (better to get for all questions of that assign )
# from lib.pds import init_selenium, MOODLE_COURSE_ID

# driver=init_selenium()
# driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id={MOODLE_COURSE_ID}")


from lib.pds import VAR
import pygsheets
import os
from time import sleep


c = pygsheets.authorize(f"{VAR}/client_secret.json")

sp=c.open_by_url("https://docs.google.com/spreadsheets/d/1dU8a6-qc3neQK_7G_6bHrdmN12sMAmJ1N1wImA0DYeU/edit#gid=1121699406")

ws=sp.worksheet_by_title('LTs')
sp.worksheets()
r=ws.range('C3:C94')
os.chdir(r'C:\Users\Admin\Documents\pds_assignment_checker')
from auto_upload import get_std_mark_comm_array


os.chdir(r'C:\Users\Admin\Documents\pds_assignment_checker\Assignments')

std_dict=get_std_mark_comm_array('1','1')

for row in r:
    for cell in row:
        m=cell.neighbour('right')
        if not m.note:
            std=cell.value.strip()
            m.value=std_dict[std]['m']
            m.note=std_dict[std]['c']
        print(f"done for {std}".center(50,'*'))
        sleep(0.2)
