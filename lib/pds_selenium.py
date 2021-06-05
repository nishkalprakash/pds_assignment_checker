### !!TODO: make this a class

from lib.pds_file_op import printf
from pathlib import Path
from lib.pds_globals import VAR, LIB, BASE, HOME

## SELENIUM FUNCTIONS

def driver_get_from_topic(driver,topic_id,action='grading'):
    driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/mod/assign/view.php?id={topic_id}&action={action}")
    if 'login' in driver.current_url:
        print("Aw Snap! Crome session expired X_X ")
        moodle_login(driver)
        return driver_get_from_topic(driver,topic_id,action)
    
    print("Success: fetched url from topic")
    printf(driver.current_url)
    if action == 'downloadall':
        from time import sleep
        sleep(2)

def driver_get_course(driver,course_id=None):
    if course_id is None:
        from lib.pds_globals import MOODLE_COURSE_ID
        course_id=MOODLE_COURSE_ID
    driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/course/view.php?id={course_id}")
    if 'login' in driver.current_url:
        print("Aw Snap! Crome session expired X_X ")
        moodle_login(driver)
        return driver_get_course(driver)
    else:
        print("Successfully loaded Course Page")
        printf(driver.current_url)
    return driver

def sem3_lt_hack():
    # try:
    #     if "Test" in BASE:
    #         driver.find_element_by_xpath(f"//div[./h3[contains(text(),\'Lab Test {BASE.strip('Lab_Test_Part')}\')]]").find_element_by_link_text(f"PART {a} Submission (Final)").click()
    #     else:
    #         driver.find_element_by_link_text(f"Assignment {a} Submission").click()

    # except:
    #     driver.find_element_by_link_text(f"Assignment {a} Submission (Final)").click()

    # driver.find_element_by_link_text("View/grade all submissions").click()
    pass

def insert(driver, id, data):
    elem=driver.find_element_by_id(id)
    elem.clear()
    elem.send_keys(data)

def moodle_login(driver):
    print("Trying to login to moodle")
    driver.get("https://moodlecse.iitkgp.ac.in/moodle/login/index.php")
    from lib.pds_file_op import pull
    username, password = pull(f'{VAR}/creds.txt')[0].split(":")
    insert(driver, "username", username)
    insert(driver, "password", password)
    driver.find_element_by_id("loginbtn").click()

def init_selenium(def_dwnld_dir = None):
    from selenium import webdriver
    from pathlib import Path
    
    options = webdriver.ChromeOptions()
    # options.add_argument('--no-sandbox')
    # options.headless=True
    options.add_argument('--disable-gpu')
    options.add_experimental_option("useAutomationExtension", False)
    options.add_argument("--disable-dev-shm-usage") 
    options.add_argument('--hide-scrollbars')
    options.add_argument('--disable-extensions')
    options.add_argument("--disable-infobars")
    options.add_argument("--log-level=3")
    if def_dwnld_dir:
        def_dwnld_dir=Path(def_dwnld_dir)
        prefs = {
            'profile.default_content_settings.popups': 0,
            'download.default_directory': f'{def_dwnld_dir.absolute()}',
            "download.prompt_for_download": False,
            "download.directory_upgrade": True,
            "safebrowsing_for_trusted_sources_enabled": False,
            "safebrowsing.enabled": False
            }
        options.add_experimental_option('prefs', prefs)
    # options.add_argument("--start-maximized")
    options.add_argument(f"--user-data-dir={Path(VAR).absolute()/'moodle_chrome_data'}")
    driver = webdriver.Chrome(
        executable_path=f"{LIB}/chromedriver.exe",
        options=options
        )

    # driver.implicitly_wait(2)
    # driver.maximize_window()

    driver_get_course(driver)
    print("Selenium Driver Successfully initialized")
    return driver

def driver_get_topics_from_a(driver,a,q=None):
    def get_q_and_topic_id(q_link):
        ## Extract id from the link
        from re import findall
        return dict(
            q=findall(r'problem (\d+)',q_link.text)[0],
            topic_id=findall(r'id=(\d+)',q_link.get_attribute("href"))[0]
        )
    print("inside driver_get_topics_from_a")
    if q is None:
        ## Get all the assignments links    
        ## eg: here we get all the links that start with "Assignment {a} problem"
        q_links=driver.find_elements_by_partial_link_text(f"{BASE} {a} problem")
        ## this is to remove duplicate links with the same value
        q_links=list({x.text:x for x in q_links}.values())

        ## HACK START
        try:
            q_links.append(driver.find_elements_by_partial_link_text(f"{BASE}-{a} problem")[0])
        except:
            pass
        ## HACK END

        q_topic_list= [get_q_and_topic_id(q_link) for q_link in q_links] 
        return q_topic_list
    else:
        ## Get only single topic
        q_link=driver.find_elements_by_partial_link_text(f"{BASE} {a} problem {q}")[0]
        q_topic = get_q_and_topic_id(q_link)
        return q_topic

def extract_q(q_base):
    from re import findall
    return findall(r'Question_(\d+)',q_base.name)[0]

def get_assignments(a):
    a_base=f'{HOME}/{BASE}_{a}'
    ## TODO Check if assignments need to be downloaded

    driver=init_selenium(a_base)

    ## This is the Home page of the course
    driver_get_course(driver)

    q_topic_list=driver_get_topics_from_a(driver,a)
    from lib.pds_file_op import create_base_folders, unzip
    for q_topic in q_topic_list:
        if not next((Path(a_base)/q_topic['q']).glob("PDS*"),False):
            create_base_folders(a,q_topic['q'])
            driver_get_from_topic(driver,q_topic['topic_id'],'downloadall')
            unzip(a_base,q_topic['q'])

    driver.close()
