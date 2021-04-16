from auto_upload import init_selenium
from init import MOODLE_COURSE_ID,Path

driver = init_selenium()

# driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/user/index.php?roleid=5&perpage=5000&id={MOODLE_COURSE_ID}")

# students=[s.text for s in driver.find_elements_by_xpath('//table[@id="participants"]//tbody//strong//a')]

# with open("students.txt",'w') as f:
#     f.write("\n".join(sorted(students)))

# print(f"Done for students.txt and added {len(students)} students")

driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/mod/assign/view.php?id=9407&action=grading")

students={s.get_attribute("innerHTML"):s.get_attribute("href").split('=')[1][:5] for s in driver.find_elements_by_xpath('//table[contains(concat(" ",normalize-space(@class)," ")," generaltable ")]//td[contains(concat(" ",normalize-space(@class)," ")," c2 ")]//a')}

# stds=Path('students.txt').read_text().split('\n')
# s={i:[val for key, val in maps.items() if " ".join(i.strip().split()).lower() == key.lower()][0] for i in stds}
# maps={i.split(',')[0]:i.split(',')[1] for i in Path('res/mapping.txt').read_text().split('\n')}


Path("res/mapping.txt").write_text("\n".join(map(",".join,sorted(students.items()))))

Path("students.txt").write_text("\n".join(sorted(students.keys())))

print(f"Done for students.txt and added {len(students)} students")

