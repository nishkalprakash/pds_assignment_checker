/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Lab Test 1
Program to print pattern.
*/
#include <stdio.h>
int main()
   {
     int n,i,j,p=1;
     printf("Enter a number in the range [2,10]\n");  //Enter a number
     scanf("%d", &n);
     for(i=1;i<=n;i++)                               //Counts the number of rows
        {
          for(j=i;j>=1;j--)                         //Counts the number of columns
             {
               printf("%d ",p);                     //Print the numbers in each row and column
               p=p+1;                               //Updates the number to be printed
             }
          printf("\n");                            //Changes line
        }
      return 0;
    }

