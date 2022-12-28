/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 6
Program to print terms of ar recursion
*/
#include <stdio.h>
int print_term(int t)
    {
      int m;
      if(t==0)
          return 0;
      else if(t==1)
          return 1;
      else if(t==2)
          return 2;
      else
        {
         m=3*print_term(t-1)*print_term(t-2)-2*print_term(t-2)*print_term(t-3)+1;
         return m;
        }
      }
         
int main()
   {
     int k,i,p;
     printf("Enter the number of terms\n");
     scanf("%d",&k);
     if(k<=0)
       printf("Invalid Input\n");
     else
      {
        for(i=0;i<(k-1);i++)
           {
           p = print_term(i);
           printf("%d,",p);
            }
       p=print_term(k-1);
       printf("%d",p);
      }
    return 0;
   }
