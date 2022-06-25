from pathlib import Path

from lib.pds_globals import BR
from lib.pds_pygsheets import auth, get_worksheet, get_spreadsheet
from lib.pds_file_op import push,pull,sleep


master='Master'

map_path=Path('var/DSM_mapping.txt')
com_path = Path('var/DSM_com_marks.txt')
fc_path=Path('var/DSM_file_count.txt')
bug_path=Path('var/DSM_bug_student.txt')
std_sort_path=Path('var/DSM_std_sorted.txt')
rn='rollno'
n='name'
m=f'Marks'
c=f'Comments'

dest=Path(r'G:\My Drive\College\PhD\TA\Sem_6\TA\for_priya_da')
# ctr=1
def get_files():
    stds_sorted=pull(std_sort_path)
    base=Path(r"D:\Downloads\OneDrive_2022-06-24\Submitted files")
    test='Long Test (Part-B)'
    import shutil
    ctr=1
    for s in stds_sorted:
        test_base=base/s[1]/test
        if test_base.exists():
            c=list(list(test_base.iterdir())[-1].glob('*.pdf'))[-1]
            shutil.copy(c,dest/f'{ctr:03} - {s[1]} - {s[0]} - LT_1_B.pdf')
        ctr+=1
    
# get_files()

## BEGIN: INIT SECTION ###

def pull_mapping():
    sp_url="https://docs.google.com/spreadsheets/d/1rM3ok0K--GBtW1QW9gbT5buLRL3FkIQbVMj4hI3iNpA/edit?usp=sharing"
    base=Path(r"D:\Downloads\OneDrive_2022-06-24\Submitted files")
    test='Long Test (Part-B)'
    mapping=[]
    # fc.append([s[0],s[1],str(c)])
    # push(fc_path,fc)
    cauth=auth()
    sp=get_spreadsheet(cauth,sp_url)
    ws=get_worksheet(cauth,sp,master)
    records=ws.get_all_records()
    bug=set(s[0] for s in pull(bug_path))
    for r in records:
        if r[rn] not in bug:
            c=0
            test_base=base/r[n]/test
            if test_base.exists():
                c=len(list(sorted(test_base.iterdir())[-1].glob('*.pdf')))
            mapping.append([r[rn],r[n],str(c)])

    push(map_path,mapping,'w+')

## Do only once
# pull_mapping()


def gen_std_sort():
    mapping=pull(map_path)
    # sorted_stds=[]
    def get_name(x):
        sn=x[1].strip().replace('  ',' ')
        sn=sn.split(' ')
        n=[]
        if len(sn)>=3:
            n.append(sn[1])
            n.extend(sn[2:])
        elif len(sn)==2:
            n.append(sn[1])
            n.append('ZZZZZZ')
        n.append('AAAA')
        n.append(sn[0])
        return " ".join(n)
    mapping.sort(key=get_name)
    push(std_sort_path,mapping,'w+')
    push('test.txt',sorted([get_name(i) for i in mapping]),'w+')
    from pprint import pprint
    pprint(pull('test.txt'))

# gen_std_sort()
## END: INIT SECTION ###


def update_comm_marks():
    sp_url="https://docs.google.com/spreadsheets/d/1rM3ok0K--GBtW1QW9gbT5buLRL3FkIQbVMj4hI3iNpA/edit?usp=sharing"
    
    cauth=auth()
    sp=get_spreadsheet(cauth,sp_url)



    # wks=sp.worksheets()
    mapping=pull(map_path)
    master_sp=get_worksheet(cauth,sp,master)
    master_sp.title

    rec=master_sp.get_all_records()

    roll_to_mark_comm={s[0]:{n:s[1],m:'0',c:''} for s in mapping}
    for r in rec:
        try:
            if r[m]:
                roll_to_mark_comm[r['rollno']][m] = str(r[m])
            if r[c]:
                roll_to_mark_comm[r['rollno']][c] = r[c]
        except KeyError:
            print(r['rollno']," is missing in TEAMS")
    def push_r_n_m_c(roll_to_mark_comm):
        push(com_path,[[key,v[n],v[m],v[c].replace('\r',BR).replace('\n',BR)] for key,v in roll_to_mark_comm.items()],'w+',DELIM=';;')
    push_r_n_m_c(roll_to_mark_comm)

update_comm_marks()


def pull_r_n_m_c():
    return {k:{n:n1,m:m1,c:c1}for k,n1,m1,c1 in pull(com_path,DELIM=';;')}

roll_to_mark_comm=pull_r_n_m_c()
roll_to_mark_comm
fc={r:c for r,n,c in pull(map_path)}

from pyautogui import hotkey,press
from pyperclip import copy

delay=0.1

def hk(*args,**kargs):
    sleep(delay)
    hotkey(*args,**kargs)
    # print(args)
def pr(*args,**kargs):
    sleep(delay)
    press(*args,**kargs,interval=delay)

stds_sorted=pull(std_sort_path)
print("PLEASE CLICK ON THE FIRST STUDENT 'FEEDBACK' BOX")
ctr=5
print(f"SLEEPING FOR {ctr} seconds")
sleep(ctr)
DO_ONCE=True
for s in stds_sorted:
    # write()
    s=s[0]
    r=roll_to_mark_comm[s]
    print(f"WORKING FOR {s} - {r[n]}")
    m1=r[m]
    c1=r[c].replace(BR,'\n')
    miss= fc[s] == '0' and m1 == '-'
    copy(c1)
    if miss:
        ## FILE MISSING : GO DIRECTLY TO `FEEDBACK`
        m1='0'
        sleep(1)
        pr('tab',presses=4)
        ## Leads to FEEDBACK
    elif not DO_ONCE:
        sleep(2)
        pc=13
        if fc[s]=='0': fc[s]='1'
        pr('tab',presses=pc+(int(fc[s])*2))
        ## Leads to FEEDBACK

    hk('ctrl','a')
    hk('ctrl','v')
    # sleep(1)
    pr('tab',presses=4)
    ## Leads to marks
    # sleep(1)
    copy(m1)
    hk('ctrl','a')
    hk('ctrl','v')
    if miss:
        pr('tab',presses=8)
    elif DO_ONCE:
        pr('tab',presses=16)
        DO_ONCE=False
    else:
        pr('tab',presses=15)
    pr('enter')
    # sleep(5)
