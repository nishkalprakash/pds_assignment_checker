from random import randint
i=r=int(input("Number of rounds: ").strip())

aw=fap=fbp=0

while i:
    i-=1
    an,bn=map(lambda x: str(randint(5,1000)),(0,0))
    ap,bp=map(len,(an,bn))
    if ap==bp:
        ap=sum(map(int,list(an)))
        bp=sum(map(int,list(bn)))
    fap+=ap
    fbp+=bp
    aw+=ap>bp
    print(f"Round-{r-i} -->\tA's number: {an}\t\tB's number: {bn}")
    print(f"\t\tA's point: {ap}\t\tB's point: {bp}")
    print(f"\t\tA's badge: {int(ap>bp)}\t\tB's badge: {int(ap<bp)}")
    print(f"\t\t-- {['A','B'][ap<bp]} wins Round {r-i} --")
    
ta=fap*aw
tb=fap*(r-aw)
print(f"Final Result => A's total score: {ta}, B's total score: {tb}")
print(f"\t\t--- {['A','B'][ta<tb]} wins the game ---")