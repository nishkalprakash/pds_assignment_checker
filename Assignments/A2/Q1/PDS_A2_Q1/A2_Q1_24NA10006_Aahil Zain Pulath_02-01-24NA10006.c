//lab 2 assingment 1
#include<stdio.h>
int main()
{
 int a,sum,sumsq,sum3;
 printf("enter a three digit number:");
 scanf("%d",&a);
 sum=(a*(a+1))/2;
 //for sum of n numbers
 sumsq=(a*(a+1)*((2*a)+1))/6;
 //for sum of squares of n numbers
 sum3=(a/100)+(a%10)+(a%100-a%10)/10;
 printf("s1= %d and s2= %d and s3=%d",sum,sumsq,sum3);
 }
