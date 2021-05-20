from lib.pds_file_op import get_a_q_from_user, pull, print
from lib.pds_globals import BASE, HOME, VAR
from lib.pds_selenium import (
    driver_get_from_topic,
    driver_get_topics_from_a,
    init_selenium,
)
from datetime import datetime
from pathlib import Path

a = get_a_q_from_user(q=False)
# a='4'
out = Path(f"{HOME}/{BASE}_{a}/submissions.csv")
c=input("Enter the Column Letter: ").strip()
range = f"B16:{c.upper()}28"


if not out.exists():
    driver = init_selenium()
    # driver_get_course(driver)
    q_topics = driver_get_topics_from_a(driver, a)

    std_time_dict = {}
    for q_topic in q_topics:
        ## Open the topic and fetch the submission time for the student
        driver_get_from_topic(driver, q_topic["topic_id"])
        ## TODO: fetch the submission times
        t_elems = driver.find_elements_by_xpath(
            "//table[contains(@class,'generaltable')]/tbody/tr[not(contains(@class,'emptyrow'))]"
        )
        # table.append([th.text for th in t_elem.find_elements_by_xpath('.//th')])
        for tr in t_elems:
            row = [td.text.strip() for td in tr.find_elements_by_xpath(".//td")]
            # table.append()
            if row[3]:
                val = (
                    f"Question_{q_topic['q']} Submitted on: {datetime.strptime(row[8],'%A, %d %B %Y, %I:%M %p').strftime('%I:%M %p')}"
                    if row[8] and row[9]
                    else f"Question_{q_topic['q']} Not Submitted"
                )
                try:
                    std_time_dict[row[3]].append(val)
                except:
                    std_time_dict[row[3]] = [val]
        # tables.append(table)
    driver.close()
    print("Done fetching from Moodle!")
    roll_status_dict = {x: "\n".join(std_time_dict[x]) for x in std_time_dict}
    my_std = pull(f"{VAR}/my_students.txt")
    text = "\n".join(sorted([(",".join([std] + std_time_dict[std])) for std in my_std]))
    out.write_text(text)
else:
    text = pull(out)
    roll_status_dict = {(x := i.split(","))[0]: "\n".join(x[1:]) for i in text}


## Fix format to short form
for roll in roll_status_dict:
    text=roll_status_dict[roll]
    text=text.replace("Question_",'Q')
    text=text.replace(' Not Submitted',"(N/A")
    text=text.replace(' Submitted on: ',"(")
    text=text.replace(' AM',"")
    text=text.replace(' PM',"")
    text=text.replace('\n',"),  ")
    text=text+')'
    text=text.replace('))',")")
    text=text.replace('('," (")

    roll_status_dict[roll]=text


## Push to gsheet
from lib.pds_pygsheets import get_worksheet

ws = get_worksheet("Assignments")
r = ws.range(range)
for row in r:
    # row[-1].value = ([-1].value + "\n" + roll_status_dict[row[0].value.strip()]).strip()
    row[-1].value = roll_status_dict[row[0].value.strip()].strip()
print("Done uploading to google sheet")