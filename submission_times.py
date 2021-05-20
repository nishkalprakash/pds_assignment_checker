from lib.pds_file_op import get_a_q_from_user
from auto_upload import user_input
from lib.pds_selenium import driver_get_course, driver_get_topics_from_a, init_selenium

driver=init_selenium()
driver_get_course(driver)
a,q=get_a_q_from_user()
driver_get_topics_from_a(a)


