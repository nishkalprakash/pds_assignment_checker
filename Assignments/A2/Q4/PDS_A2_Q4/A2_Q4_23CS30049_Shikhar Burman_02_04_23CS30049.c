//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int m, n;

    // Inputs two integers from user
    printf("Enter two integers(keep a space between them): ");
    scanf("%d %d", &m, &n);

    // Calculating and displaying outputs
    printf("The sum is %d\n", (m+n));
    printf("The difference is %d\n", (m-n));
    printf("The product is %d\n", (m*n));
    printf("The integer quotient is %d\n", (m/n));
    printf("The integer remainder is %d\n", (m%n));
    printf("The floating point quotient is %f\n", ((float)m/(float)n));
    printf("The sum of the squares is %d\n", (m*m+n*n));
    printf("The square of the sum is %d\n", ((m+n)*(m+n)));
    printf("The average is %f\n", ((float)(m+n)/2));
    printf("The average of the sum of the squares is %f\n", (((float)(m*m+n*n))/2));
    
}