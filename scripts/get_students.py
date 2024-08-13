from lib.pds_selenium import get_sel_items, getqs, init_selenium
from lib.pds_globals import DELIM, MOODLE_COURSE_ID, VAR
from pathlib import Path

driver = init_selenium()

# PAGE_ID = 10901

driver.get(f"https://moodlecse.iitkgp.ac.in/moodle/user/index.php?perpage=80&id={MOODLE_COURSE_ID}")

# students=[s.text for s in driver.find_elements(by="xpath",value='//table[@id="participants"]//tbody//strong//a')]

# with open("students.txt",'w') as f:
    # f.write("\n".join(sorted(students)))

# print(f"Done for students.txt and added {len(students)} students")

# driver.get(
#     f"https://moodlecse.iitkgp.ac.in/moodle/mod/assign/view.php?id={PAGE_ID}&action=grading"
# )
# driver.get(
#     f"https://moodlecse.iitkgp.ac.in/moodle/enrol/users.php?id={MOODLE_COURSE_ID}&role=5"
# )

# def get_sel_items(val,th='th',a=''):
#     return driver.find_elements(by="xpath",
#         value=f'//table[@id="participants"]//tr[not(@class="emptyrow")]//{th}[contains(concat(" ",normalize-space(@class)," ")," {val} ")]{a}'
#         )
# def get_sel_items(val,a=''):
#     return driver.find_elements(by="xpath",
#         value=f'//*[matches(@id,"user-index-participants-{MOODLE_COURSE_ID}_r\\d+_c{val}")]{a}'
#         )

# driver.find_elements(by="xpath",
#         value=f"//tr[not(@class='emptyrow')]//td[@class='cell c0']/input"
#         )
elements_name = [
    i.text.replace("Select '",'').rstrip("'") for i in driver.find_elements(
        by="xpath",
        value=f"//tr[not(@class='emptyrow')]//td[@class='cell c0']/label"
        )
    ]
        
elements_id = [i.get_attribute('id').strip('user') for i in driver.find_elements(by="xpath",value=
                f"//tr[not(@class='emptyrow')]//td[@class='cell c0']/input"
            )]
# elements_id = [element.get_attribute('id') for element in elements_id]
elements_username=[i.text.upper() for i in driver.find_elements(by="xpath",value=
                f"//tr[not(@class='emptyrow')]//td[@class='cell c2']"
            )]
elements_roll = [v.text.upper() if v.text else elements_username[k] for k,v in enumerate(driver.find_elements(by="xpath",value=
                f"//tr[not(@class='emptyrow')]//td[@class='cell c3']"
            ))]

n = len(elements_name)
# n = len(elements_id)
# n = len(elements_roll)

std_id_roll_dict = {}

for i in range(n):
    s = elements_name[i]
    id = elements_id[i]
    r = elements_roll[i]
    # std_id_roll_dict[s.get_attribute("innerHTML").strip()] = {
    std_id_roll_dict[id] = {
        "name": s.strip(),
        "roll": r.strip(),
    }
    # if i==73:
    #     pass

# stds=Path('students.txt').read_text().split('\n')
# s={i:[val for key, val in maps.items() if " ".join(i.strip().split()).lower() == key.lower()][0] for i in stds}
# maps={i.split(',')[0]:i.split(',')[1] for i in Path('var/mapping.txt').read_text().split('\n')}

Path(f"{VAR}/mapping.csv").write_text(
    "\n".join(
        map(
            DELIM.join,
            sorted(
                ((i[0], i[1]["name"], i[1]["roll"]) for i in std_id_roll_dict.items())
            ),
        )
    )
)

# Path("students.txt").write_text("\n".join(sorted(std_id_roll_dict.keys())))

print(f"Done for mapping.txt and added {n} students")
