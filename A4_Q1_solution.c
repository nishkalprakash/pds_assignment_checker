/*
1.	Write a program that takes a positive integer n and displays the first n terms of the following series: 1, -1, 2, -3, 5, -8, 13, -21, …

You need to handle cases when the user enters 0 or negative numbers by giving appropriate messages.
[25]
    Test cases:
#	INPUT	OUTPUT
1	3	1, -1, 2
2	0	N is invalid
3	10	1,-1,2,-3,5,-8,13,-21,34,-55
4	-2	N is invalid
*/

// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Taking input from the user

    if (n <= 0) // If the input is 0 or negative, then it is invalid
        return printf("N is invalid");

    int a = 0, b = 1, c; // a, b, c are the first three terms of the series
    printf("%d", b);
    for (int i = 1; i < n; i++) // Looping from 1 to n-1 (1st term is already printed)
    {
        c = a + b;
        a = b;
        b = c;
        (i % 2) ? printf(", %d", -c) : printf(", %d", c); // If i is odd, then print -c, else print c
    }

    return 0;
}