#include<stdio.h>

int main()
{
    int n,S1,S2,S3;
    printf("Enter your 3 digit number on which you want operations (n) : \n");
    scanf("%d", &n);

    S1 = n*(n+1)/2;
    printf("Sum of all the natural nos. till n (S1) = %d \n", S1);

    S2 = n*(n+1)*(2*n+1)/6;
    printf("Sum of all the squares of natural nos. till n (S2) = %d\n",S2);

    S3 =  n/100 + (n%100)/10 + ((n%100)%10);
    printf("Sum of the digits (S3) = %d",S3);


    return 0;
}

