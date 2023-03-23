#include<stdio.h>
int main()
{

    int n, S1,S3,a,b,c,d;/*Declare variables*/
    long int S2;/*Declare long variable*/
    printf("Enter the value of integer:");/*Request user for input value*/
    scanf("%d", &n);/*Input value*/
    S1 = (n*(n+1))/2;/*assign value to S1*/
    printf("S1 = %d", S1);/*Display S1*/
    S2 = (n*(n+1)*(2*n+1))/6;/*Assign value to S2*/
    printf("\nS2 = %ld", S2);/*Display S2*/
    a = n/100;/*if n = acd = 100a +10c+d, integer division of n gives a*/
    b = n/10;/*b = 10a + c*/
    c = b - (10*a);/*gives the value of the middle digit*/
    d = n - (10*b);/*gives the value of the last digit*/
    S3 = a+c+d;/*S3 is the sum of the digits*/
    printf("\nS3 = %d", S3);/*display S3*/
    return 0;
}
