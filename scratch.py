## To fix test cases and code cases to the default set

from pathlib import Path
from lib.pds_file_op import (
    format_plag_email_file,
    get_a_ql_from_user,
    get_map_roll_to_name,
    get_students,
    get_test_cases,
    pull,
    push,
    set_plag_files,
)
from lib.pds_globals import A_, A_PATH_, A_Q_, A_Q_PATH_, BR, TEST_, TMP, DELIM, VAR

## Reset the test cases and code questions default text
def reset_test_code():
    from lib.pds_file_op import create_base_folders as cbf, get_a_ql_from_user

    a, q = get_a_ql_from_user()
    for _ in q.split():
        cbf(a, _)


import re
from lib.pds_file_op import (
    get_a_ql_from_user,
    get_head_from_report,
    get_std_roll_to_m_c_dict,
    push,
)
from lib.pds_globals import A_Q_REPORT_PATH_, BR

## REMOVE NEGATIVE MARKING AND CHANGE DELIMITER
def results_edit():
    a, ql = get_a_ql_from_user()
    for q in ql.split():
        report = A_Q_REPORT_PATH_.format(a=a, q=q)
        # DELIM=DELIM
        DELIM = ","

        sd = get_std_roll_to_m_c_dict(a, q, ml=True, DELIM=DELIM)
        ## Modify file here
        rl = []
        for s in sd:
            for m in range(len(sd[s]["ml"])):
                if int(sd[s]["ml"][m]) < 0:
                    sd[s]["ml"][m] = "0"
            sd[s]["m"] = f"{sum(map(float,sd[s]['ml'])):g}"
            text_to_delete = [
                "Add comments to code to help understand the logic used",
                "FAILED: Negative Code Case 3:",
                "Comments missing, logic hard to understand",
                "Mark/s lost: -5 out of -5",
                "Comments missing logic hard to understand",
                "FAILED: Negative Code Case 4:",
                "Proper Syntax and coding structure (eg. indentation, variable declation, etc) is not followed",
                "Mark/s lost: -5 out of -5",
            ]
            for t in text_to_delete:
                sd[s]["c"] = sd[s]["c"].replace(t, "")
            sd[s]["c"] = re.sub(r"\n+", "\n", sd[s]["c"])
            sd[s]["c"] = re.sub(
                r"TOTAL MARKS OBTAINED = \d+",
                f'TOTAL MARKS OBTAINED = {float(sd[s]["m"]):g}',
                sd[s]["c"],
            )
            sd[s]["c"] = re.sub(r"\n+", "\n", sd[s]["c"])
            rl.append(
                [s]
                + sd[s]["ml"]
                + [sd[s]["m"]]
                + [sd[s]["c"].replace("\n", BR).replace(BR + BR, BR)]
            )
        # push(report, [get_head_from_report(a, q, DELIM=",")], attr="w")
        push(report, [get_head_from_report(a, q, DELIM=DELIM)], attr="w")
        push(report, rl)

        ## Recombine and push


## To properly format test cases for sharing
def format_test_cases():
    from lib.pds_file_op import get_a_ql_from_user

    a, ql = get_a_ql_from_user()
    for q in ql.split():
        aq = {"a": a, "q": q}
        l = [
            (i[0], i[1].replace(f"{BR}", "\n").replace("{", "").replace("}", ""), i[2])
            for i in get_test_cases(**aq, cwd=False)
        ]
        p = Path(f"{TMP}/{A_.format(**aq)}/{TEST_.format(**aq)}")
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text("")
        for i, s in enumerate(l):
            out = [
                f"Test_Case {i+1} [{s[0]}]:",
                s[1],
                f"Raw_Input: {s[2]}",
                "-" * 20,
                "\n",
            ]
            push(p, out, attr="a+")
        print("Done for ", p.name)
    # for _ in q.split(): cbf(a,_)


def format_mystudents():
    # std = get_students(f"{VAR}/my_students.txt"path=only_roll=1)
    n = get_map_roll_to_name()
    std = pull(f"{VAR}/my_students_sorted.txt")
    push(f"{VAR}/my_students.txt", [f"{i},{n[i]}" for i in std], attr="w")


if __name__ == "__main__":
    # reset_test_code()
    format_test_cases()
    # format_mystudents()
    # set_plag_files()
    ## TODO: update assignment reports with plag from moodle
    # format_plag_email_file()

    # results_edit()
    pass




"""
#### Code to merge all marks, not needed as done in excel
### ws=wks[0]
### for ws in wks:
###     if ws.title != master:
###         q=re.findall(r'Q(\d)',ws.title)[0]
###         m=f'Q{q} - Marks'
###         c=f'Q{q} - Comments'
###         records=ws.get_all_records()
###         # r=records[0]
###         # r
###         for r in records:
###             if r[m]:
###                 roll_to_mark_comm[r['rollno']]['m'] += int(r[m])
###             if r[c]:
###                 roll_to_mark_comm[r['rollno']]['c'] += f"Q{q} -> {r[c]}\n"
"""
