#include<stdio.h>

void main(){
    int n;
    int S1;
    long int S2;
    int S3;

    printf("Enter a number: ");
    scanf("%d",&n);     //getting input from user.

    S1=(n*(n+1))/2;     //calculating S1.

    S2=(n*(n+1)*((2*n)+1))/6;   //calculating S2

    int first,second,third;     //this method below will only work for 3 digit number and in the question the number to be input is also a 3 digit number.
    third=n%10;     //Calculating last digit of number
    n=n/10;
    second=n%10;    //Calculating second digit of number
    n=n/10;
    first=n;        //Calculating first digit of number

    S3=first+second+third;  //calculating S3.

    printf("S1 = %d",S1);
    printf("\nS2 = %ld",S2);
    printf("\nS3 = %d",S3);

}
