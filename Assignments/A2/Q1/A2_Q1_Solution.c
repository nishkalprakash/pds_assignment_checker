// C Program to compute S1,S2,S3 where S1 is the sum of first n natural numbers, S2 is the sum of squares of first n natural numbers, S3 is the sum of digits of n
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
int main()
{
    int n;       // n is a three digit number
    int S1 = 0;  // S1 is the sum of first n natural numbers
    long S2 = 0; // S2 is the sum of squares of first n natural numbers
    int S3 = 0;  // S3 is the sum of digits of n
    printf("Enter the value of n: ");
    scanf("%d", &n);                       // Input n
    S1 = (n * (n + 1)) / 2;                // Cumputing S1
    S2 = (n * (n + 1) * (2 * n + 1)) / 6;  // Computing S2
    S3 = n % 10 + (n / 10) % 10 + n / 100; // Computing S3
    printf("S1 = %d\n", S1);               // Printing S1
    printf("S2 = %ld\n", S2);              // Printing S2
    printf("S3 = %d\n", S3);               // Printing S3
    return 0;
}
