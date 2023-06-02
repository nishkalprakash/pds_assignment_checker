/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 9
* Description : fibonacci series.
*question : 1
*/
#include<stdio.h>
int fibonacci (long long int n)
{
    if(n<=1)
    {
        return n;
    }
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    long long int n,i;
    printf("enter a positive number : ");
    scanf("%lld" , &n);
    if(n<=0)
    {
        printf("enter a positive number : ");
        scanf("%lld" , &n);

    }
    for(i=0;i<40;i++)
    {
        if(n==fibonacci(i))
        {
            printf("%lld is a fibonacci number" , fibonacci(i));
            break;
        }
        else
        {
            if((n>fibonacci(i))&&(n<fibonacci(i+1)))
            {
                if((n-fibonacci(i))>(fibonacci(i+1)-n))
                {
                    printf("%lld is the nearest integer" , fibonacci(i+1));
                }
                else
                {
                    printf("%lld is the nearest integer" , fibonacci(i));
                }
            }
        }
    }
    return 0;
}
