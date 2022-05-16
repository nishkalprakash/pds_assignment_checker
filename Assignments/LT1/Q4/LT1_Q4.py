x=list(map(float,input("x-coordinates: ").strip().split()))
y=list(map(float,input("t-coordinates: ").strip().split()))
x_,y_=map(lambda _: sum(_)/len(_),(x,y))
m=sum(map(lambda _,__:(_ - x_)*(__ - y_),x,y)) / sum(map(lambda _:(_ - x_)**2,x))
b=y_-m*x_
y=f"{m:.2f}x + {b:.2f}"
print(f"{m=:.2f}, {b=:.2f}, Line equation {y=}")