### TODO: make this a class

import re
from time import sleep
from lib.pds_file_op import get_map_roll_to_name, printf, create_base_folders, set_plag_files
from re import match
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

from pathlib import Path
from lib.pds_globals import (
    A_Q_PATH_,
    A_Q_PDS_FILE_PATH_,
    A_Q_PDS_QUIZ_,
    A_Q_PLAG_PATH_,
    PS_PATH_,
    TMP,
    VAR,
    MOODLE_A_NAME_,
    A_PATH_
)
from lib.pds_file_op import print
from urllib.parse import urlparse,parse_qs

def getqs(sel,val=''):
    q=parse_qs(urlparse(sel.get_attribute("href")).query)
    if val:
        return q[val][0].strip()
    return q


def driver_get_from_topic(driver, topic_id, action="grading"):
    driver.get(
        f"https://moodlecse.iitkgp.ac.in/moodle/mod/assign/view.php?id={topic_id}&action={action}&tsort=idnumber"
    )
    if "login" in driver.current_url:
        print("Aw Snap! Crome session expired X_X ")
        moodle_login(driver)
        return driver_get_from_topic(driver, topic_id, action)

    print("Success: fetched url from topic")
    printf(driver.current_url)
    if action == "downloadall":
        from time import sleep

        sleep(2)
    if action == "question":
        return driver.find_element("id", "intro").text


def driver_get_course(driver, course_id=None):
    if course_id is None:
        from lib.pds_globals import MOODLE_COURSE_ID

        course_id = MOODLE_COURSE_ID
    
    driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id={course_id}")
    if "login" in driver.current_url:
        print("Aw Snap! Crome session expired X_X ")
        moodle_login(driver)
        return driver_get_course(driver)
    else:
        print("Successfully loaded Course Page")
        printf(driver.current_url)
    return driver


def insert(driver, elem, data):
    if type(elem) is str:
        elem = driver.find_element_by_id(elem)
    elem.clear()
    if len(data) > 128:
        for i in range(0, len(data), 64):
            elem.send_keys(data[i : i + 64])
    else:
        elem.send_keys(data)


def moodle_login(driver):
    print("Trying to login to moodle")
    driver.get("https://moodlecse.iitkgp.ac.in/moodle/login/index.php")
    from lib.pds_file_op import pull

    username, password = pull(f"{VAR}/creds.txt",DELIM=':')[0]
    insert(driver, "username", username)
    insert(driver, "password", password)
    driver.find_element_by_id("loginbtn").click()


def init_selenium(def_dwnld_dir=TMP):
    from selenium import webdriver
    from pathlib import Path

    options = webdriver.ChromeOptions()
    options.add_argument("--no-sandbox")
    # options.headless = True
    options.add_argument("--disable-gpu")
    options.add_argument("--window-size=1366,768")
    options.add_argument("--disable-dev-shm-usage")
    options.add_argument("--hide-scrollbars")
    options.add_argument("--disable-extensions")
    options.add_argument("--disable-infobars")
    options.add_argument("--log-level=3")
    if def_dwnld_dir:
        def_dwnld_dir = Path(def_dwnld_dir)
        prefs = {
            "profile.default_content_settings.popups": 0,
            "download.default_directory": f"{def_dwnld_dir.absolute()}",
            "download.prompt_for_download": False,
            "download.directory_upgrade": True,
            "safebrowsing_for_trusted_sources_enabled": False,
            "safebrowsing.enabled": False
        }
        options.add_experimental_option("prefs", prefs)
    service = Service(executable_path=ChromeDriverManager().install())
    driver = webdriver.Chrome(service=service, options=options)


    moodle_login(driver)
    driver_get_course(driver)

    print("Selenium Driver Successfully initialized")
    return driver


def driver_get_topics_from_a(driver, a, q=None):
    def get_q_and_topic_id(q_link):
        ## Extract id from the link
        return dict(
            q=getqs(q_link,'slot'),
            qid=getqs(q_link,'qid'),
            quiz_id=getqs(q_link,'id'),
        )

    ## This is the Home page of the course
    driver_get_course(driver)
    quiz_elem=driver.find_elements_by_partial_link_text(MOODLE_A_NAME_.format(a=a))[0]
    quiz_id=getqs(quiz_elem,'id')
    print("inside driver_get_topics_from_a")
    driver.get(f'https://moodlecse.iitkgp.ac.in/moodle/mod/quiz/report.php?id={quiz_id}&mode=grading&includeauto=1')
    q_links = driver.find_elements_by_partial_link_text('grade all')

    if q is None:
        ## Get all the assignments links
        ## eg: here we get all the links that start with "Assignment {a} problem"
        ## this is to remove duplicate links with the same value
        q_topic_list = [get_q_and_topic_id(q_link) for q_link in q_links]
        return q_topic_list
    else:
        ## Get only single topic
        q_topic = get_q_and_topic_id(q_links[int(q)-1])
        return q_topic

def get_sel_items(driver,val,a='',t='userenrolment',d='div'):
    return driver.find_elements(by=By.PARTIAL_LINK_TEXT,
        value=f'//table[contains(concat(" ",normalize-space(@class)," ")," {t} ")]//{d}[contains(concat(" ",normalize-space(@class)," ")," {val} ")]{a}'
        )

def extract_name_roll_tuple(elem):
    """Returns tuple (name,roll)"""
    t=elem.text.replace('Attempt number 1 for ','').strip()
    m=match(r'^(.+?) \((\w+)\)$',t)
    if m:
        return (m[1],m[2])
    # match(r'^(.+?)$',t)
    return (t,'')
    
def driver_get_pds_from_quiz(driver,a,q,qid,quiz_id):

    driver.get(A_Q_PDS_QUIZ_.format(q=q,qid=qid,quiz_id=quiz_id))

    # stds={(n,r):{'id':i} for i,n,r in get_students()}
    map_n_r=get_map_roll_to_name(rev=True)
    # nrt=driver.find_elements(by=By.PARTIAL_LINK_TEXT,value='Attempt number 1 for ')
    xpath="//h4[contains(text(),'Attempt number 1 for ')]"
    ps=Path(PS_PATH_.format(a=a,q=q))
    if not ps.exists():
        e=driver.find_element(By.XPATH,"//div[@class='qtext']//img")
        e.location_once_scrolled_into_view
        ps.write_bytes(e.screenshot_as_png)

    nrt=driver.find_elements(
                by=By.XPATH,
                value=xpath
                )
    fl=driver.find_elements(
                by=By.XPATH,
                # value=xpath+"/following-sibling::div//div[@class='attachments']//a"
                value=xpath+"/following-sibling::div//div[@class='attachments']"
                )
    ct=driver.find_elements(
            by=By.XPATH,
            value=xpath+'/following-sibling::div//div[contains(concat(" ",normalize-space(@class)," ")," qtype_essay_response ")]'
            )
    for i in range(len(nrt)):
        n,r=extract_name_roll_tuple(nrt[i])
        if not r:
            r=map_n_r[n]
        f=fl[i]
        fn=f.text
        fn=re.sub(r'[\/:*?"<>|]',"_",fn)
        fname=Path(A_Q_PDS_FILE_PATH_.format(a=a,q=q,r=r,n=n,f=Path(fn).stem))
        c=ct[i].text
        if not fname.exists():
            if fn:
                fp=Path(A_PATH_.format(a=a))/fn
                if not fp.exists():
                    f.find_element(By.TAG_NAME,'a').click()
                # while not fp.exists():
                #     print('PDS file not found. Downloading...')
                    sleep(.5)
                print(fname.name+' downloaded')
                fp.rename(fname)
                # fl.
            elif c:
                fname.write_text(c)
                print(f'No FILE FOUND for {r} - {n}')
                print('CODE CREATED FROM COMMENT BOX')

            else:
                print(f'No Submission for {r} - {n}')





def get_assignments(a):
    # a_base =
    ## TODO Check if assignments need to be downloaded

    driver = init_selenium(f"{A_PATH_.format(a=a)}")
    

    q_topic_list = driver_get_topics_from_a(driver,a)
    # quiz_id=findall(r"id=(\d+)", quiz_elem.get_attribute("href"))[0]

    for q_topic in q_topic_list:
        q = q_topic["q"]
        qid=q_topic['qid']
        quiz_id=q_topic['quiz_id']
        q_base = Path(f"{A_Q_PATH_.format(a=a,q=q)}")
        a_q_plag = Path(A_Q_PLAG_PATH_.format(a=a, q=q))
        if 1 or not a_q_plag.exists():
        # if True or not next(q_base.glob("PDS*"), False):
            create_base_folders(a, q)
            driver_get_pds_from_quiz(driver,a,q,qid,quiz_id)
            set_plag_files(a=a, ql=q)
            # set_plag_files# set_plag_files(a=a, ql=q)
            # driver_get_from_topic(driver, q_topic["topic_id"], "downloadall")
            # unzip(a_base, q)
        # ## HACK SEM 6: This is for a case where question is given in intro
        # ps_path = Path(PS_PATH_.format(a=a, q=q))
        ## HACK END
        # if not ps_path.exists():
        #     ps_path.write_text(
        #         driver_get_from_topic(driver, q_topic["topic_id"], "question")
        #     )
            # print(ps_path.name, " Fetched")
        # HACK SEM 6: This is for a plag cases
        ## Support for plag checking,
        # initially all are conisdered plag case,
        # need to delete student who did not copy
    # std_id_att=driver_get_from_quiz(driver,a,q_topic_list,quiz_id)
    # for id,at in std_id_att.items():
        # driver.get(f'')
    
    driver.close()
