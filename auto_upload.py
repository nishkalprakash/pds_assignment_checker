"""
* Auto upload to moodle
* Uses a file creds.txt as {Username}:{Password}
* Current webdriver for code is chrome 87, change as needed in lib/chromedriver.exe
* Uses id of students found in grading page in moodle, change as needed in var/mapping.txt
"""

from lib.pds_file_op import get_a_q_from_user, pull,get_std_to_m_c_dict,print
from lib.pds_selenium import driver_get_course, driver_get_topics_from_a, init_selenium,driver_get_from_topic,insert
from lib.pds_globals import BASE

if __name__ == "__main__":

    
    def upload_to_moodle(a,q):
        ## Initialize selenium
        driver = init_selenium()
        ## Go to course page
        driver_get_course(driver)
        ## Get the link to the assignemt_question
        topic_id=driver_get_topics_from_a(driver,a,q)['topic_id']
        driver_get_from_topic(driver, topic_id)
        ## Get each student marks and comments
        std_dict = get_std_to_m_c_dict(a,q)
        ## Get the moodle mapping
        ## Mapping (dict) = { Std : moodle_code}
        mapping = {
            (x:=i.split(","))[0].strip() : x[1].strip()
            for i in pull('var/mapping.txt')
        }
        ## Upload data to moodle
        for std in std_dict:
            insert(driver, f"quickgrade_{mapping[std.strip()]}", f"{std_dict[std]['m']}")
            insert(driver, f"quickgrade_comments_{mapping[std.strip()]}", std_dict[std]['c'])
            print(f"Done for {std}")
        ## Save changes
        driver.find_element_by_id("id_savequickgrades").click()
        driver.close()
        print(f'{f"Done for {BASE}_{a}":*^50}')
        return 0
    
    a,q=get_a_q_from_user()
    upload_to_moodle(a,q)
