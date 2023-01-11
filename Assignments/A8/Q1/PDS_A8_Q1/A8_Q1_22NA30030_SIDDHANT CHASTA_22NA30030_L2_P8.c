/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 8
Description :A program to print the elements in column-major order taken from row-major order.
*/

#include<stdio.h>

int main()
{
    int n; // n is number of elements in one row 
    printf("Enter the number of elements in one row: ");// in square array elements of row=column
    scanf("%d",&n);
    int row[n][n];
    int j=0;
    printf("Input-major order  : ");
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
    {
        scanf("%d",&row[i][j]);
    }
    printf("Output-major order : ");
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
      {
        printf("%d ",row[j][i]);
      }
    }
       return 0;
}

           
         
