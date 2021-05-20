## Program to check the Submission times of students for the Lab Test Checking


## TODO: GET SUBMISSION TIME for the assignment and question inputted by user (better to get for all questions of that assign )
# from lib.pds import init_selenium, MOODLE_COURSE_ID

# driver=init_selenium()
# driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id={MOODLE_COURSE_ID}")


from lib.pds_pygsheets import get_worksheet
from lib.pds_file_op import get_std_to_m_c_dict
import os
from time import sleep

ws=get_worksheet()

os.chdir(r'C:\Users\Admin\Documents\pds_assignment_checker\Assignments')

std_dict=get_std_to_m_c_dict('1','1')

for row in ws.range('C3:C94'):
    for cell in row:
        m=cell.neighbour('right')
        if not m.note:
            std=cell.value.strip()
            m.value=std_dict[std]['m']
            m.note=std_dict[std]['c']
        print(f"done for {std}".center(50,'*'))
        sleep(0.2)
