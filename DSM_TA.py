from pathlib import Path

from lib.pds_globals import BR
from lib.pds_pygsheets import auth, get_worksheet, get_spreadsheet
from lib.pds_file_op import def_input, push,pull,sleep


master='Master'

map_path=Path('var/DSM_mapping.txt')
com_path = Path('var/DSM_com_marks.txt')
done_path=Path('var/DSM_done.txt')
bug_path=Path('var/DSM_bug_student.txt')
std_sort_path=Path('var/DSM_std_sorted.txt')
rn='rollno'
n='name'
m=f'Marks'
c=f'Comments'

# ctr=1
def get_files():
    dest=Path(r'G:\My Drive\College\PhD\TA\Sem_6\TA\for_priya_da')
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
    # sp_url="https://docs.google.com/spreadsheets/d/14GVOrv_G7xz0QlFshWArlDvbABdW7QilEWNgUI6dE0g/edit"
    
    cauth=auth()
    sp=get_spreadsheet(cauth,sp_url)
    


    # wks=sp.worksheets()
    mapping=pull(map_path)
    master_sp=get_worksheet(cauth,sp,master)
    master_sp.title


    ## data=[[i,s[0],s[1]] for i,s in enumerate(stds_sorted,1)]
    ## master_sp.insert_rows(0,len(data),data)

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

# update_comm_marks()


def pull_r_n_m_c():
    return {k:{n:n1,m:m1,c:c_new}for k,n1,m1,c_new in pull(com_path,DELIM=';;')}

roll_to_mark_comm=pull_r_n_m_c()
roll_to_mark_comm
fc={r:c for r,n,c in pull(map_path)}

from pyautogui import hotkey,press,moveTo
from pyperclip import copy,paste

delay=0.1

def hk(*args,**kargs):
    sleep(delay)
    hotkey(*args,**kargs)
    # print(args)
def pr(*args,**kargs):
    sleep(delay)
    press(*args,**kargs,interval=delay)

if def_input("Restart Uploading marks from Beginning?",0):
    done_path.write_text("")


done_std=set(s[0] for s in pull(done_path)[:-1])
stds_sorted=[s for s in pull(std_sort_path) if s[0] not in done_std]
print(f"PLEASE CLICK ON {stds_sorted[0][1]}'s 'FEEDBACK' BOX")
ctr=10
print(f"SLEEPING FOR {ctr} seconds")
sleep(ctr)
DO_ONCE=True
for std in stds_sorted:
    # write()
    s=std[0]
    r=roll_to_mark_comm[s]
    print(f"WORKING FOR {s} - {r[n]}",end='')
    m1=r[m]
    c_new=r[c].replace(BR,'\n')
    miss= fc[s] == '0' and m1 == '-'
    c_old=''
    if not DO_ONCE and miss:
        ## FILE MISSING : GO DIRECTLY TO `FEEDBACK`
        m1='0'
        sleep(1)
        pr('tab',presses=4)
        ## Leads to FEEDBACK
    elif not DO_ONCE:
        sleep(4)
        pc=13
        if fc[s]=='0': fc[s]='1'
        pr('tab',presses=pc+(int(fc[s])*2))

        ## Leads to FEEDBACK

    hk('ctrl','a')
    hk('ctrl','c')
    # sleep(1)
    c_old=paste().replace('\r','')
    copy(c_new)
    hk('ctrl','a')
    hk('ctrl','v')
    # sleep(1)
    pr('tab',presses=4)
    ## Leads to marks
    # sleep(1)
    copy(m1)
    hk('ctrl','a')
    hk('ctrl','v')
    comm_changed = c_old!=c_new
    print(" - ",comm_changed)
    offset=0
    if comm_changed:
        ## here we return the copy to the student
        offset=-1
        pr('tab')
        pr('enter')
        sleep(5)
    if miss:
        if DO_ONCE:
            pr('tab',presses=9+offset)
            DO_ONCE=False
        else:
            pr('tab',presses=8+offset)

    elif DO_ONCE:
        if comm_changed:
            ## BUG: here the file resets so click is not considered if file 
            ## is returned
            offset=-7
        pr('tab',presses=16+offset)
        DO_ONCE=False
    else:
        if comm_changed:
            ## a bug after returning, only press 9 times
            offset=-6
        pr('tab',presses=15+offset)
    pr('enter')
    push(done_path,[std])
    # sleep(5)
