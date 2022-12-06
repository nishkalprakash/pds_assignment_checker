## FILE READ WRITE Operations
from datetime import timedelta
from pathlib import Path
from random import randint
from re import findall, sub
from time import strftime

from subprocess import PIPE, Popen
from time import sleep

from lib.pds_globals import (
    A_,
    A_PATH_,
    A_PLAG_EMAIL_PATH_,
    A_Q_,
    A_Q_PATH_,
    A_Q_PDS_PATH_,
    A_Q_PLAG_PATH_,
    A_Q_REPORT_,
    A_Q_REPORT_PATH_,
    A_REPORT_,
    A_REPORT_PATH_,
    BASE,
    BR,
    CODE_DEMO,
    CODE_PATH_,
    DELIM,
    HOME,
    Q_,
    Q_BASE,
    SOL_PATH_,
    TEST_DEMO,
    TEST_PATH_,
    VAR,
)


def dprint(func):
    def wrapped_func(*args, **kwargs):
        return func(
            strftime("%H:%M:%S - "),
            *map(lambda x: str(x).replace(BR, "\n"), args),
            **kwargs,
        )

    return wrapped_func


print = dprint(print)


def dsleep(func):
    def wrapped_func(ctr):
        if ctr > 20:
            ctr = randint(ctr - 5, ctr + 5)
        # print(f"SLEEP: {timedelta(seconds=ctr)}")
        return func(ctr)

    return wrapped_func


sleep = dsleep(sleep)


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

    p = Popen(command, stdout=PIPE, stderr=PIPE, shell=True, text=True)
    # Read stdout from subprocess until the buffer is empty !
    for line in iter(p.stdout.readline, ""):
        if line:  # Don't print blank lines
            yield line.strip()
    # This ensures the process has completed, AND sets the 'returncode' attr
    while p.poll() is None:
        sleep(0.1)  # Don't waste CPU-cycles
    # Empty STDERR buffer
    err = p.stderr.read()
    if p.returncode != 0:
        # The run_command() function is responsible for logging STDERR
        print("Error: " + str(err))


## Gives the user a default input option which can be inputted using enter
def def_input(text, default=""):
    default_type=type(default)
    x = input(f"{text} [{default}]: ").strip()
    if x:
        # if " " in x:
        #     return x.split(" ")
        # except:
        return default_type(x)
    else:
        return default


## Gets input from user
def get_a_ql_from_user(q=True):
    """Accepts Assignment Number and Question Number
    Support for checking multiple questions added.
    It will return a ' ' separated string for multiple questions
    USAGE for multi question:
        in the calling function use -
        a,ql=get_a_ql_from_user()
        for q in ql.split()
            <do something with a,q>
    Returns:
        a [str]: assignment number, eg 1|4
        ql [str]: question number, eq 1!1 2 3 4

    """
    ll = list(Path(HOME).glob(f"{BASE}*"))
    latest_a = max(int(findall("\d+$", i.name)[0]) for i in ll) if ll else 0
    a = def_input(f"Please enter the {BASE} number", latest_a)
    ## CURRENTLY supports one question check at a time
    ## q stores the question number
    if not q:
        return a

    ll = list(Path(A_PATH_.format(a=a)).glob(f"{Q_BASE}*"))
    # all_q = " ".join([i.name.removeprefix(Q_BASE) for i in ll] if ll else 0)
    last_q = sorted(ll,key=lambda x:x.stat().st_mtime)[-1].name.removeprefix(Q_BASE) if ll else '1'
    ql = def_input(f"Please enter the {Q_BASE} number", last_q)
    # return a, ql.strip().split()
    return a, ql.strip()


def pull(path, DELIM=DELIM):
    return [
        x.split(DELIM) if DELIM and DELIM in x else x
        for i in Path(path).read_text().strip().split("\n")
        if (x := i.strip()) and not x.startswith("#")
    ]


def push(path, text, attr="a+", DELIM=DELIM):
    with Path(path).open(attr) as f:
        # if type(text)
        x=f.read()
        if x and x[-1]!='\n':
            f.seek(0,2)
            f.write('\n')

        # if f.readline()!='\n':

        try:
            f.write(text + "\n")
        except TypeError:
            try:
                f.write("\n".join(text) + "\n")
            except TypeError:
                if DELIM:
                    f.write("\n".join(map(DELIM.join, text)) + "\n")
                else:
                    raise


def re_sub_space(name):
    return sub(r"\s+", " ", name)


def re_sub_multi_line(c):
    return sub(r"\n+", "\n", c)


def dict_to_csv(path, d):
    """This function output dict_key,value or in case of list value dict_key,value1,value2...

    Args:
        path (Path): the output path file for cssv
        d (dict): the dict
    """
    try:
        Path(path).write_text(
            "\n".join(sorted(DELIM.join([k] + v) for k, v in d.items()))
        )
    except TypeError:
        Path(path).write_text(
            "\n".join(sorted(DELIM.join([k] + [v]) for k, v in d.items()))
        )


def csv_to_dict(path, d):
    """To reverse dict_to_csv and data to given dict

    Args:
        path (_type_): path of the csv file
        d (dict): dict to update

    """
    ll = pull(path)
    if DELIM not in ll[0]:
        DELIM = ','

    for l in ll:
        l = l.split(DELIM)
        try:
            d[l[0]].extend(l[1:])
        except:
            d[l[0]] = l[1:]

    return d


def get_head_from_report(a, q=None, DELIM=DELIM):
    if q is not None:
        report = Path(A_Q_REPORT_PATH_.format(a=a, q=q))

    else:
        report = Path(A_REPORT_PATH_.format(a=a))
    text_list = pull(report, DELIM=DELIM)
    return text_list[0]


def get_std_roll_to_m_c_dict(a, q=None, cwd=False, DELIM=DELIM, ml=False,scale=0):
    if q is not None:
        if cwd:
            report = Path(A_Q_REPORT_.format(a=a, q=q))
        else:
            report = Path(A_Q_REPORT_PATH_.format(a=a, q=q))

    else:
        if cwd:
            report = Path(A_REPORT_.format(a=a))
        else:
            report = Path(A_REPORT_PATH_.format(a=a))
    # if not report.exists():
    #         report = report

    # text_list = pull(report, DELIM=DELIM)
    text_list = pull(report, DELIM=DELIM)
    # text_list = text.split("\n")
    head = text_list[0]
    index = [i for i, k in enumerate(head) if k.strip('"').startswith("Total")][0]
    lines = text_list[1:]
    d = dict()
    # Marks are taken directly from the total column, so if marks just deducted from there, its OK
    for l in lines:
        # l = line.split(DELIM)
        std = l[0].strip('"')
        m=l[index].strip()
        if scale:
            # try:
            m=float(m)*scale/100
            # except:

        d[std] = {
            "m": m,
            "c": "".join(l[index + 1 :]).strip('"').strip().replace(BR, "\n").strip(),
        }
        if ml:
            d[std]["ml"] = l[1:index]
            d[std]["head"] = head

    ## d (dict) = { std_roll : { m:marks, c: comments}}
    return d


def get_students(path=None, only_roll=0, only_names=0, sort_by_name=False):
    """Returns the students list"""
    from lib.pds_globals import VAR

    std = []
    if path is None:
        path = f"{VAR}/mapping.txt"
    std = pull(path)
    if sort_by_name:
        std.sort(key=lambda x: x[1].lower())

    if only_roll:
        return [i[2] for i in std]
    if only_names:
        return [i[1] for i in std]
    return std


def get_test_cases(a, q, cwd=True):
    """Returns the Test Cases"""
    from lib.pds_globals import TEST_

    return pull(TEST_.format(a=a, q=q) if cwd else TEST_PATH_.format(a=a, q=q))


def get_code_questions(a, q):
    """Returns the code cases"""
    from lib.pds_globals import CODE_

    return pull(CODE_.format(a=a, q=q))


def get_q_list_from_a(a):
    # return [i.name.split('_')[-1]for i in Path(f"{HOME}/{BASE}_{a}").iterdir() if i.is_dir()]
    return [
        i.name.replace(Q_BASE, "")
        for i in Path(A_PATH_.format(a=a)).iterdir()
        if i.is_dir()
    ]


def get_map_roll_to_name(rev=None, moodle=None,name_as_value=None):
    """Returns a dict {
        Roll : Name
    }
    If rev=True then return Roll : Name
    0 -> M_ID
    1-> Name
    2-> Roll
    Returns:
        dict: {name : roll} # if rev=True
        dict: {roll : name}
    """
    M_ID, NAME, ROLL = 0, 1, 2
    key, val = ROLL, NAME
    if moodle:
        key, val = ROLL, M_ID
    if name_as_value:
        key, val = NAME, M_ID
    if rev:
        key, val = val, key
        # n_index=1
    return {x[key]: x[val] for x in pull(f"{VAR}/mapping.txt")}


def set_plag_files(a=None, ql=None):
    if not a or not ql:
        a, ql = get_a_ql_from_user()
    for q in ql.split():
        a_q_plag = Path(A_Q_PLAG_PATH_.format(a=a, q=q))
        ## HACK END
        push(a_q_plag, get_students(sort_by_name=1), attr="w+")
        print(a_q_plag, " file created")
    plag_email = Path(A_PLAG_EMAIL_PATH_.format(a=a))
    if not plag_email.exists():
        plag_email.touch()
        print(plag_email, " file set")


def format_plag_email_file():
    a = get_a_ql_from_user(q=False)
    plag_email = Path(A_PLAG_EMAIL_PATH_.format(a=a))
    plag = plag_email.read_text()
    import re

    exp_to_remove = [
        r".*?\.(jpg|png)\n*",
        r"\d+\.(\s+)?",
        r"Hi.*$",
        r"Please.*$",
        "Thanks",
        "Subham Jana",
    ]
    exp_to_replace_with_nl = [r"\s+and\s+", r"\n+"]
    for exp in exp_to_remove:
        plag = re.sub(exp, "", plag)
    for exp in exp_to_replace_with_nl:
        plag = re.sub(exp, "\n", plag, flags=re.MULTILINE)
    ## TODO: Sort names after every question
    # std=re.findall(r'http://.*\n(.*)http://')
    plag_email.write_text(plag)
    print(plag_email, " Formatted")


def unzip(a_base, q):
    """unzip files"""
    ## Get the zip file name
    try:
        a_base = Path(a_base)
        fname = next(a_base.glob("*.zip"))
        target = a_base / f"{Q_.format(q=q)}" / fname.name
        fname = fname.replace(target)
    except StopIteration:
        print("ZIP FILE NOT FOUND")
        return 0
        # raise

    ## then extract the zip
    from zipfile import ZipFile

    zip_file = ZipFile(fname)
    folder = fname.parent / fname.stem
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


def create_base_folders(a, q):
    ## Support for creating Questions folder added
    ## Removing support for misisng q
    base = Path(A_Q_PATH_.format(a=a, q=q))
    if base.exists():
        print(f"{base} folder already exists.")
        # exit()
        # return 1
    Path.mkdir(base, parents=True, exist_ok=True)
    code_questions = CODE_PATH_.format(a=a, q=q)
    if not Path(code_questions).exists():
        Path(code_questions).write_text(CODE_DEMO)
    test_cases = TEST_PATH_.format(a=a, q=q)
    if not Path(test_cases).exists():
        Path(test_cases).write_text(TEST_DEMO)
    solution = SOL_PATH_.format(a=a, q=q)
    if not Path(solution).exists():
        Path(solution).write_text(TEST_DEMO)
    print(f"Created:\n\t{base}\n\t{test_cases}\n\t{code_questions}")

    Path.mkdir(Path(A_Q_PDS_PATH_.format(a=a,q=q)),parents=True,exist_ok=True)
    # set_plag_files(a=a, ql=q)

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
