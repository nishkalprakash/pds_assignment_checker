"""
* Auto upload to moodle
* Uses a file creds.txt as {Username}:{Password}
* Current webdriver for code is chrome 87, change as needed in res/chromedriver.exe
* Uses id of students found in grading page in moodle, change as needed in res/mapping.txt
"""

from pathlib import Path
from selenium import webdriver
from init import BASE


def insert(driver, id, data):
    driver.find_element_by_id(id).click()
    driver.find_element_by_id(id).clear()
    driver.find_element_by_id(id).send_keys(data)


def selenium_auto_upload(driver, arr, a):
    driver.get("https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id=362")
    try:
        if "Test" in BASE:
            driver.find_element_by_link_text(f"PART {a} Submission (Final)").click()
        else:
            driver.find_element_by_link_text(f"Assignment {a} Submission").click()

    except:
        driver.find_element_by_link_text(f"Assignment {a} Submission (Final)").click()

    driver.find_element_by_link_text("View/grade all submissions").click()
    mapping = {
        i.split(",")[0]: i.split(",")[1]
        for i in Path("res/mapping.txt").read_text().strip().split("\n")
    }

    driver.find_element_by_link_text("ID number").click()

    for std, m, c in arr:
        insert(driver, f"quickgrade_{mapping[std]}", f"{m}")
        insert(driver, f"quickgrade_comments_{mapping[std]}", c)

    driver.find_element_by_id("id_savequickgrades").click()
    # driver.close()


def upload(a):
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
            l[index],
            "".join(l[index + 1 :]).strip('"').strip().replace(";;", "\n"),
        )
        # print(f"{student}\n\n{marks}\n\n{comments}")
        arr.append([student, marks, comments])
        # print("*" * 80)
    ## TODO: SELENIUM MAGIC
    return arr


def init_selenium():
    driver = webdriver.Chrome("res/chromedriver.exe")
    driver.implicitly_wait(30)

    driver.get("https://moodlecse.iitkgp.ac.in/moodle/login/index.php")
    username, password = Path("res/creds.txt").read_text().strip().split(":")
    insert(driver, "username", username)
    insert(driver, "password", password)
    driver.find_element_by_id("loginbtn").click()
    return driver


if __name__ == "__main__":
    a_list = (
        input(
            f"Please enter the {BASE} numbers separated by space\nto upload report of: \nExample- 5 6 7 8\n"
        )
        .strip()
        .split()
    )
    driver = init_selenium()
    for a in a_list:
        arr = upload(a)
        # print(arr)
        selenium_auto_upload(driver, arr, a)
        print(f'{f"Done for {BASE}_{a}":*^50}')
    driver.close()
