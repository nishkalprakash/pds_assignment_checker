## User Defined Variables
"""File contains globals which can be changed once to affecte changes everywhere

if a variable is suffixed by a '_' its a placeholder and VARIABLE_.format(x=,y=) needs to be used
"""

from pathlib import Path

MOODLE_COURSE_ID = 544


HOME = "Assignments"
## CORE Variables
VAR = "var"
LIB = "lib"
TMP = "tmp"

DELIM = ";"
BR = "~~"

MOODLE_A_NAME_ = "LT-{a}:"
# MOODLE_A_NAME_ = "Test-1: Set-{a}"
# MOODLE_A_NAME_ = "Test-2: Set-{a}"

MOODLE_A_NAME_ = "Lab-{a}:"  # COMMENT THIS FOR LT

MOODLE_A_Q_NAME_ = MOODLE_A_NAME_ + "{q}"

# Base is the assignment type
BASE = "LT"

BASE = "A"  # COMMENT THIS FOR LT

Q_BASE = "Q"

A_ = BASE + "{a}"
A_PATH_ = HOME + "/" + A_

Q_ = Q_BASE + "{q}"
A_Q_ = A_ + "_" + Q_

A_Q_PATH_ = A_PATH_ + "/" + Q_

## Question in description feature
PS_ = A_Q_ + "_problem_statement"
PS_PATH_ = A_Q_PATH_ + "/" + PS_

## CHECKER FEATURE
TEST_ = A_Q_ + "_test_cases.txt"
TEST_PATH_ = A_Q_PATH_ + "/" + TEST_
CODE_ = A_Q_ + "_code_questions.txt"
CODE_PATH_ = A_Q_PATH_ + "/" + CODE_
SOL_ = A_Q_+"_solution.c"
SOL_PATH_ = A_Q_PATH_+"/"+SOL_

## PLAG FEATURE
A_Q_PLAG_ = A_Q_ + "_plag.txt"
A_Q_PLAG_PATH_ = A_Q_PATH_ + "/" + A_Q_PLAG_
A_PLAG_EMAIL_ = A_ + "_plag_email.txt"
A_PLAG_EMAIL_PATH_ = A_PATH_ + "/" + A_PLAG_EMAIL_
PLAG_COMMENT = f"<PLAG DETECTED - AWARDED 0>{BR}{BR}If you have not copied from anywhere,{BR}Please do not panic.{BR}Plag is decided by a plag checking program.{BR}For now continue to do your best.{BR}"


## MOSS FEATURE
A_MOSS_ = A_+"_moss_comb.txt"
A_MOSS_PATH_ =A_PATH_ + "/" +A_MOSS_
A_Q_MOSS_ = A_Q_+"_moss.txt"
A_Q_MOSS_PATH_ = A_Q_PATH_+"/"+A_Q_MOSS_
A_Q_MOSS_HTML_ = A_Q_+"_moss.html"
A_Q_MOSS_HTML_PATH_ = A_Q_PATH_+"/"+A_Q_MOSS_HTML_

## ATTEMPT FEATURE
A_ATTEMPT_ = A_+"_attempt_map.txt"
A_ATTEMPT_PATH_ = A_PATH_ + "/" + A_ATTEMPT_

## PDS FEATURE

A_Q_PDS_ = "PDS_"+A_Q_
A_Q_PDS_PATH_ = A_Q_PATH_+ '/' + A_Q_PDS_
A_Q_PDS_FILE_ = A_Q_ + '_{r}_{n}_{f}.c'
A_Q_PDS_FILE_PATH_ = A_Q_PDS_PATH_ + '/' + A_Q_PDS_FILE_

## REPROT FEATURE
A_REPORT_ = A_ + "_report.csv"
A_REPORT_PATH_ = A_ + "/" + A_REPORT_
A_Q_REPORT_ = A_Q_ + "_report.csv"
A_Q_REPORT_PATH_ = A_Q_PATH_ + "/" + A_Q_REPORT_



## SUBMISSION FEAUTRE
A_Q_SUB_ = A_Q_ + "_submissions.csv"
A_Q_SUB_PATH_ = A_Q_PATH_ + "/" + A_Q_SUB_
A_SUB_ = A_ + "_submissions.csv"
A_SUB_PATH_ = A_PATH_ + "/" + A_SUB_
## 2021 - Spring - Pattern
# ASSIGN_NAME_PATTERN="{BASE} {a} problem"
# ASSIGN_Q_NAME_PATTERN="{BASE} {a} problem {q}"

# A_PATH_=f"{BASE}_"+"{a}"
# A_Q_PATH_=A_PATH_+"/Question_{q}"
# ASSIGN_NAME_PATTERN_="{BASE} {a}("
# MOODLE_A_NAME_="Assignment {a}("
# MOODLE_A_Q_NAME_=MOODLE_A_NAME_+"{q}"
# ASSIGN_Q_NAME_PATTERN_=ASSIGN_NAME_PATTERN+"{q})"


TC_=f"{{m}}{DELIM}{BR}{{op}}{DELIM}{{ip}}"
TEST_DEMO = f"""
# Format: `{{marks}}{DELIM}{{label}}{DELIM}{{test_case}}`
# * For Example:
# ```csv
10{DELIM}321{DELIM}123
10{DELIM}101{DELIM}101
10{DELIM}993{DELIM}993
10{DELIM}100{DELIM}100
10{DELIM}100{DELIM}100
# ```
""".strip()

CODE_DEMO =f"""
25{DELIM}Logic is correct and gives expected output
25{DELIM}Efficient and Optimal steps used to get to output
-5{DELIM}Comments missing, logic hard to understand
-5{DELIM}Proper Syntax and coding structure (eg. indentation, variable declation, etc) is not followed
""".strip()

MT_DEMO = """Checking files . . .
OK
"""
## QUIZ URLS

A_Q_PDS_QUIZ_ = "https://moodlecse.iitkgp.ac.in/moodle/mod/quiz/report.php?id={quiz_id}&mode=grading&slot={q}&qid={qid}&page=0&includeauto=1&grade=all&pagesize=200&order=studentfirstname"

# "https://moodlecse.iitkgp.ac.in/moodle/mod/quiz/report.php?id={quiz_id}&mode=overview"

UNDO_REDO_CHEAT_CODES= [
    'z',    # To undo the last result (repeatable)
    'zz',   # To undo the last result (repeatable)
    'zzz',  # To undo the last result (repeatable)
    'r',    # To rerun the program
    # 'r',    # To redo the last undo (repeatable)
    # 'rr',   # To redo the last undo (repeatable)
    # 'rrr',  # To redo the last undo (repeatable)
]

CHEAT_CODES = [
    'r',# To rerun the program
    'ss',   # To short 's'ircuit the prograg
    '00'   # To short circuit the program with 0
]