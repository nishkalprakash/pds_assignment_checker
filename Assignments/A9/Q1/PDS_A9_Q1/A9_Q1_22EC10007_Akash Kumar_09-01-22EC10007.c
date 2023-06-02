/*
* Name: Akash Kumar
* Roll no.: 22EC10007
* Section : 2
* Assignment : 9
* Question: 1
* Description:
*/


#include <stdio.h>

int main()
{
    long long int n = 1;

    printf("Enter the number to be checked\n");
    scanf("%lld", &n);

    while (n<0)
    {
        printf("Please give positive number\n");
        printf("Enter the number to be checked\n");

        scanf("%lld", &n);
    }



    long long int fib[100];
    int i = 2;
    fib[0] = 0;
    fib[1] = 1;
    while (i<100)
    {
        fib[i] = fib[i-1] + fib[i-2];
        i++;
    }

    i = 0;
    while (n >= fib[i])
    {
        if (n == fib[i])
        {
            printf("%lld is a Fibonacci number\n", n);
            break;
        }
        else
        {
            i++;
        }
    }

    if ( n != fib[i])
    {
        printf("Nearest Fibonacci number: %lld", fib[i-1]);
    }


    return 0;
}
