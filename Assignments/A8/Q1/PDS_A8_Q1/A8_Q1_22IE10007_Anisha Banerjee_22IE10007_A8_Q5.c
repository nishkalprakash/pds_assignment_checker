/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 8
Program to print in column major order
*/
#include<stdio.h>
int main()
   {
     int a[5][5];
     int i,j,n;
     printf("Enter number of elements in one row\n");
     scanf("%d",&n);
     printf("Enter the array elements\n");
     for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
             scanf("%d",&a[i][j]);
        }
     printf("Column major order: ");
     for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
             printf("%d ",a[j][i]);   // just reversing column and row for column major
        }
     return 0;
    }
     
