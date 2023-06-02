/*
Fibonacci number calculation

Following is an infinte series of Fibonacci sequence:

0	1	1	2	3	5	8	13	21	34	… … …

Note that sum of two consecutive numbers yields the next number in the sequence. Such numbers are called Fibonacci numbers.

Write a program which will do the following.
Read any (positive) integer from the keyboard. If user types a negative number, your program will prompt accordingly.

Check if the input number is a Fibonacci number.

If it is NOT a Fibonacci number, then print the nearest Fibonacci number to it. For example, if the input number is 23, then your program should print 21.
[Note: If there is an equal difference between two fibonacci numbers then return the smallest one. For example, if n = 4 then program should give output as 3]


[5 +  10 + 15 = 30]

Test cases:
#
INPUT
OUTPUT
1
23
Value of n: 23
Nearest fibonacci number: 21
2
4
Value of n: 4
Nearest fibonacci number: 3
3
-8
Value of n: -8
Please give positive number
4
89
Value of n: 89
Nearest fibonacci number: 89

*/
// Code creator: Yaman Kumar Sahu (yaman.sahu7620@gmail.com) and Nishkal Prakash (nishkal@iitkgp.ac.in)
#include <stdio.h>
#include <math.h>

// function that gives the nearest fibonacci number
int giveFibonacciNumber(int n)
{
    int a = 0, b = 1, c = 1;

    while (c < n)
    {
        c = b + a;
        a = b;
        b = c;

        if (c == n)
            return n;
    }
    if (abs(c - n) < abs(n - a))
        return c;
    return a;
}

int main()
{

    int n,fib;
    scanf("%d", &n);
    printf("Value of n: %d\n", n);

    if (n < 0)
        printf("Please give positive number\n");
    else
    {
        fib = giveFibonacciNumber(n);
        if (fib == n)
            printf("%d is a fibonacci number\n", fib);
        else
            printf("Nearest fibonacci number: %d", fib);
    }
    return 0;
}
