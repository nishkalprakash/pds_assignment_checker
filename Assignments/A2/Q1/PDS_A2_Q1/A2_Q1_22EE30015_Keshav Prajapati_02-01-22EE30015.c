#include<stdio.h>

int main()
{
    int num_of_terms, sum_AP, sum_SQ,n;

    // To take input for number of terms
    printf("Enter an integer from 100 to 999 : ");
    scanf("%d", &num_of_terms);
    n = num_of_terms;

    // To calculate sum of first n +ve integers
    sum_AP = n*(n+1)/2;
    printf("\nSum of first %d natural numbers are : %d \n", num_of_terms, sum_AP);

    // To calculate sum of square of n +ve integers
    sum_SQ = n*(n+1)*(2*n+1)/6;
    printf("\nSum of square of first %d natural numbers are : %d \n", num_of_terms, sum_SQ);


    // To calculate the sum of digits of given integer
    int a, b, c, d, sum_of_digits;
    // Below are the steps where i seperated the digits of a number
    a = n/100;
    b = n%100;
    c = b/10;
    d = b%10;
    sum_of_digits = a+c+d;
    printf("\nSum of digits of given integer is %d\n",sum_of_digits);

    return 0;
}
