## Feature: download grades of students, clean columns and upload to sheets


#%% Imports
from time import sleep
from lib.pds_file_op import def_input, get_map_roll_to_name, get_students, print, pull

from lib.pds_globals import MOODLE_COURSE_ID, TMP
from lib.pds_selenium import init_selenium, Path

#%% Get grades from moodle
fetch = def_input("Fetch Marks from moodle?", 0)
if fetch:

    driver = init_selenium(TMP)
    driver.get(
        f"https://moodlecse.iitkgp.ac.in/moodle/grade/export/txt/index.php?id={MOODLE_COURSE_ID}"
    )
    driver.find_element(by='id',value="id_submitbutton").click()
    sleep(2)
    driver.close()
#%% Clean Grades (remove unnecessary or empty cols)
## Get the Path of the grade file
gfpath = max(
    [(i, i.lstat().st_mtime) for i in Path(TMP).glob("*.csv")], key=lambda x: x[1]
)[0]
print(f"Working with {gfpath.name}")
#%% init pandas
import pandas as pd

gdf = pd.read_csv(gfpath)
print(f"Results loaded to DataFrame. Now Transforming")
gdf["ID number"] = gdf["ID number"].str.strip()
gdf.rename(columns={"ID number": "1_Roll"}, inplace=True)


# %% drop cols
remc = [
    "Institution",
    "Department",
    "Email address",
    "Assignment: Assignment 0 (Real)",
    "Last downloaded from this course",
    "Course total (Real)",
    # "Assignment: Assignment 1 problem 2 submission (Real)",
    "Assignment: _Assignment_ 4 - Question 4 (Real)",
]
nan = float("NaN")
## Drop cols defined in remc
gdf = gdf.drop(remc, axis=1)

## replace empty values with `nan`
# gdf = gdf.replace("-", nan)

## Drop all cols that have na
gdf = gdf.dropna(how="all", axis=1)

# gdf = gdf.loc[:,gdf]
# df.loc[:, (df.isnull().sum(axis=0) <= max_number_of_nas)]
## replace na with 0
gdf.fillna(0, inplace=True)
gdf = gdf.apply(pd.to_numeric, errors="ignore")
n = ["First name", "Surname"]
gdf.insert(3, "Student", gdf[n].agg(" ".join, axis=1))
gdf = gdf.drop(n, axis=1)
gdf = gdf.apply(lambda x: x.str.strip() if type(x) == "str" else x)
gdf = gdf.rename(columns=lambda x: x.strip())

#%% For header cleaning
hdf = pd.DataFrame([gdf.columns.values.tolist()])
hdf = hdf.replace("Assignment\: ", "", regex=True)
hdf = hdf.replace("Assignment ", "A", regex=True)
hdf = hdf.replace(" - Question ", "_Q", regex=True)
hdf = hdf.replace(" submission", "", regex=True)
hdf = hdf.replace("Lab\-test ", "LT", regex=True)
hdf = hdf.replace("Lab\-test\-", "LT", regex=True)
hdf = hdf.replace("Lab Test ", "LT", regex=True)
hdf = hdf.replace(" \(Real\)", "", regex=True)
# hdf = hdf.replace("Course total", "zTotal", regex=True)
hdf = hdf.replace("ID number", "1_Roll", regex=True)
hdf = hdf.replace("Student", "2_Student", regex=True)

gdf.columns = hdf.values[0]
del hdf


#%% replace nan students with their actual roll numbers
m = get_map_roll_to_name(rev=True)

missing = gdf.loc[gdf["1_Roll"] == 0].index
for i in missing:
    gdf.loc[i, "1_Roll"] = m[gdf.loc[i, "2_Student"]]
gdf = gdf.set_index("1_Roll")

#%% Add Viva data here
# viva=get_worksheet(cauth,sp=get_spreadsheet(cauth,url=viva_marks_url),title="Sheet1")
# #%%
# ids=[i[0].strip() for i in viva.get_values(start='C3',end='C94')]
# gdf['Viva_1']=pd.Series([i[0] for i in viva.get_values(start='G3',end='G94')],index=ids,dtype=float)
# gdf['Viva_2']=pd.Series([i[0] for i in viva.get_values(start='J3',end='J94')],index=ids,dtype=float)

#%% Average teh marks here
a_to_aq_dict = {}
for i in gdf.columns:
    try:
        a_to_aq_dict[i.split("_")[0]].append(i)
    except:
        a_to_aq_dict[i.split("_")[0]] = [i]
## `agg_cols` list: ['A1 (Q1,...,Q5)','LT1 (Q1...)]
agg_cols = []
# drop_individual_aq = def_input("Drop A#_Q# cols? ", 0)
for c in a_to_aq_dict:
    if len(a_to_aq_dict[c]) > 1:
        n = f"{c} ({','.join([i.split('_')[-1] for i in a_to_aq_dict[c]])})"
        agg_cols.append(n)
        gdf[n] = gdf[a_to_aq_dict[c]].replace('-',0).astype('float').mean(axis=1).round(2)

        # if drop_individual_aq:
        #     gdf.drop(a_to_aq_dict[c], axis=1, inplace=True)

gdf = gdf.reindex(sorted(gdf.columns), axis=1)

#%% compute total
# gdf.drop("zTotal", axis=1, inplace=True)
#%%
gdf["Total"] = gdf[agg_cols].mean(axis=1).round(2)
# gdf.sort_values(by="Total", ascending=False, inplace=True)
gdf.sort_values(by="1_Roll", ascending=True, inplace=True)

# %% pygsheets

## use to set ws_name as moodle provides
# ws_name=gfpath.stem.replace("-comma_separated","")
from lib.pds_pygsheets import auth, get_worksheet, viva_marks_url, get_spreadsheet


def push_to_sheets(cauth, ws_name, gdf):
    print("Pygsheets auth success")
    ws = get_worksheet(c=cauth, title=ws_name, rows=1, cols=1)
    # ws2 = get_worksheet(c=cauth, title=ws_name, rows=1, cols=1)
    #%%
    ws.frozen_rows = 0
    ws.frozen_cols = 0
    ws.clear()
    ws.resize(1, 1)
    #%%
    # ws.unlink()
    # ws.append_table(table,overwrite=True)
    ws.set_dataframe(gdf, start=(1, 1), fit=True, copy_index=True)
    ws.cell((1, 1)).value = "1_Roll"
    ws.frozen_rows = 1
    ws.frozen_cols = 2
    # ws.adjust_column_width(start=0,end=cols,)
    rows, cols = gdf.shape
    ws.adjust_column_width(start=1, pixel_size=80)
    ws.adjust_column_width(start=cols, pixel_size=50)
    ws.adjust_column_width(start=3, end=cols)

    print("Successfully pushed to ", ws_name)


# %%
ws_name = "PDS Lab Grades"
# ws2_name = "Nishkal - Student Grades"
#%% Auth
cauth = auth()
# my_students = pull(path=r'var\my_students_sorted.txt')
# push_to_sheets(cauth, ws_name, gdf.loc[my_students, ~gdf.columns.isin(agg_cols)])

##
my_students = get_students(only_roll=1)
# gdf_my_students = gdf.loc[my_students, ~gdf.columns.isin(agg_cols)]
gdf_my_students = gdf.loc[my_students,:]
gdf_my_students.sort_values(by="Total", ascending=False, inplace=True)
push_to_sheets(cauth, ws_name, gdf_my_students)
