from lib.pds_globals import VAR

import pygsheets
progress_monitor_url="https://docs.google.com/spreadsheets/d/1dU8a6-qc3neQK_7G_6bHrdmN12sMAmJ1N1wImA0DYeU/edit#gid=1121699406"

def auth(path=f"{VAR}/client_secret.json"):
    c = pygsheets.authorize(path)
    return c

def get_spreadsheet(c=None,url=progress_monitor_url):
    if c is None:
        c=auth()
    sp=c.open_by_url(url)
    return sp

def get_worksheet(c=None,sp=None,title="LTs",rows=100,cols=26):
    if c is None:
        c=auth()
    if sp is None:
        sp=get_spreadsheet(c,progress_monitor_url)
    try:
        ws=sp.worksheet_by_title(title)
    except pygsheets.WorksheetNotFound:
        ws=sp.add_worksheet(title=title,rows=rows,cols=cols)
    return ws