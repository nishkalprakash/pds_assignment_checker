## HACK for recheck, keeps all stidents that got 100 or 0
from lib.pds_file_op import get_std_roll_to_m_c_dict,pull,push

sd=get_std_roll_to_m_c_dict('1','1')

std=[]
for s in sd:
    if sd[s]['m']=='100' or sd[s]['m']=='0':
        print(s)
        std.append(s)

r=pull("Assignments\Lab-test_1\Question_1\Lab-test_1_Question_1_report.csv")
rn=[r[0]]
rn.extend([i for i in r if i.split(',')[0] in std])
push("Assignments\Lab-test_1\Question_1\Lab-test_1_Question_1_report.csv","\n".join(rn))

