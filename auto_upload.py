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
)
from lib.pds_selenium import (
    driver_get_course,
    driver_get_topics_from_a,
    extract_name_roll_tuple,
    init_selenium,
    insert,
)
from lib.pds_globals import A_Q_, A_Q_PDS_QUIZ_

if __name__ == "__main__":

    def upload_to_moodle(a, q):
        ## Initialize selenium
        driver = init_selenium()
        ## Go to course page
        driver_get_course(driver)
        ## Get the link to the assignemt_question

        qq = driver_get_topics_from_a(driver,a,q)
        driver.get(A_Q_PDS_QUIZ_.format(q=qq['q'],qid=qq['qid'],quiz_id=qq['quiz_id']))
        # driver_get_from_topic(driver, topic_id)
        ## Get each student marks and comments
        map_n_r=get_map_roll_to_name(rev=True)
        h4="//h4[contains(text(),'Attempt number 1 for ')]"
        xp=h4+"/following-sibling::div//div[@class='comment']//%s[contains(concat(' ',normalize-space(@id),' '),'-%s')]"
        nrt=driver.find_elements(by=By.XPATH,value=h4)
        cm=driver.find_elements(by=By.XPATH,value=xp%('div','comment_ideditable'))
        mks=driver.find_elements(by=By.XPATH,value=xp%('input','mark'))
        max_m=float(driver.find_element(by=By.XPATH,value=xp.replace('@id','@name')%('input','maxmark')).get_attribute('value'))
        s_m_c = get_std_roll_to_m_c_dict(a, q,scale=max_m)
        
        for i,elem in enumerate(nrt):
            n,r=extract_name_roll_tuple(elem)
            if not r:
                r=map_n_r[n]
            ## Upload data to moodle
            insert(driver,mks[i], f"{s_m_c[r]['m']}")
            insert(driver,cm[i], f"{s_m_c[r]['c']}")
            print(f"Done for {r}")
        ## Save changes
        driver.find_element(By.XPATH, value="//input[@type='submit' and @value='Save and go to next page']").click()
        sleep(2)
        driver.close()
        print(f'{f"Done for {A_Q_.format(a=a,q=q)}":*^50}')
        return 0

    a, ql = get_a_ql_from_user()
    for q in ql.split():
        upload_to_moodle(a, q)
