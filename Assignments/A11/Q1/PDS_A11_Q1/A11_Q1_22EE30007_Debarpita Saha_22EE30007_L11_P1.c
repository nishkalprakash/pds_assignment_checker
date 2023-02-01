/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 11
* Description : Program to find out the sum of harmonic series
*/
#include <stdio.h>


float harmonic_sum(int n)

{

    if (n == 1)

        return 1.0;

    else

        return (1.0 / n) + harmonic_sum(n - 1);

}


int main()

{

    int n;

    printf("Enter a positive integer: ");

    scanf("%d", &n);

    printf("Sum of harmonic series up to %d terms: %f\n", n, harmonic_sum(n));

    return 0;

}



