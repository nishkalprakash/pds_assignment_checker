/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows
Date : 09/06/2022 */

#include<stdio.h>
#include<stdlib.h>
#define ROW m
#define COL n
#define MAX 10

int main()// main function
{
    int count,m,n, a[MAX][MAX];// declaring variables
    printf(" Enter the number of rows and coloums respectively: ");
    scanf("%d%d",&m,&n);// reading the value of row and coloumn
    int **arr= (int**)malloc(ROW*sizeof(int*));// dynamic memory allocation of 2D array
    for (int i=0;i<m;i++)
        arr[i]=(int*)malloc(COL*sizeof(int));
        printf(" Enter the values of matrix: \n");
    for (int i=0;i<m;i++)// reading the values of matrix
        for (int j=0;j<n;j++)scanf("%d", &a[i][j]);

        if (saddlept(a,n) == -1)// function calling
            printf("Saddle point does not exist ");

            return 0;



}
 void saddlept(int a[MAX][MAX], int n)// void function for finding the saddle point
 {
     for (int i =0;i<n;i++)
     {
         int minrow = a[i][0]; int col_i = 0;// initial condition
         for(int j=0;j<n;j++)
         {
             if( minrow> a[i][j])
             {
                 minrow= a[i][j];
                 col_i= j;

             }
         }
         int index;
         for ( index= 0;index<n;index++)
            if(minrow<a[index][col_i])
            break;

         if (index == n)
         {
             printf("Saddle value is %d",minrow);
             return 1;// if there is a value it return 1
         }
     }
     return -1;// if not returns -1
 }
