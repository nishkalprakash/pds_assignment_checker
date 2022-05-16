## To fix test cases and code cases to the default set

from pathlib import Path
from lib.pds_file_op import get_test_cases, push
from lib.pds_globals import A_, TEST_, TMP


def reset_test_code():
    from lib.pds_file_op import create_base_folders as cbf,get_a_q_from_user

    a,q=get_a_q_from_user()
    for _ in q.split(): cbf(a,_)


## To properly format test cases for sharing
def format_test_cases():
    from lib.pds_file_op import get_a_q_from_user

    a,ql=get_a_q_from_user()
    for q in ql.split():
        aq={'a':a,'q':q}
        l=[(i[0],i[1].replace("!!",'\n').replace('{',"").replace('}',"")) for i in get_test_cases(**aq,cwd=False)]
        p=Path(f"{TMP}/{A_.format(**aq)}/{TEST_.format(**aq)}")
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text("")
        for i,s in enumerate(l):
            push(p,f"Test Case {i+1} [{s[0]} marks]:\n{s[1]}",attr='a+')
        
    # for _ in q.split(): cbf(a,_)
    
if __name__ =="__main__":
    # reset_test_code()
    format_test_cases()