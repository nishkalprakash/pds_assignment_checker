#include<stdio.h>
int main()
{
    int n,j,a,c,b,x;
    printf("enter a pair in range (-999,999)");
    scanf("%d,%d",&n,&j);
    a=n%10;
    n=n/10;
    b=n%10;
    if(n<10)
        x=a*10+b;
    else{
        n=n/10;
        c=n%10;
        x=a*100+b*10+c;
    }
    if(x==j)
            printf("the number pair is perfect pair");
    else
        printf("wrong input");


}