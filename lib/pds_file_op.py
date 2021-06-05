## FILE READ WRITE Operations
from pathlib import Path
from re import findall
from lib.pds_globals import BASE,HOME


from time import strftime

def dprint(func):
    def wrapped_func(*args,**kwargs):
        return func(strftime("%H:%M:%S - "),*args,**kwargs)
    return wrapped_func
print=dprint(print)

## Print the variable with the name and value
def printf(*args):
    for var in args:
        print(f"{var=}")

## Gives the user a default input option which can be inputted using enter
def def_input(text, default=""):
    x = input(f"{text} [{default}]: ").strip()
    if x:
        return x
    else:
        return default

## Gets input from user
def get_a_q_from_user(q=True):
    ll=list(Path(HOME).glob(f"{BASE}*"))
    latest_a = max(int(findall('\d+$',i.name)[0]) for i in ll) if ll else 0
    a= def_input(
            f"Please enter the {BASE} number", latest_a
        )
    if q:
        ## CURRENTLY supports one question check at a time
        ## q stores the question number
        q= def_input(
            f"Please enter the Question number",'1'
        )
    
        return a,q
    else:
        return a

def pull(path):
    return [x for i in Path(path).read_text().strip().split("\n") if (x:=i.strip()) and not x.startswith('#')]

def push(path, text):
    with Path(path).open("a+") as f:
        f.write(text + "\n")

def get_std_to_m_c_dict(a,q=None):
    if q is not None:
        report = Path(f"{BASE}_{a}/Question_{q}/{BASE}_{a}_Question_{q}_report.csv")
        
    else:
        report = Path(f"{BASE}_{a}/{BASE}_{a}_report.csv")
    if not report.exists():
            report = Path(HOME)/report

    text = report.read_text().strip()
    text_list = text.split("\n")
    head = text_list[0].split(",")
    index = [i for i, k in enumerate(head) if k.strip('"').startswith("Total")][0]
    lines = text_list[1:]
    d = dict()
    # Marks are taken directly from the total column, so if marks just deducted from there, its OK
    for line in lines:
        l = line.split(",")
        d[l[0].strip('"')]={
                'm':l[index].strip(),
                'c':"".join(l[index + 1 :]).strip('"').strip().replace(";;", "\n").strip()
            }
    ## d (dict) = { std : { m:marks, c: comments}}
    return d

def get_students():
    """ Returns the students list """
    from lib.pds_globals import VAR
    return pull(f"{VAR}/students.txt")

def unzip(a_base,q):
    """unzip files"""
    ## Get the zip file name
    try:
        a_base=Path(a_base)
        fname=next(a_base.glob("*.zip"))
        target=a_base/f'Question_{q}'/fname.name
        fname=fname.replace(target)
    except StopIteration:
        print("ZIP FILE NOT FOUND")
        raise

    ## TODO then extract the zip
    from zipfile import ZipFile
    zip_file = ZipFile(fname)
    folder=fname.parent/fname.stem
    if folder.exists():
        print("FODLER ALREADY EXISTS")
        return -1
    else:
        folder.mkdir()
    for names in zip_file.namelist():
        zip_file.extract(names, folder)
    zip_file.close()
    ## then delete the original zip
    from os import remove
    remove(fname)
    return 0

def create_base_folders(a,q=None):
    ## Support for creating Questions folder added
    base = Path(f"{HOME}/{BASE}_{a}/Question_{q}") if q is not None else Path(f"{HOME}/{BASE}_{a}")
    if base.exists():
        print(f"{base} folder already exists.")
        # exit()
        return 1
    Path.mkdir(base,parents=True)
    code_questions = base / "code_questions.txt"
    Path.touch(code_questions)
    test_cases = base / "test_cases.txt"
    Path.touch(test_cases)
    print(f"Created:\n\t{base}\n\t{test_cases}\n\t{code_questions}")
    # print(f"Please edit the following:\n{test_cases}\n{code_questions}")
    return 0


