#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter 5 numbers \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    c = a%2+b%2+c%2+d%2+e%2;
    if(c==3)//condition for three odds
    {
        int sum = 0;
        int max = 0,min;
        if(a%2==1)
            sum = sum+a;min = a;
        if(b%2==1)
            sum = sum+b;min = b;
        if(c%2==1)
            sum = sum+c;min = c;
        if(d%2==1)
            sum = sum+d;
        if(e%2==1)
            sum = sum+e;
        if(a%2==1&&a>max)
            max = a;
        if(b%2==1&&b>max)
            max = b;
        if(c%2==1&&c>max)
            max = c;
        if(d%2==1&&d>max)
            max = d;
        if(e%2==1&&e>max)
            max = e;
        if(a%2==1&&a<min)
            min = a;
        if(b%2==1&&b<min)
            min = b;
        if(c%2==1&&c<min)
            min = c;
        if(d%2==1&&d<min)
            min = d;
        if(e%2==1&&e<min)
            min = e;
        sum = sum-max-min;
        printf("Smallest three odd numbers : %d %d %d",min,sum,max);
    }
    else if(c==2)//condition for three even
    {
        int max = a;
        if(b>max)
            max = b;
        if(c>max)
            max = c;
        if(d>max)
            max = d;
        if(e>max)
            max = e;
        printf("Largest number : %d",max);
    }
    else
        return 0;
}
