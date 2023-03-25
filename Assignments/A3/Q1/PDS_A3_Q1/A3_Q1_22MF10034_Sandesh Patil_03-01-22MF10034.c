#include<stdio.h>
int main()
{
     int a,b,c,d,e,s;
     printf("enter the value of integers a,b,c \n");
     scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
       s=(a%2 + b%2 + c%2 + d%2 + e%2);
     if (s==3)
{
    printf("there are 3 odd numbers");
}
    if (s==2)
{    printf("there are 3 even numbers");
}
if(a%2!=0 && b%2!=0 && c%2!=0 && d%2=0 && e%2=0)
{
    if (a>b && b>c && a>c)

    {
        printf("a b c");
    }

if (a>c && c>b && a>b)

    {
        printf(" a c b");
    }

    if (b>a && a>c && b>c)

    {
        printf("b a c");
    }

     if (b>c && c>a && b>a)

    {
        printf( "b c a");
    }

    if (c>b && b>a && c>a)

    {
        printf("c b a");
    }

    if (c>a && a>c && c>b)

    {
        printf("b c a");
    }



}


return 0;



}