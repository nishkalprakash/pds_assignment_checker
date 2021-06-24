## Feature: download grades of students, clean columns and upload to sheets


#%% Imports
from lib.pds_globals import MOODLE_COURSE_ID
from lib.pds_selenium import init_selenium,Path

#%% Get grades from moodle
# driver = init_selenium("temp")
# driver.get(
#     f"https://moodlecse.iitkgp.ac.in/moodle/grade/export/txt/index.php?id={MOODLE_COURSE_ID}"
# )
# driver.find_element_by_id("id_submitbutton").click()
# driver.close()
#%% Clean Grades (remove unnecessary or empty cols)
## Get the Path of the grade file
gfpath = max(
    [(i, i.lstat().st_mtime) for i in Path("temp").glob("*.csv")], key=lambda x: x[1]
)[0]

#%% init pandas
import pandas as pd

gdf = pd.read_csv(gfpath)

# %% drop cols
remc = [
    "Institution",
    "Department",
    "Email address",
    "Assignment: Assignment 0 (Real)",
    "Last downloaded from this course",
    # "Assignment: Assignment 1 problem 2 submission (Real)",
]
nan = float("NaN")
gdf=gdf.drop(remc, axis=1)
gdf=gdf.replace("-",nan)
gdf=gdf.dropna(how='all', axis=1)
# gdf=gdf.replace(nan,0.0)
gdf.fillna(0,inplace=True)
gdf=gdf.apply(pd.to_numeric,errors="ignore")
n=['First name', 'Surname']
gdf.insert(3,'Student',gdf[n].agg(' '.join, axis=1))
gdf=gdf.drop(n,axis=1)
gdf=gdf.apply(lambda x: x.str.strip() if type(x)=='str' else x)
gdf=gdf.rename(columns=lambda x: x.strip())
#%% For header cleaning
hdf=pd.DataFrame([gdf.columns.values.tolist()])
hdf=hdf.replace("Assignment\: ","",regex=True)
hdf=hdf.replace("Assignment ","A",regex=True)
hdf=hdf.replace(" problem ","_Q",regex=True)
hdf=hdf.replace(" submission","",regex=True)
hdf=hdf.replace("Lab\-test ","LT",regex=True)
hdf=hdf.replace("Lab\-test\-","LT",regex=True)
hdf=hdf.replace("Lab Test ","LT",regex=True)
hdf=hdf.replace(" \(Real\)","",regex=True)
hdf=hdf.replace("Course total","Total",regex=True)


#%%
rows,cols=gdf.shape
gdf.columns=hdf.values[0]
# gdf.sort_values('Total',axis=1)
gdf.sort_values(by='Total',ascending=False,inplace=True)
# table= [gdf.columns.values.tolist()] + gdf.values.tolist()
# del gdf

# %% pygsheets
from lib.pds_pygsheets import auth,get_worksheet
c=auth()

ws_name=gfpath.stem.replace("-comma_separated","")
ws=get_worksheet(c=c,title=ws_name,rows=1,cols=1)
ws.unlink()
ws.clear()
#%%
ws.frozen_rows=0
ws.frozen_cols=0
ws.resize(1,1)
# ws.append_table(table,overwrite=True)
ws.set_dataframe(gdf,start=(1,1),fit=True)
ws.frozen_rows=1
ws.frozen_cols=2
# ws.adjust_column_width(start=0,end=cols,)
ws.adjust_column_width(start=1,pixel_size=80)
ws.adjust_column_width(start=cols,pixel_size=50)
ws.adjust_column_width(start=2,end=cols-1,pixel_size=30)

ws.link()
# %%
