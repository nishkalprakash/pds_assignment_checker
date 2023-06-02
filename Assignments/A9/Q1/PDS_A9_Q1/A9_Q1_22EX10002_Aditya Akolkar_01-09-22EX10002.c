#include<stdio.h>


int fibonacci(int n)
{
    int i;
    int a=0, b=1, sum;

    if(n==0 || n==1)
    {
        return 1;
    }
    else if(n>1)
    {
        while(1)
        {
            sum = a + b;
            a=b;
            b=sum;
            if(n == sum)
            {
                return 1;
            }
            if(n<sum)
            {
                break;
            }
        }
    }
    return 0;
}

void nearest(int n)
{
    int a=0, b=1, c, d;
    int sum;
    while(1)
    {
        sum = a + b;
        a=b;
        b=sum;
        if(sum<n)
        {
            c = sum;
        }
        if(sum > n)
        {
            d=sum;
            break;
        }
    }
    if(d-n <= n-c)
    {
        printf("Nearest fibonacci:%d", d);
    }
    else
    {
        printf("Nearest Fibonacci:%d", c);
    }
}

int main()
{
    int n;
    printf("Value of n: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Please give positive number");
    }

    else
    {
        if(fibonacci(n))
        {
            printf("%d is a fibonacci number", n);
        }
        else
        {
            nearest(n);
        }
    }
}

