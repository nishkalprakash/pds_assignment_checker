/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int a,b,c,*x,*y,*z; //global variables

int asec(int *x,int *y,int *z) //function to print in ascending order
{
    int max,min,mid;
    int a=*x,b=*y,c=*z;
    if ((a>b) && (a>c))
    {
        max=a;
        if (b>c)
        {
            min=c;
            mid=b;
        }
        else
        {
            min=b;
            mid=c;
        }
    }
    else if ((b>a) && (b>c))
    {
        max=b;
        if (a>c)
        {
            min=c;
            mid=a;
        }
        else
        {
            min=a;
            mid=c;
        }
    }
    else
    {
        max=c;
        if (b>a)
        {
            min=a;
            mid=b;
        }
        else
        {
            min=b;
            mid=a;
        }
    }
    *x=min;
    *y=mid;
    *z=max;
}

int main()
{
    printf("Enter three integers : ");
    scanf("%d%d%d",&a,&b,&c);
    x=&a;                           //address of variable a
    y=&b;                           //address of variable b
    z=&c;                           //address of variable c
    printf("Before function call\n");
    printf("Address of a = %u\n",x);
    printf("Address of b = %u\n",y);
    printf("Address of c = %u\n",z);
    printf("Values in a,b,c = %d,%d,%d\n",*x,*y,*z);
    asec(x,y,z);
    printf("After function call\n");
    printf("Address of a = %u\n",x);
    printf("Address of b = %u\n",y);
    printf("Address of c = %u\n",z);
    printf("Values in a,b,c = %d,%d,%d\n",*x,*y,*z);
}
