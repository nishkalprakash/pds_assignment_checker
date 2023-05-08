from auto_upload import upload_to_moodle
from lib.pds_file_op import def_input, get_a_ql_from_user, get_std_roll_to_m_c_dict, pull, push
# from pyperclip import copy
from lib.pds_globals import A_Q_REPORT_PATH_

from main import pds_driver

a, ql = get_a_ql_from_user()
q = ql[0]
aq = {'a': a, 'q': q}
roll = def_input("Enter Roll Number:", '22CS30056')
data = get_std_roll_to_m_c_dict(a, q, scale=100).get(roll)
recheck = 0
if (data is None):
    print("No data found")
    recheck = 1

else:
    # ask user input to recheck
    print(*data.values(), sep='\n####\n')
    # copy(data['c'])

    recheck = def_input("Recheck? ([1]/0)", 0)
if recheck:
    # pull=REPORT
    if(data is not None):
        rep = pull(A_Q_REPORT_PATH_.format(**aq))
        rep = [r for r in rep if r[0] != roll]
        push(A_Q_REPORT_PATH_.format(**aq), rep, attr='w+')
    pds_driver(a, q)
    data = get_std_roll_to_m_c_dict(a, q, scale=100).get(roll)

    # copy(data['c'])

    print(*data.values(), sep='\n####\n')



## Open moodle and paste for that roll number only
# ask user if they want to upload to moodle
upload = def_input("Upload to moodle? ([1]/0)", 0)
if upload:
    upload_to_moodle(a, ql, roll=roll)