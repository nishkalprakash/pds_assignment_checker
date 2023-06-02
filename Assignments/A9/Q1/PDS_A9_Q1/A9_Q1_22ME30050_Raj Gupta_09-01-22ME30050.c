#include <stdio.h>
#include <string.h>
#include <math.h>

int fib(int x)
{
     int a=0,b=1,z=0;
    for (int i=3;i<=x;i++)
    {
        z=a+b;
        a=b;
        b=z;
    }
    return z;
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("value of n: %d",n);

    while(n<0)
    {
        printf("Please give positive number\n");
        scanf("%d",&n);
    }

    int l=0;
    for (int i=1;i<(n+10);i++)
    {

        if (n==fib(i))
        {
            l=1;
            break;
        }
        if (fib(i)>n)
        {
            break;
        }
        if(i==n+10)
        {
            break;
        }
    }

    if (l==1)
    {
        printf("\n%d is a fibonacci number",n);
    }
else
    {
    int max=0,min;
    for(int i=1;i<n+10;i++)
    {
        if (n>fib(i))
        {
            if (fib(i)>max)
            {
                max=fib(i);
            }
        }
        if (n<fib(i))
        {
            min=fib(i);
            break;
        }

    }
    int q=n-max;
    int p=min-n;

    if (p<q)
    {
        printf("\nnearest fibonacci number : %d",min);
    }
    else {printf("\nnearest fibonacci number : %d",max);}

    }

    return 0;
}
