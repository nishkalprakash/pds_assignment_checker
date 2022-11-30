def fact(n,x):
    if n%x:
        fact(n, x+1)
        return
    else:
        y=n//x
        print(x)
        if x >= y:
            return
        fact(n, x+1)
        print(y)
        return

