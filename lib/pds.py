from selenium import webdriver
from pathlib import Path
import zipfile


## User Defined Variables
HOME = "Assignments"
BASE = "Assignment"
# BASE = "Lab_Test_1_Part"
# BASE = "Lab_Test_2_Part"
BASE = "Lab-test"
MOODLE_COURSE_ID=400
VAR = "var"
LIB = "lib"

def insert(driver, id, data):
    elem=driver.find_element_by_id(id)
    elem.clear()
    elem.send_keys(data)


def init_selenium(def_dwnld_dir:Path = False):
    if def_dwnld_dir:
        options = webdriver.ChromeOptions()
        prefs = {
            'profile.default_content_settings.popups': 0,
            'download.default_directory': f'{def_dwnld_dir.absolute()}',
            "download.prompt_for_download": False,
            "download.directory_upgrade": True,
            "safebrowsing_for_trusted_sources_enabled": False,
            "safebrowsing.enabled": False
            }
        options.add_argument("--start-maximized")
        options.add_experimental_option('prefs', prefs)

        driver = webdriver.Chrome(
            executable_path=f"{LIB}/chromedriver.exe",
            chrome_options=options
            )
    else:
        driver=webdriver.Chrome(f"{LIB}/chromedriver.exe")

    driver.implicitly_wait(2)
    driver.maximize_window()
    driver.get("https://moodlecse.iitkgp.ac.in/moodle/login/index.php")
    username, password = Path(f"{VAR}/creds.txt").read_text().strip().split(":")
    insert(driver, "username", username)
    insert(driver, "password", password)
    driver.find_element_by_id("loginbtn").click()
    return driver


def pull(path):
    return [x for i in Path(path).read_text().split("\n").strip() if not (x:=i.strip()) and not x.startswith('#')]


def push(path, text):
    with Path(path).open("a+") as f:
        f.write(text + "\n")


def def_input(text, default=""):
    x = input(f"{text} [{default}]: ")
    if x:
        return x
    else:
        return default

def get_students():
    """ Returns the students list """
    return pull(f"{VAR}/students.txt")

## Decompress the file
def unzip(fname: Path):
    """unzip files"""
    zip_file = zipfile.ZipFile(fname)
    folder=fname.parent/fname.stem
    if folder.exists():
        print("FODLER ALREADY EXISTS")
        return -1
    else:
        folder.mkdir()
    for names in zip_file.namelist():
        zip_file.extract(names, folder)
    zip_file.close()


