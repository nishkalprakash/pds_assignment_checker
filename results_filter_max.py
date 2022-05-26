## HACK for recheck, keeps all stidents that got 100 or 0
## New HACK to modify the report file together
import re
from lib.pds_file_op import (
    get_a_ql_from_user,
    get_head_from_report,
    get_std_roll_to_m_c_dict,
    push,
)
from lib.pds_globals import A_Q_REPORT_PATH_, BR, DELIM


a, ql = get_a_ql_from_user()
for q in ql.split():
    report = A_Q_REPORT_PATH_.format(a=a, q=q)
    sd = get_std_roll_to_m_c_dict(a, q, ml=True)
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
    push(report, [get_head_from_report(a, q)], attr="w")
    push(report, rl)

    ## Recombine and push
