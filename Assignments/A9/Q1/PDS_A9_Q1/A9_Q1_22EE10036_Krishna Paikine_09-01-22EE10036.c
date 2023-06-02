
/*
Fibonacci Number calculation
Name - Krishna Paikine
Roll no - 22EE10036
Problem no - 1
*/
#include <stdio.h>
//Loop for giving fibonacci sequence
int fibonacci(int n)
{
    if (n < 2)
    {
        return(n);
    }
    else
    {
       return(fibonacci(n - 1) + fibonacci(n - 2));
    }
}
//For checking if the number is a fibonacci number
int fibonacci_checker(int n)
{
    int i;
    while(1) //For running the loop infinitely and checking if given number n is included in fibonacci sequence or not
    {
        if(n == fibonacci(i))
        {
             printf("The number %d is a fibonacci number\n", n);
             return n;
        }
        else if(fibonacci(i-1)< n && n < fibonacci(i) && (fibonacci(i)-n) > (n-fibonacci(i-1)))
        {
             printf("Nearest fibonacci number: %d\n", fibonacci(i-1));
        }
        else if(fibonacci(i-1)< n && fibonacci(i)>n && (fibonacci(i)-n) < (n-fibonacci(i-1)))
        {
             printf("Nearest fibonacci number: %d\n", fibonacci(i));
        }
        else if(fibonacci(i-1)< n && fibonacci(i)>n && (fibonacci(i)-n) == (n-fibonacci(i-1)))
        {
             printf("Nearest fibonacci number: %d\n", fibonacci(i-1));
        }
        i++;

    }
}
int main()
{
    int n, result;
    printf("Enter the number for which you want to fibonacci\n");
    scanf("%d", &n); //Enter the number for checking
    if(n < 0)
    {
        printf("Please give a positive number\n");
    }
    else
    {
        result = fibonacci_checker(n);
        printf("%d\n", result);
    }
    return 0;
}
