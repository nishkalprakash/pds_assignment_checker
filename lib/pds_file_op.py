## FILE READ WRITE Operations
from pathlib import Path
from re import findall, sub
from lib.pds_globals import A_, BASE,HOME, Q_BASE,VAR


from time import strftime

def dprint(func):
    def wrapped_func(*args,**kwargs):
        return func(strftime("%H:%M:%S - "),*map(lambda x: x.replace('!!','\n'),args),**kwargs)
    return wrapped_func
print=dprint(print)

## Print the variable with the name and value
def printf(*args):
    for var in args:
        print(f"{var=}")


def run_command(command):
    """To run a command and capture the output

    Args:
        command (str): the command to be executd

    Yields:
        str: the output line wise
    """
    from subprocess import Popen,PIPE
    from time import sleep
    p = Popen(command,stdout=PIPE,stderr=PIPE,shell=True,text=True)
    # Read stdout from subprocess until the buffer is empty !
    for line in iter(p.stdout.readline, ''):
        if line: # Don't print blank lines
            yield line
    # This ensures the process has completed, AND sets the 'returncode' attr
    while p.poll() is None:
        sleep(.1) #Don't waste CPU-cycles
    # Empty STDERR buffer
    err = p.stderr.read()
    if p.returncode != 0:
        # The run_command() function is responsible for logging STDERR 
        print("Error: " + str(err))

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
            f"Please enter the {Q_BASE} number",'2'
        )
    
        return a,q
    else:
        return a

def pull(path):
    return [x for i in Path(path).read_text().strip().split("\n") if (x:=i.strip()) and not x.startswith('#')]

def push(path, text):
    with Path(path).open("a+") as f:
        f.write(text + "\n")

def re_sub_space(name):
    return sub(r'\s+',' ',name)

def dict_to_csv(path,d):
    """This function output dict_key,value or in case of list value dict_key,value1,value2... 

    Args:
        path (Path): the output path file for cssv
        d (dict): the dict
    """
    try:
        Path(path).write_text("\n".join(sorted(",".join([k]+v) for k,v in d.items())))
    except TypeError:
        Path(path).write_text("\n".join(sorted(",".join([k]+[v]) for k,v in d.items())))

def csv_to_dict(path,d):
    """To reverse dict_to_csv and data to given dict 

    Args:
        path (_type_): path of the csv file
        d (dict): dict to update
        
    """
    ll=pull(path)
    for l in ll:
        l=l.split(',')
        try:
            d[l[0]].extend(l[1:])
        except:
            d[l[0]]=l[1:]
    return d

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
                'c':"".join(l[index + 1 :]).strip('"').strip().replace("!!", "\n").strip()
            }
    ## d (dict) = { std : { m:marks, c: comments}}
    return d

def get_students():
    """ Returns the students list """
    from lib.pds_globals import VAR
    return pull(f"{VAR}/my_students.txt")

def get_test_cases(a,q):
    """ Returns the Test Cases """
    from lib.pds_globals import TEST_
    return pull(TEST_.format(a=a,q=q))

def get_code_questions(a,q):
    """ Returns the code cases """
    from lib.pds_globals import CODE_
    return pull(CODE_.format(a=a,q=q))

def get_q_list_from_a(a):
    return [i.name.split('_')[-1]for i in Path(f"{HOME}/{BASE}_{a}").iterdir() if i.is_dir()] 

def get_map_name_to_roll(rev=None):
    """Returns a dict {
        Name : Roll
    }
    If rev=True then return Roll : Name

    Returns:
        dict: {name : roll} 
        dict: {roll : name} # if rev=True
    """
    n_index,r_index=0,2
    if rev:
        n_index,r_index=r_index,n_index
    return {(x:=i.split(','))[n_index]:x[r_index] for i in pull(f"{VAR}/mapping.txt")}

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

    ## then extract the zip
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
    ## HACK FOR SEM 6 start ##
    Path(code_questions).write_text("""
30;Logic is correct and gives expected output
25;Efficient and Optimal steps used to get to output
-5;Comments missing, logic hard to understand
-5;Proper Syntax and coding structure (eg. indentation, variable declation, etc) is not followed
""".strip())
    ## HACK FOR SEM 6 END ##
    
    test_cases = base / "test_cases.txt"
    Path.touch(test_cases)
 ## HACK FOR SEM 6 start ##
    Path(test_cases).write_text("""
# Format: `{marks};{label};{test_case}`
# * For Example:
#
# ```csv
# 10;Inside Rectangle (should print inside);0 0 7 7 2 3
# 10;Outside Rectangle (should print Outside);0 0 7 7 9 2
# 10;On Rectange (should print Outside);0 0 7 7 7 2
# ```
""".strip())
    ## HACK FOR SEM 6 END ##
    print(f"Created:\n\t{base}\n\t{test_cases}\n\t{code_questions}")
    # print(f"Please edit the following:\n{test_cases}\n{code_questions}")
    return 0

def base_missing(a):
    if def_input(
        f"{A_.format(a=a)} folder was not found. Try fetching from MOODLE? [{a}]/0", a
    ):
        from lib.pds_selenium import get_assignments

        get_assignments(a)
    else:
        print(f"Did not fetch {BASE} {a}. \n\nEXITING.....")
        exit()