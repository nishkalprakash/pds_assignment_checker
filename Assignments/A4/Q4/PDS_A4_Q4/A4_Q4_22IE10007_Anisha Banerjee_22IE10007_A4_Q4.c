/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to print a pattern
*/
#include <stdio.h>
int main()
   {
    int row, col,ROWS;
    printf("Enter a number in the range[2-10]");
    scanf("%d",&ROWS);
      for (row=1; row<=ROWS; ++row)  
        {
          for (col=1; col<=row; ++col) 
            {
              if(col%2==0)
              printf("0 ");
              else
              printf("1 ");
            }
          printf("\n");
        }
     return 0;
   }
     
