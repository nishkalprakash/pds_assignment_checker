exp=10**5
ms,hl,li,mi=map(lambda x: float(x)/exp,input("Enter Monthly income, House loan, Life Inurance, Medical Insurance: ").strip().split())

yi=ms*12 
tax=0

hl_L=2.5
li_L=1.5
mi_L=.5

if yi >= 10:
    yi -=  hl_L if hl > hl_L else hl
    yi -=  li_L if li > li_L else li
    yi -=  mi_L if mi > mi_L else mi

if yi > 15:
    tax+=1.875+.3*(yi-15)
elif yi > 12.5:
    tax+=1.25+.25*(yi-12.5)
elif yi > 10:
    tax+=.75+.2*(yi-10)
elif yi > 7.5:
    tax+=.375+.15*(yi-7.5)
elif yi > 5:
    tax+=.125+.1*(yi-5)
elif yi > 2.5:
    tax+=.05*yi
    
print(f"Tax = {(tax*exp):.2f}")