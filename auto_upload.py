"""
* Auto upload to moodle
* Uses a file creds.txt as {Username}:{Password}
* Current webdriver for code is chrome 87, change as needed in res/chromedriver.exe
* Uses id of students found in grading page in moodle, change as needed in res/mapping.txt
"""

from pathlib import Path
from init import BASE,MOODLE_COURSE_ID
from main import def_input
from lib.pds import insert,init_selenium


def selenium_auto_upload(driver, arr, a):
    driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/mod/assign/view.php?id={MOODLE_TOPIC_ID}&action=grading")
    # try:
    #     if "Test" in BASE:
    #         driver.find_element_by_xpath(f"//div[./h3[contains(text(),\'Lab Test {BASE.strip('Lab_Test_Part')}\')]]").find_element_by_link_text(f"PART {a} Submission (Final)").click()
    #     else:
    #         driver.find_element_by_link_text(f"Assignment {a} Submission").click()

    # except:
    #     driver.find_element_by_link_text(f"Assignment {a} Submission (Final)").click()

    # driver.find_element_by_link_text("View/grade all submissions").click()
    
    mapping = {
        i.split(",")[0].strip(): i.split(",")[1].strip()
        for i in Path("res/mapping.txt").read_text().strip().split("\n")
    }

    # driver.find_element_by_link_text("ID number").click()
    # input("Press Enter to continue...")
    for std, m, c in arr:
        insert(driver, f"quickgrade_{mapping[std]}", f"{m}")
        insert(driver, f"quickgrade_comments_{mapping[std]}", c)

    driver.find_element_by_id("id_savequickgrades").click()
    # driver.close()


def get_std_mark_comm_array(a,q=''):
    if q!='':
        report = Path(f"{BASE}_{a}/Question_{q}/{BASE}_{a}_Question_{q}_report.csv")
    else:
        report = Path(f"{BASE}_{a}/{BASE}_{a}_report.csv")
    text = report.read_text().strip()
    text_list = text.split("\n")
    head = text_list[0].split(",")
    index = [i for i, k in enumerate(head) if k.strip('"').startswith("Total")][0]
    # lines = [f'"{i}"' for i in text_list[1:]]  # padding with quotes
    lines = text_list[1:]
    arr = []
    # Marks are taken directly from the total column, so if marks just deducted from there, its OK
    for line in lines:
        l = line.split(",")
        student, marks, comments = (
            l[0].strip('"'),
            l[index].strip(),
            # float(l[index]) * 10,
            "".join(l[index + 1 :]).strip('"').strip().replace(";;", "\n"),
        )
        # print(f"{student}\n\n{marks}\n\n{comments}")
        arr.append([student.strip(), marks, comments.strip()])
        # print("*" * 80)
    ## TODO: SELENIUM MAGIC
    return arr





if __name__ == "__main__":
    a,q= def_input(
            f"Please enter the {BASE} number and Question number",'1 4'
        ).strip().split()
    MOODLE_TOPIC_ID=def_input(
            f"Please enter the MOODLE_TOPIC_ID number",'9409'
        ).strip()
    
    # a_list = (
    #     input(
    #         f"Please enter the {BASE} numbers separated by space\nto upload report of: \nExample- 5 6 7 8\n"
    #     )
    #     .strip()
    #     .split()
    # )
    driver = init_selenium()
    # for a in a_list:
    arr = get_std_mark_comm_array(a,q)
    # print(arr)
    selenium_auto_upload(driver, arr, a)
    print(f'{f"Done for {BASE}_{a}":*^50}')
    driver.close()
