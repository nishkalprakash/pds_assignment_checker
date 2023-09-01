from pathlib import Path
import sys
sys.path.append(str(Path.cwd().parent.parent))
from subprocess import run
from lib.pds_globals import SOL_,BR
## Add previous directory to path
import os
from lib.pds_file_op import get_a_ql_from_user

a,ql= get_a_ql_from_user()
print(a,ql)

base_tmp= Path('tmp')
for q in ql:
    aq=dict(a=a,q=q)
    file= base_tmp / SOL_.format(**aq)
    in_file=file.with_name(file.name.replace('.c','.txt'))
    os.system(f'gcc {file}')
    for line in in_file.read_text().splitlines():
        # if BR in line:
            # line=line.replace(BR,'\n')
        print(line)
        # Run file in c
        # os.system(f'echo "{line}" | gcc -xc -o {file} && ./{file}')
        # os.system(f'echo "{line}" | gcc {file} -o {file.stem}')
        cmd = f'a.exe'
        proc=run(cmd,input=line.replace(BR,'\n'), capture_output=True, text=True,timeout=3)
        out=proc.stdout
        print(out)

