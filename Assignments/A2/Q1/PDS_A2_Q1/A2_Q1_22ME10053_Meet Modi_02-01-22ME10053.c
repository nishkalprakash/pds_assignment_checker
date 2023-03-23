// Program to calculate the sum of numbers , squares of numbers , sum of digits
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of integer :\n"); // Asking user to input an integer
    scanf("%d",&n);
    int S1 = (n*(n+1))/2;
    printf("S1: %d \n",S1);                   //  Sum of n natural numbers
    long int S2 = (n*(n+1)*(2*n+1))/6;
    printf("S2 :%d \n",S2);                   // Sum of squares of n natural numbers
    int units = n % 10;
    n = n/10;
    int tens = n % 10;
    n = n / 10;
    int hund = n % 10;
    printf("S3 : %d \n",units + tens + hund); // Sum of digits of a number
    return 0;
}
