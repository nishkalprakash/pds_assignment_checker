/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 9
Description : Fibonacci number calculation
*/

#include<stdio.h>

int isFibonacci(int n)
{
    int p_prev = 0,prev = 1, i = 0;
    if(n==0 || n==1) return n;
    while(i<n)
    {
        i = p_prev + prev;
        p_prev = prev;
        prev = i;
    }
    if(i==n) return i;
    else if(i>n)
    {
        int d1 = n - p_prev;
        int d2 = i - n;
        if(d1==d2) return p_prev;
        else
        {
            if(d1<d2) return p_prev;
            else return i;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("Value of n: %d\n",n);
    if(n<0)
       printf("Please give positive number\n");
    else if(isFibonacci(n) == n)
        printf("%d is a Fibonacci number\n",n);
    else
        printf("Nearest Fibonacci number: %d\n",isFibonacci(n));

    return 0;
}


