from time import strftime

def dprint(func):
    def wrapped_func(*args,**kwargs):
        return func(strftime("%H:%M:%S - "),*args,**kwargs)
    return wrapped_func
print=dprint(print)