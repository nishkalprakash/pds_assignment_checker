from lib.pds_globals import VAR

import pygsheets
progress_monitor_url="https://docs.google.com/spreadsheets/d/1Sl_v0iwNDjcqqaq31gARLXKsl7WRmXiOr-KEFbKyp7A"
# viva_marks_url="https://docs.google.com/spreadsheets/d/1JmXAW0GQzfDOA87-emeyXMLj1IFFFWdyNvx7wQS4JlI/"

def auth(service_account=f"{VAR}/service_account.json"):
    c = pygsheets.authorize(service_account_file=service_account)
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