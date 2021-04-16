from auto_upload import init_selenium
from init import MOODLE_COURSE_ID
driver = init_selenium()

driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/user/index.php?roleid=5&perpage=5000&id={MOODLE_COURSE_ID}")

students=[s.text for s in driver.find_elements_by_xpath('//table[@id="participants"]//tbody//strong//a')]

with open("students.txt",'w') as f:
    f.write("\n".join(sorted(students)))

print(f"Done for students.txt and added {len(students)} students")