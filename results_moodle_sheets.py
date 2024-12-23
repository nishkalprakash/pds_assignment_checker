## Feature: download grades of students, clean columns and upload to sheets


#%% Imports
from time import sleep
from lib.pds_file_op import def_input, get_map_roll_to_name, get_students, print, pull

from lib.pds_globals import MOODLE_COURSE_ID, TMP
from lib.pds_selenium import init_selenium, Path
import re

#%% Get grades from moodle
fetch = def_input("Fetch Marks from moodle?", 0)
if fetch:

    driver = init_selenium(TMP)
    driver.get(
        f"https://moodlecse.iitkgp.ac.in/moodle/grade/export/txt/index.php?id={MOODLE_COURSE_ID}"
    )
    sleep(2)
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
    # "Assignment: Assignment 0 (Real)",
    "Last downloaded from this course",
    "Course total (Real)",
    # "Assignment: Assignment 1 problem 2 submission (Real)",
    # "Assignment: _Assignment_ 4 - Question 4 (Real)",
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
n = ["First name", "Last name"]
gdf.insert(3, "Student", gdf[n].agg(" ".join, axis=1))
gdf = gdf.drop(n, axis=1)
gdf = gdf.apply(lambda x: x.str.strip() if type(x) == "str" else x)
gdf = gdf.rename(columns=lambda x: x.strip())

#%% For header cleaning
hdf = pd.DataFrame([gdf.columns.values.tolist()])
hdf = hdf.replace(r"Assignment\: ", "", regex=True)
hdf = hdf.replace("Assignment ", "A", regex=True)
hdf = hdf.replace(" - Question ", "_Q", regex=True)
hdf = hdf.replace(" submission", "", regex=True)
hdf = hdf.replace(r"Lab\-test ", "LT", regex=True)
hdf = hdf.replace(r"Lab\-test\-", "LT", regex=True)
hdf = hdf.replace("Lab Test ", "LT", regex=True)
hdf = hdf.replace(r" \(Real\)", "", regex=True)
# hdf = hdf.replace("Course total", "zTotal", regex=True)
hdf = hdf.replace("ID number", "1_Roll", regex=True)
hdf = hdf.replace("Student", "2_Student", regex=True)

#%%
cols=[]
for col in hdf.values[0]:
    col=col.replace('Quiz: ','')
    if 'Lab' in col:
        cols.append(col.split(':')[0].replace('Lab-','A_0').replace('010','10').replace('011','11').replace('012','12'))
    elif 'LT-' in col:
        cols.append(col.split(':')[0].replace(': Set-','').replace('LT-','LT_0'))
    else:
        cols.append(col)
cols
gdf.columns = cols
del hdf
#%%

#%% Combine LT1A and LT1B
# gdf['LT_01']=gdf[['LT_1A','LT_1B']].max(axis=1)
# gdf['LT_02']=gdf[['LT_2A','LT_2B']].max(axis=1)
#%% Drop LT1A and LT1B
# remc=['LT_1A','LT_1B','LT_2A','LT_2B']
# gdf = gdf.drop(remc, axis=1)
#%% Drop A_01
remc=['A_01']
gdf = gdf.drop(remc, axis=1)
#%% replace nan students with their actual roll numbers
m = get_map_roll_to_name(rev=True)

missing = gdf.loc[gdf["1_Roll"] == 0].index
for i in missing:
    name = gdf.loc[i, "2_Student"].strip()
    # remove extra space using regex
    name = re.sub(r" +", " ", name)
    gdf.loc[i, "1_Roll"] = m[name]
## Set column 1_Roll to upper case


#%% To handle non moodle users 

# s={"1_Roll","2_Student"}

# cols = sorted(set(gdf.columns.tolist())-s)

# bl=[{
#     "1_Roll": "21CH10006",
#     "2_Student": "Aditya Vishwanath Golewar",
# },{
#     "1_Roll": "21MI10007",
#     "2_Student": "Aman Singh",
# },{
#     "1_Roll": "21MI33025",
#     "2_Student": "Nenavath Adithya",
# }]

# bl_df=pd.DataFrame(bl)
# gdf=pd.concat([gdf,bl_df],ignore_index=True)
gdf["1_Roll"] = gdf["1_Roll"].str.upper()
gdf.fillna("-", inplace=True)
gdf = gdf.set_index("1_Roll")
#%% Add Viva data here
# viva=get_worksheet(cauth,sp=get_spreadsheet(cauth,url=viva_marks_url),title="Sheet1")
# #%%
# ids=[i[0].strip() for i in viva.get_values(start='C3',end='C94')]
# gdf['Viva_1']=pd.Series([i[0] for i in viva.get_values(start='G3',end='G94')],index=ids,dtype=float)
# gdf['Viva_2']=pd.Series([i[0] for i in viva.get_values(start='J3',end='J94')],index=ids,dtype=float)
# rename column A06 to LT_01

#%% To handle medical case
# A6 - Give average from A2-A5 -
## DONE : Directly Updated in moodle

gdf.at["#ROLL","A_06"] = gdf.loc["#ROLL","A_02":"A_05"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_05"] = gdf.loc["#ROLL","A_02":"A_04"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_04"] = gdf.loc["#ROLL","A_02":"A_03"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_05"] = gdf.loc["#ROLL","A_02":"A_04"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_06"] = gdf.loc["#ROLL","A_02":"A_05"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_07"] = gdf.loc["#ROLL","A_02":"A_06"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_08"] = gdf.loc["#ROLL","A_02":"A_07"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_09"] = gdf.loc["#ROLL","A_02":"A_08"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_10"] = gdf.loc["#ROLL","A_02":"A_09"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_11"] = gdf.loc["#ROLL","A_02":"A_10"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_07"] = gdf.loc["#ROLL","A_02":"A_06"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_09"] = gdf.loc["#ROLL","A_02":"A_08"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_10"] = gdf.loc["#ROLL","A_02":"A_09"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_11"] = gdf.loc["#ROLL","A_02":"A_10"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_11"] = gdf.loc["#ROLL","A_02":"A_10"].replace('-',0).astype('float').mean()
gdf.at["#ROLL","A_09"] = gdf.loc["#ROLL","A_02":"A_08"].replace('-',0).astype('float').mean()

# A6 - Give average from A2-A5 - 23EE10076 - Pradeep V  (Medical Leave) (leg fracture)
## DONE : Directly Updated in moodle
# gdf.at["23EE10076","A_06"] = gdf.loc["23EE10076","A_02":"A_05"].replace('-',0).astype('float').mean()



cols = gdf.columns
cols = [i.replace("A_06", "LT_01") for i in cols]
# rename column A12 to LT_02
cols = [i.replace("A_12", "LT_02") for i in cols]
#%%
gdf.columns = cols
#%% Average teh marks here
a_to_aq_dict = {'A': [], 'LT': []}
for i in gdf.columns:
    if i.startswith("A"):
        a_to_aq_dict["A"].append(i)
    elif i.startswith("LT"):
        a_to_aq_dict["LT"].append(i)

        # a_to_aq_dict[i.split("_")[0]] = [i]
## `agg_cols` list: ['A1 (Q1,...,Q5)','LT1 (Q1...)]
agg_cols = []
#%%
# drop_individual_aq = def_input("Drop A#_Q# cols? ", 0)
# for c in a_to_aq_dict:
    # if len(a_to_aq_dict[c]) > 1:
        # aq=[int(i.strip('ALT_')) for i in a_to_aq_dict[c]]
        # n = f"{c} ({','.join([i.split('_')[-1] for i in a_to_aq_dict[c]])})"
        # agg_cols.append(n)
        # gdf[n] = gdf[a_to_aq_dict[c]].replace('-',0).astype('float').mean(axis=1).round(2)

        # if drop_individual_aq:
        #     gdf.drop(a_to_aq_dict[c], axis=1, inplace=True)
c='A'
top=8
A_top = f"Top {top}A"
agg_cols.append(A_top)
gdf[A_top] = gdf[a_to_aq_dict[c]].replace('-',0).astype('float').apply(lambda x: x.sort_values(ascending=False).iloc[:top].mean(),axis=1).round(2)

c='LT'
LT_total = f"LT_Total"
# LT_top = f"LT1"
## LT_02 is out of 45 marks, scale to 100 
# gdf['LT_02'] = (gdf['LT_02'].replace('-',0).astype('float')*100/45).round(2)
agg_cols.append(LT_total)
gdf[LT_total] = gdf[a_to_aq_dict[c]].replace('-',0).astype('float').mean(axis=1).round(2)

# .mean(axis=1)


#%% compute total
# gdf.drop("zTotal", axis=1, inplace=True)



fl=lambda x,y:x[y].replace('-',0).astype('float')
total="3_Total"
# gdf[LT_total]=0.4*fl(gdf,"LT_01")+0.6*fl(gdf,"LT_02")
gdf[total] = .4*fl(gdf,A_top) + 0.6*fl(gdf,LT_total)
# gdf[total] = fl(gdf,top8)
# gdf.drop(top8, axis=1, inplace=True)
# if inital total was 0 then set the value to 0
# gdf[total]=gdf[total].apply(lambda x:0 if x==20 else x) 
# gdf["Total"]=gdf["Total"].apply(lambda x:x/2 if x<40 else x)
# gdf.sort_values(by="Total", ascending=False, inplace=True)

# gdf.at["ROLL",total] = 20.01


# create a new row with id 21AG30019 and set the value of column 3_Total to 0
# first create the student
# gdf.loc["21AG30019"] = 0
# gdf.at["21AG30019",total] = 0
# gdf.at["21AG30019","2_Student"] = "Jasjeet Singh"





gdf.sort_values(by=total, ascending=False, inplace=True)
gdf = gdf.reindex(sorted(gdf.columns), axis=1)

# %% pygsheets

## use to set ws_name as moodle provides
# ws_name=gfpath.stem.replace("-comma_separated","")
from lib.pds_pygsheets import auth, get_worksheet


def push_to_sheets(cauth, ws_name, gdf):
    print("Pygsheets auth success")
    ws = get_worksheet(c=cauth, title=ws_name, rows=1, cols=1)
    # ws2 = get_worksheet(c=cauth, title=ws_name, rows=1, cols=1)
    #%
    ws.frozen_rows = 0
    ws.frozen_cols = 0
    ws.clear()
    ws.resize(1, 3)
    #%
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


#%% Auth
# ws2_name = "Nishkal - Student Grades"
ws_name = "Auto_grade"
cauth = auth()
# my_students = pull(path=r'var\my_students_sorted.txt')
# push_to_sheets(cauth, ws_name, gdf.loc[my_students, ~gdf.columns.isin(agg_cols)])

##
my_students = get_students(only_roll=1,path=r'var/mapping.txt')
# gdf_my_students = gdf.loc[my_students, ~gdf.columns.isin(agg_cols)]
gdf_my_students = gdf
gdf_my_students.sort_values(by=total, ascending=True, inplace=True)
push_to_sheets(cauth, ws_name, gdf_my_students)

# %%
