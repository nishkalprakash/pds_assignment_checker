#include<stdio.h>


int main()
{
 int b,sum;
 printf("read an integer");//enter the integer whose sum of the digits we want//
 scanf("%d", &b);
 while(b!=0)//using while loop//
 {
 sum = sum+( b % 10);
 b=b/10;
 }
 printf("sum of number is %d/b", sum);
 return 0;
 }

