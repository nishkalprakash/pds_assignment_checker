"""
Auto upload to moodle
uses a file creds.txt as {Username}:{Password}

"""

from pathlib import Path
from selenium import webdriver

def insert(driver,id,data):
    driver.find_element_by_id(id).click()
    driver.find_element_by_id(id).clear()
    driver.find_element_by_id(id).send_keys(data)

def selenium_auto_upload(arr,a):
    driver = webdriver.Chrome('res/chromedriver.exe')
    driver.implicitly_wait(30)

    driver.get("https://moodlecse.iitkgp.ac.in/moodle/login/index.php")
    username,password=Path('res/creds.txt').read_text().strip().split(':')
    insert(driver,'username',username)
    insert(driver,'password',password)
    driver.find_element_by_id("loginbtn").click()
    driver.get("https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id=362")
    driver.find_element_by_link_text(f"Assignment {a} Submission").click()
    
    driver.find_element_by_link_text("View/grade all submissions").click()
    mapping = {i.split(',')[0]: i.split(',')[1] for i in Path('res/mapping.txt').read_text().strip().split('\n')}
    
    driver.find_element_by_link_text("ID number").click()

    for std,m,c in arr:
        insert(driver, f"quickgrade_{mapping[std]}", f"{m}")
        insert(driver, f"quickgrade_comments_{mapping[std]}", c)

    driver.find_element_by_id("id_savequickgrades").click()
    driver.close()

def upload(a):
    report=Path(f"Assignment_{a}/Assignment_{a}_report.csv")
    text=report.read_text()
    text_list = text.split('"\n"')
    head=text_list[0].split(',')
    index = head.index('"Total_Marks (10)"')
    lines=[f'"{i}"' for i in text_list[1:]]
    arr=[]
    for line in lines:
        l=line.split(",")
        student,marks,comments=l[0].strip('"'),l[index],"".join(l[index+1:]).strip('"').strip()
        print(f"{student},{marks},{comments}")
        arr.append([student,marks,comments])
        print('*'*80)
    ## TODO: SELENIUM MAGIC
    selenium_auto_upload(arr,a)

if __name__ == "__main__":
    a = input("Please enter the Assignment number to upload report of: ").strip()
    upload(a)
