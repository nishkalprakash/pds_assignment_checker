// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to Recursively find

#include <stdio.h>

float harmonic(int n)       // Recursive function to calculate the sum of series
{
    if (n == 1) return (1);
    return (1.0 / n + harmonic(n - 1));
}

int main()
{
    int N;  // N = The number of terms of the series to add
    printf("Enter N: ");
    scanf("%d", &N);
    printf("%.3f\n", harmonic(N));
    return 0;
}