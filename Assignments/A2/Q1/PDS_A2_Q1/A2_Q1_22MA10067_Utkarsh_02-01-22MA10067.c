#include <stdio.h>
#include <math.h>

int main()
{
    int n, S1, S3;
    long S2;
    scanf("%d", &n);   //reading a variable n from the user
    S1= (n*(n+1))/2 ; //for the sum of 1st n numbers
    S2= (n*(2*n+1)*(n+1))/6; //for the sum of first n squared numbers
    S3= n%10 + (n%100)/10 + (n%1000)/100 ; //since we were asked to assume three digit positive integer values, thats why i found the digits on three places separately and added
    printf("The value of S1: %d\n", S1);
    printf("The value of S2: %d\n", S2);
    printf("The value of S3: %d\n", S3);
    return 0;

}
