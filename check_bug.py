from pathlib import Path

x=Path().rglob("*.c");

for p in x:
    n=p.stem
    pp=n.split('_')
    try:
        if pp[0]=='A10' and pp[2].lower() not in map(str.lower,pp[3:]) and pp[2].lower() not in "".join(pp[3:]).lower():
            print(n)
    except:
        pass
