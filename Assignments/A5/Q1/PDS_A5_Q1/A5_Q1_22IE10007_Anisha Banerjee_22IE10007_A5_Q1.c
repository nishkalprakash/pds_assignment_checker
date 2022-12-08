/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to calculate sum of series
*/
#include <stdio.h>
int power(int x,int n)
  {
    int i,prod=1;
    for(i=1;i<=n;i++)
         prod=prod*x;
    return prod;
  }
int fact(int n)
   {
     int i=1,prod =1;
     for(i=1;i<=n;i++)
        prod=prod*i;
     return prod;
    }
int main()
   {
     int x,n,i;
     float sum=1.0;
     printf("Enter the value of x and n\n");
     scanf("%d %d", &x, &n);
     if (n==1)
       printf("%f\n",sum);
     else
       {
         for(i=1;i<n;i++)
              sum=sum+(1.0*power(x,i))/(fact(i)*1.0);
         printf("%f\n",sum);
       }
     return 0;
   }
       
