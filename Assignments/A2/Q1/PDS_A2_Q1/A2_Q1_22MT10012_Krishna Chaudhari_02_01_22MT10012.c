#include<stdio.h>
int main()
{
    int n;
    printf("enter 3 digit number : \n");
    scanf("%d",&n);    //this take integer input from user
    printf("S1 = %d \n",n*(n+1)/2);   //this add all natural numbers till the number entered by user
    printf("S2 = %d \n",(n)*(n+1)*(2*n+1)/6);    // this print the square of all natural numbers upto number entered by user
    printf("S3 = %d ",(n/100)+(n%10)+(n/10)%10);    // n/100 gives 1st digit of number n%10 gives reminder of number when divided by 10 that is it is last digit of number and (n/10)%10 gives 2nd digit of number
    return 0;

}
