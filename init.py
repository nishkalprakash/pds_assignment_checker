from pathlib import Path
from lib.pds import init_selenium,BASE,MOODLE_COURSE_ID, unzip,zipfile
from re import findall
import os
from time import sleep

def create_folders(a,q=''):
    base = Path(f"{BASE}_{a}/Question_{q}") if q!='' else Path(f"{BASE}_{a}")
    if base.exists():
        print(f"{base} folder already exists.")
        # exit()
        return 1
    Path.mkdir(base,parents=True)
    code_questions = base / "code_questions.txt"
    Path.touch(code_questions)
    test_cases = base / "test_cases.txt"
    Path.touch(test_cases)
    print(f"Created:\n\t{base}\n\t{test_cases}\n\t{code_questions}")
    # print(f"Please edit the following:\n{test_cases}\n{code_questions}")
    return 0

def get_assignments(a):
    a_base=Path(f'{BASE}_{a}')
    driver=init_selenium(a_base)
    ## This is the Home page of the course
    driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id={MOODLE_COURSE_ID}")
    ## here we get all the links that start with "Assignment 2 problem"
    q_links=driver.find_elements_by_partial_link_text(f"{BASE} {a} problem")
    ##
    for link in q_links:
        q_id=findall(r'id=(\d+)',link.get_attribute("href"))[0]
        q=findall(f'{BASE} {a} problem (\d+)',link.text)[0]
        create_folders(a,q)
        dl=f"https://moodlecse.iitkgp.ac.in/moodle/mod/assign/view.php?id={q_id}&action=downloadall"

        ## download the zip file
        driver.get(dl)
        sleep(2)
        ## Get the zip file name
        try:
            fname=next(a_base.glob("*.zip"))
            target=a_base/f'Question_{q}'/fname.name
            fname=fname.replace(target)
        except StopIteration:
            print("ZIP FILE NOT FOUND")
            raise

        ## TODO then extract the zip
        unzip(fname)

        ## then delete the original zip
        os.remove(fname)
    driver.close()


if __name__ == "__main__":
    a = input(f"Please enter the {BASE} number: ").strip()
    # create_folders(a)
    get_assignments(a)