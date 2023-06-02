#include <stdio.h>

int main()
{
    int a=0,b=1,temp,n;
    printf("Value of n : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please give positive number.");
    }
    else
    {
        while(b<=n)
        {
            temp=a+b;
            a=b;
            b=temp;
        }
        if(a==n)
        {
            printf("%d is a Fibonacci Number.",a);
        }
        else
        {
            if ((n-a)<=(b-n))
            {
                printf("Nearest Fibonacci Number : %d.",a);
            }
            else printf("Nearest Fibonacci Number : %d.",b);
        }
    }

    return 0;


}
