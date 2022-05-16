fn="{}**3 - 25"
dfn="3*{}**2"
x0,ep,mi=map(float,input("Enter X_0, Eplsilon, MaxIteration: ").strip().split())
err=99999

p="{:^10}\t{:^10}\t{:^10}\t{:^10}"
print(p.format('Iteration','X_0','X_1','Error'))
i=0
while err > ep and i < mi:
    x1=round(x0-eval(fn.format(x0))/eval(dfn.format(x0)),6)
    err=round(abs(x1-x0),6)
    i+=1
    print(p.format(i,x0,x1,err))
    x0=x1

print("The Square root is ",x1)