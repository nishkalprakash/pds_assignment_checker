
/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to calculate sum of digits
*/
#include <stdio.h>
int main()
   { 
     long int n,n1;
     int m,sum=0;
     printf("Enter the number whose sum of the digits is to be calculated\n");
     scanf("%ld", &n);
     if (n<0)
       {
       n=0-n;
       while(n!=0)
         {
           m=n%10;
           sum=sum+m;
           n=n/10;
         }
       printf("-%d",sum);
      }
     else
      {
       while(n!=0)
         {
           m=n%10;
           sum=sum+m;
           n=n/10;
         }
       printf("%d",sum);
      }
     return 0;
}
     
