from lib.pds_globals import VAR

import pygsheets
progress_monitor_url="https://docs.google.com/spreadsheets/d/1dU8a6-qc3neQK_7G_6bHrdmN12sMAmJ1N1wImA0DYeU/edit#gid=1121699406"

def auth(path=f"{VAR}/client_secret.json"):
    c = pygsheets.authorize(path)
    return c

def get_spreadsheet(c,url=progress_monitor_url):
    sp=c.open_by_url(url)
    return sp

def get_worksheet(title="LTs"):
    c=auth()
    sp=get_spreadsheet(c)
    ws=sp.worksheet_by_title(title)
    return ws