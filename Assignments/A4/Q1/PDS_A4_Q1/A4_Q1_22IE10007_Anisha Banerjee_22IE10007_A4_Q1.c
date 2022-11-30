
/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to display the factors
*/
#include <stdio.h>
int main()
   {
     long int n;int c=1;
     printf("Enter the number whose factors are to be displayed");
     scanf("%ld", &n);
     if (n==0)
        printf("0");
     else
      {
        if (n<0)
           n=0-n;
        while(c<=n)
           {
             if (n%c==0)
               printf("%d ",c);
               c=c+1;
            }
       }
     return 0;
      }
             
