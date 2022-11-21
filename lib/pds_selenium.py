### TODO: make this a class

from time import sleep
from lib.pds_file_op import get_map_roll_to_name, get_students, printf, create_base_folders, pull, push, set_plag_files, unzip
from re import findall, match
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

from pathlib import Path
from lib.pds_globals import (
    A_ATTEMPT_PATH_,
    A_Q_PATH_,
    A_Q_PDS_FILE_PATH_,
    A_Q_PDS_PATH_,
    A_Q_PDS_QUIZ_,
    A_Q_PLAG_PATH_,
    BASE,
    PS_PATH_,
    TMP,
    VAR,
    LIB,
    MOODLE_A_NAME_,
    MOODLE_A_Q_NAME_,
    A_PATH_
)
from lib.pds_file_op import print
## SELENIUM FUNCTIONS
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
    # input("Press any key to continue: ")
    if "login" in driver.current_url:
        print("Aw Snap! Crome session expired X_X ")
        moodle_login(driver)
        return driver_get_course(driver)
    else:
        print("Successfully loaded Course Page")
        printf(driver.current_url)
    return driver


## SEM 3 Hack
""" 
def sem3_lt_hack():
    # try:
    #     if "Test" in BASE:
    #         driver.find_element_by_xpath(f"//div[./h3[contains(text(),\'Lab Test {BASE.strip('Lab_Test_Part')}\')]]").find_element_by_link_text(f"PART {a} Submission (Final)").click()
    #     else:
    #         driver.find_element_by_link_text(f"Assignment {a} Submission").click()

    # except:
    #     driver.find_element_by_link_text(f"Assignment {a} Submission (Final)").click()

    # driver.find_element_by_link_text("View/grade all submissions").click()
    pass"""  ## END SEM 3 Hack


def insert(driver, id, data):
    elem = driver.find_element_by_id(id)
    elem.clear()
    if len(data) > 128:
        for i in range(0, len(data), 64):
            elem.send_keys(data[i : i + 64])
    else:
        elem.send_keys(data)


def moodle_login(driver):
    print("Trying to login to moodle")
    driver.get("https://moodlecse.iitkgp.ac.in/moodle/login/index.php")
    # input("Press any key to continue: ")
    from lib.pds_file_op import pull

    username, password = pull(f"{VAR}/creds.txt")[0].split(":")
    insert(driver, "username", username)
    insert(driver, "password", password)
    driver.find_element_by_id("loginbtn").click()


def init_selenium(def_dwnld_dir=TMP):
    from selenium import webdriver
    from pathlib import Path

    options = webdriver.ChromeOptions()
    options.add_argument("--no-sandbox")
    options.headless = True
    options.add_argument("--disable-gpu")
    options.add_argument("--window-size=1366,768")
    # options.add_experimental_option("useAutomationExtension", False)
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
    # options.add_argument("--start-maximized")
    # options.add_argument(f"--user-data-dir={Path(VAR).absolute()/'moodle_chrome_data'}")
    service = Service(executable_path=ChromeDriverManager().install())
    driver = webdriver.Chrome(service=service, options=options)
    # driver = webdriver.Chrome(
        # executable_path=f"{LIB}/chromedriver.exe", options=options
    # )

    # driver.implicitly_wait(2)
    # driver.maximize_window()

    moodle_login(driver)
    driver_get_course(driver)

    print("Selenium Driver Successfully initialized")
    return driver


def driver_get_topics_from_a(driver, quiz_id, q=None):
    def get_q_and_topic_id(q_link):
        ## Extract id from the link
        return dict(
            # q=findall(MOODLE_A_Q_NAME_.format(a=a, q=r"([\d\w]+)"), q_link.text)[0],
            q=getqs(q_link,'slot'),
            qid=getqs(q_link,'qid'),
            # topic_id=findall(r"id=(\d+)", q_link.get_attribute("href"))[0],
        )

    print("inside driver_get_topics_from_a")
    if q is None:
        ## Get all the assignments links
        ## eg: here we get all the links that start with "Assignment {a} problem"
        driver.get(f'https://moodlecse.iitkgp.ac.in/moodle/mod/quiz/report.php?id={quiz_id}&mode=grading')
        q_links = driver.find_elements_by_partial_link_text('grade all')
        ## this is to remove duplicate links with the same value
        # if BASE == 'LT':
            # q_link=map(str,range(1,4))
        # else:
        # q_links = map(str,range(1,6))

        ## HACK for? START
        # try:
        #     q_links.append(driver.find_elements_by_partial_link_text(ASSIGN_NAME_PATTERN.format(BASE=BASE,a=a))[0])
        # except:
        #     pass
        ## HACK END

        q_topic_list = [get_q_and_topic_id(q_link) for q_link in q_links]
        return q_topic_list
    else:
        ## Get only single topic
        # q_link = driver.find_elements_by_partial_link_text(
            # MOODLE_A_Q_NAME_.format(a=a, q=q)
        # )[0]
        q_topic = get_q_and_topic_id(q)
        return q_topic

def get_sel_items(driver,val,a='',t='userenrolment',d='div'):
    return driver.find_elements(by=By.PARTIAL_LINK_TEXT,
        value=f'//table[contains(concat(" ",normalize-space(@class)," ")," {t} ")]//{d}[contains(concat(" ",normalize-space(@class)," ")," {val} ")]{a}'
        )
# def extract_q(q_base):
#     return findall(r'Question \d+',q_base.name)[0]
# def driver_get_from_quiz(driver,a,quiz_id):
#     at=Path(A_ATTEMPT_PATH_.format(a=a))
#     try:
#         return {i[0]:i[1] for i in pull(at)}
#     except:
        
#         driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/mod/quiz/report.php?id={quiz_id}&mode=overview")
#         x=get_sel_items(driver,'c2','//a','generaltable','td')
#         data=zip(x[0:len(x):2],x[1:len(x)+1:2])
#         std_id_att={i[0]:0 for i in get_students()}
#         for id,att in data:
#             std_id_att[getqs(id,'id')]=getqs(att,'attempt')
#         push(A_ATTEMPT_PATH_.format(a=a),std_id_att.items())
#         return std_id_att

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
        fname=Path(A_Q_PDS_FILE_PATH_.format(a=a,q=q,r=r,n=n,f=Path(f.text).stem))
        c=ct[i].text
        if not fname.exists():
            if f.text:
                fp=Path(A_PATH_.format(a=a))/f.text
                if not fp.exists():
                    f.find_element(By.TAG_NAME,'a').click()
                # while not fp.exists():
                #     print('PDS file not found. Downloading...')
                    sleep(.5)
                print(fname+' downloaded')
                fp.rename(fname)
                # fl.
            elif c:
                fname.write_text(c)
                print('No FILE FOUND for {r} - {n}')
                print('CODE CREATED FROM COMMENT BOX')

            else:
                print('No Submission for {r} - {n}')





def get_assignments(a):
    a_base = f"{A_PATH_.format(a=a)}"
    ## TODO Check if assignments need to be downloaded

    driver = init_selenium(a_base)

    ## This is the Home page of the course
    driver_get_course(driver)
    quiz_elem=driver.find_elements_by_partial_link_text(MOODLE_A_NAME_.format(a=a))[0]
    quiz_id=getqs(quiz_elem,'id')

    q_topic_list = driver_get_topics_from_a(driver, quiz_id)
    # quiz_id=findall(r"id=(\d+)", quiz_elem.get_attribute("href"))[0]

    for q_topic in q_topic_list:
        q = q_topic["q"]
        qid=q_topic['qid']
        q_base = Path(f"{A_Q_PATH_.format(a=a,q=q)}")
        a_q_plag = Path(A_Q_PLAG_PATH_.format(a=a, q=q))
        if not a_q_plag.exists():
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
