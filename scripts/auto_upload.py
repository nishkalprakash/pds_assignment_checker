"""
* Auto upload to moodle
* Uses a file creds.txt as {Username}:{Password}
* Current webdriver for code is chrome 87, change as needed in lib/chromedriver.exe
* Uses id of students found in grading page in moodle, change as needed in var/mapping.txt
"""
from time import sleep
from selenium.webdriver.common.by import By

from lib.pds_file_op import (
    get_a_ql_from_user,
    get_map_roll_to_name,
    get_std_roll_to_m_c_dict,
    print,
    pull
)
from lib.pds_selenium import (
    driver_get_course,
    driver_get_topics_from_a,
    extract_name_roll_tuple,
    init_selenium,
    insert,
    driver_get_heading_element_list
)
from lib.pds_globals import A_Q_


def upload_to_moodle(a, ql,s=None,roll=None):
    ## Initialize selenium
    global driver
    driver = init_selenium()
    # global driver
    # sleep(2)
    ## Go to course page
    driver_get_course(driver)
    # map_n_r=get_map_roll_to_name(rev=True)
    # h4="//h4[contains(text(),'Attempt number 1 for ')]"
    xp="descendant::div[@class='comment']//%s[contains(concat(' ',normalize-space(@id),' '),'-%s')]"
    q_topics = [i for i in driver_get_topics_from_a(driver,a) if i['q'] in ql]
    if s:
        # get the mapping for roll;set from var/LT{a}.txt
        x = pull(f"var/LT{a}.txt")
        # get a dict {set_attempt:set(roll_no)}
        std_dict_set = {
            'A':{i[0] for i in x if i[1]=="A"},
            'B':{i[0] for i in x if i[1]=="B"}
        }
    for q_topic in q_topics:
        q=q_topic['q']
        nr_nxt=driver_get_heading_element_list(driver,q_topic)
        m_elem=nr_nxt[0]['next_div'].find_element(by=By.XPATH,value=xp.replace('@id','@name')%('input','maxmark'))
        max_m=float(m_elem.get_attribute('value'))
        s_m_c = get_std_roll_to_m_c_dict(a, q,scale=max_m)
        for i,nrd in enumerate(nr_nxt):
        # try:
            next_div=nrd.pop('next_div')
            r=nrd['r']
            if roll is not None and r!=roll:
                continue
            if s and r not in std_dict_set[s]:
                continue
            cm=next_div.find_element(by=By.XPATH,value=xp%('div','comment_ideditable'))
            mks=next_div.find_element(by=By.XPATH,value=xp%('input','mark'))
        
        # for i,elem in enumerate(nrt):

            ## Upload data to moodle
            insert(driver,mks, f"{s_m_c[r]['m']}")
            insert(driver,cm, f"{s_m_c[r]['c']}")
            print(f"{i} - Done for {r}")
            if r==roll:
                break
        ## Save changes
        sleep(2)
        print(f'{f"Done for {A_Q_.format(a=a,q=q)}":*^50}')
        driver.find_element(By.XPATH, value="//input[@type='submit' and @value='Save and go to next page']").click()
        sleep(2)

    ## Get the link to the assignemt_question

    # driver.get(A_Q_PDS_QUIZ_.format(q=qq['q'],qid=qq['qid'],quiz_id=qq['quiz_id']))
    # driver_get_from_topic(driver, topic_id)
    ## Get each student marks and comments
    driver.close()
    return 0

# def upload_to_moodle_driver():
    

 
    
if __name__ == "__main__":
    a, ql, s = get_a_ql_from_user()
    upload_to_moodle(a,ql,s)