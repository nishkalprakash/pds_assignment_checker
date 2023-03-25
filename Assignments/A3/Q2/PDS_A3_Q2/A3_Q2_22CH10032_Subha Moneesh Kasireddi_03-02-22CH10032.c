#include<stdio.h>

int main()
{
    int a,b,x,y,z,c;
    scanf("%d %d",&a,&b);
    if (((a>=-999)&&(a<=999))&&((b>=-999)&&(b<=999)))
    {
    //let xyz be a three digit number a; if x=0 two digit; if x and y are 0, then it's a one digit number
    x=a/100;
    y=(a/10)-10*x;
    z=a-100*x-10*y;
    if(x!=0)
    c=z*100+y*10+x;
    else if (y!=0)
    c=z*10+y;
    else
        c=z;

    if(c==b)
    {
        printf("Perfect Pair");
    }
    else if (c==(-b))
    {
        printf("Not a Perfect Pair");
    }
    else
        printf("Wrong Input");
    return 0;
    }
    else
        printf("The entered value is out of specified range");
}
