#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,x5;
    printf("enter any five digit no.:");
    scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
    int a,b,c,d,e;
    a=x1%2;
    b=x2%2;
    c=x3%2;
    d=x4%2;
    e=x5%2;
    int sum=a+b+c+d+e;
    if (sum>=3) {
        if (a==1 && b==1 && c==1 && d==1 && e==1){
            printf("all numbers are odd %d %d %d %d %d",x1,x2,x3,x4,x5);
        }
        else if((a==1 && b==1 && c==1) || (b==1 && c==1 && d==1) || (c==1 && d==1 && e==1 ) || (d==1 && e==1 && a==1) || (b==1 && a==1 && d==1) )
            printf("exactly 3 numbers are odd");
        else if((a==1 && b==1 && c==1 && d==1)|| (b==1 && c==1 && d==1 && e==1)|| (c==1 && d==1 && e==1 && a==1))
            printf("exactly 4 numbers are odd");
    }
    else printf("all numbers are even");

    return 0;
}
