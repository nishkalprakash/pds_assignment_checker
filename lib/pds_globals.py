## User Defined Variables
"""File contains globals which can be changed once to affecte changes everywhere

if a variable is suffixed by a '_' its a placeholder and VARIABLE_.format(x=,y=) needs to be used
"""

from pathlib import Path
HOME = "Assignments"

BASE = "LT" # Base is the assignment type
# BASE = "A"
Q_BASE="Q"

A_=BASE+"{a}"
A_PATH_=HOME+"/"+A_

Q_=Q_BASE+"{q}"
A_Q_=A_+"_"+Q_

A_Q_PATH_=A_PATH_+"/"+Q_

TEST_=A_Q_+"_test_cases.txt"
TEST_PATH_=A_Q_PATH_+"/"+TEST_
CODE_=A_Q_+"_code_questions.txt"
CODE_PATH_=A_Q_PATH_+"/"+CODE_


MOODLE_COURSE_ID=475
VAR = "var"
LIB = "lib"

## 2021 - Spring - Pattern
# ASSIGN_NAME_PATTERN="{BASE} {a} problem"
# ASSIGN_Q_NAME_PATTERN="{BASE} {a} problem {q}"

# A_PATH_=f"{BASE}_"+"{a}"
# A_Q_PATH_=A_PATH_+"/Question_{q}"
# ASSIGN_NAME_PATTERN_="{BASE} {a}("
MOODLE_A_NAME_="Assignment {a} - Question "
# MOODLE_A_NAME_="Assignment {a}("
MOODLE_A_Q_NAME_=MOODLE_A_NAME_+"{q}"
# MOODLE_A_Q_NAME_=MOODLE_A_NAME_+"{q}"
# ASSIGN_Q_NAME_PATTERN_=ASSIGN_NAME_PATTERN+"{q})"