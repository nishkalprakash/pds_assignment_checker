from time import sleep
from lib.pds_file_op import get_a_q_from_user, get_q_list_from_a, pull, print,get_map_roll_to_name,dict_to_csv, csv_to_dict
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
out = Path(f"{HOME}/{BASE}_{a}/comb_submissions.csv")
if not out.parent.exists():
    out.parent.mkdir(parents=True,exist_ok=True)

# c=input("Enter the Column Letter: ").strip()
# range = f"B3:{c.upper()}94"
map_name_to_roll=get_map_roll_to_name()

if not out.exists():
    ## get q from the folders first and check if submissions file exists
    q_list=get_q_list_from_a(a)
    # driver_get_course(driver)
    # q_topics = 

    std_time_dict = {}
    driver = init_selenium()
    for q in q_list:
        out_q=Path(f"{HOME}/{BASE}_{a}/Question_{q}/submissions.csv")
        if out_q.exists():
            std_time_dict=csv_to_dict(out_q,std_time_dict)
            continue
        
        q_sub_dict={}
        q_topic=driver_get_topics_from_a(driver, a,q)
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
            if row[2]:
                val = (
                    f"Question_{q_topic['q']} Submitted on: {datetime.strptime(row[8],'%A, %d %B %Y, %I:%M %p').strftime('%I:%M %p')}"
                    if row[8] and row[9]
                    else f"Question_{q_topic['q']} Not Submitted"
                )
                try:
                    std_time_dict[map_name_to_roll[row[2]]].extend([val])
                except:
                    std_time_dict[map_name_to_roll[row[2]]] = [val]
                    
                q_sub_dict[map_name_to_roll[row[2]]]=val
        # tables.append(table)
        ## Save the data in a file and just pull if it exissts
        dict_to_csv(out_q,q_sub_dict)
    driver.close()
    print("Done fetching from Moodle!")
    roll_status_dict = {x: "\n".join(std_time_dict[x]) for x in std_time_dict}
    my_std = pull(f"{VAR}/my_students.txt")
    # text = "\n".join(sorted([(",".join([std] + std_time_dict[std])) for std in my_std]))
    # text="\n".join(sorted([(",".join([std] + std_time_dict.get(std,['Student not found in MOODLE course']))) for std in my_std]))
    dict_to_csv(out,std_time_dict)
else:
    # text = pull(out)
    roll_status_dict = {(x := i.split(","))[0]: "\n".join(x[1:]) for i in pull(out)}


## Fix format to short form
for roll in roll_status_dict:
    text=roll_status_dict[roll]
    text=text.replace("Question_",'Q')
    text=text.replace(' Not Submitted',"(N / A")
    text=text.replace(' Submitted on: ',"(")
    text=text.replace(' AM',"")
    text=text.replace(' PM',"")
    text=text.replace('\n',"),  ")
    text=text+')'
    text=text.replace('))',")")
    text=text.replace('('," (")

    roll_status_dict[roll]=text


## Push to gsheet
print("Done getting times, now pushing to gsheet")
from lib.pds_pygsheets import get_worksheet

ws = get_worksheet(title="Assignments")
# c=input("Enter the Column Letter: ").strip()
# range = f"B3:{c.upper()}94"

r = ws.range(f"D3:{ws.cell((ws.rows,ws.cols)).label}")
ws.unlink()
for row in r:
    row[-1].value=roll_status_dict.get(row[0].value.strip(),'Student not found in MOODLE course').strip()
    # row[-1].value = val.strip()

    # rv=row[-1].value
    # row[-1].value = (rv + "\n" + val).strip() if rv else val
    
    # sleep(0.2)

    
ws.link()
print("Done uploading to google sheet")