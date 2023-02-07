from lib.pds_file_op import def_input, get_a_ql_from_user, get_std_roll_to_m_c_dict
from pyperclip import copy

a,ql=get_a_ql_from_user()
q=ql[0]

roll=def_input("Enter Roll Number:",'')
data=get_std_roll_to_m_c_dict(a,q,scale=100)[roll]
copy(data['c'])
print(*data.values(),sep='\n####\n')
