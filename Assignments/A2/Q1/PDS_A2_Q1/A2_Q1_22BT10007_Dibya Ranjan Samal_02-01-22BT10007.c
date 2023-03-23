#include<stdio.h>
int main(){
int n,S1,S3,a,b,c;
long S2;
printf("enter the the value of n: ");
scanf("%d",&n);
S1=n*(n+1)/2; //formula to find sum of n integers
S2=n*(n+1)*(2*n+1)/6; // formula to find sum of squares of n integers
a=n%10; // last digit of the num
n=n/10;
b=n%10; // middle digit
n=n/10;
c=n%10; //first digit
S3=a+b+c;
printf("sum of series S1 = %d \n" , S1);
printf("sum of series S2 = %d \n" , S2);
printf("sum of digits S3 = %d \n" , S3);


return 0;}
