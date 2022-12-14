/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Lab Test 1
Program to print perfect number.
*/
#include <stdio.h>
int isperfect(int p)  //Checking whether the entered number is perfect or not
   {
     int j,sum=0;
     for(j=1;j<p;j++)
        {
          if((p%j)==0)    //Checking whether divisor or not
            sum=sum+j;   //Calculating sum of divisors
        }
     if(sum==p)         //Comparing with input
       return 1;
     else
       return 0;
    }
int main()
   {
     int n,i;
     printf("Enter a number\n");
     scanf("%d", &n);
     if (n<2)
       printf("Invalid input\n");  //Printing invalid numbers
     else
       {
         for(i=2;i<=n;i++)
            {
              if(isperfect(i))  //Checking perfect numbers and printing them
                printf("%d ",i);
            }
       }
     return 0;
     }
     
