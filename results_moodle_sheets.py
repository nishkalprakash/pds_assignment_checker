## Feature: download grades of students, clean columns and upload to sheets


#%% Imports
from time import sleep
from numpy import float64

from pandas.core import series
from lib.pds_globals import MOODLE_COURSE_ID
from lib.pds_selenium import init_selenium,Path

# %% Get grades from moodle
# driver = init_selenium("temp")
# driver.get(
#     f"https://moodlecse.iitkgp.ac.in/moodle/grade/export/txt/index.php?id={MOODLE_COURSE_ID}"
# )
# driver.find_element_by_id("id_submitbutton").click()
# sleep(2)
# driver.close()
#%% Clean Grades (remove unnecessary or empty cols)
## Get the Path of the grade file
gfpath = max(
    [(i, i.lstat().st_mtime) for i in Path("temp").glob("*.csv")], key=lambda x: x[1]
)[0]

#%% init pandas
import pandas as pd

gdf = pd.read_csv(gfpath)
gdf["ID number"]=gdf["ID number"].str.strip()
gdf.rename(columns={'ID number':'1_Roll'},inplace=True)
gdf=gdf.set_index('1_Roll')

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
hdf=hdf.replace("Course total","zTotal",regex=True)
hdf=hdf.replace("ID number","1_Roll",regex=True)
hdf=hdf.replace("Student","2_Student",regex=True)

gdf.columns=hdf.values[0]
del hdf

#%% Auth
from lib.pds_pygsheets import auth,get_worksheet,viva_marks_url,get_spreadsheet
cauth=auth()
#%% Add Viva data here
viva=get_worksheet(cauth,sp=get_spreadsheet(cauth,url=viva_marks_url),title="Sheet1")
#%%
ids=[i[0].strip() for i in viva.get_values(start='C3',end='C94')]
gdf['Viva_1']=pd.Series([i[0] for i in viva.get_values(start='G3',end='G94')],index=ids,dtype=float)
gdf['Viva_2']=pd.Series([i[0] for i in viva.get_values(start='J3',end='J94')],index=ids,dtype=float)

#%% Average teh marks here
agg_cols={}
for i in gdf.columns:
    try:
        agg_cols[i.split("_")[0]].append(i)
    except:
        agg_cols[i.split("_")[0]]=[i]

for c in agg_cols:
    if len(agg_cols[c])>1:
        n=f"{c} ({','.join([i.split('_')[-1] for i in agg_cols[c]])})"
        gdf[n]=gdf[agg_cols[c]].mean(axis=1)
        gdf.drop(agg_cols[c],axis=1,inplace=True)

gdf=gdf.reindex(sorted(gdf.columns), axis=1)
# %% 

#%% 



#%% compute total
gdf.drop('zTotal',axis=1,inplace=True)
#%%
gdf["Total"]=gdf.mean(axis=1,numeric_only=True)
gdf.sort_values(by='Total',ascending=False,inplace=True)
# table= [gdf.columns.values.tolist()] + gdf.values.tolist()
# del gdf

# %% pygsheets
# from lib.pds_pygsheets import auth,get_worksheet
# c=auth()

# ws_name=gfpath.stem.replace("-comma_separated","")
ws_name="PDS Lab Grades"
ws=get_worksheet(c=cauth,title=ws_name,rows=1,cols=1)
#%%
ws.frozen_rows=0
ws.frozen_cols=0
ws.clear()
ws.resize(1,1)
#%%
# ws.unlink()
# ws.append_table(table,overwrite=True)
ws.set_dataframe(gdf,start=(1,1),fit=True,copy_index=True)
ws.cell((1,1)).value="1_Roll"
ws.frozen_rows=1
ws.frozen_cols=2
# ws.adjust_column_width(start=0,end=cols,)
rows,cols=gdf.shape
ws.adjust_column_width(start=1,pixel_size=80)
ws.adjust_column_width(start=cols,pixel_size=50)
ws.adjust_column_width(start=3,end=cols)
# cauth
# ws.link()
# %%
