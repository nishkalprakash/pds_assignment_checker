/*
Section 14
Roll No:22MI10013
Name:Animesh Mishra
Test No:2
description :2d array
*/

#include<stdio.h>
#include<stdlib.h>
void mat(int m,int n)
{
     printf("enter the value of m");
     scanf("%d" , &m);

     printf("enter the value of n");
     scanf("%d" , &n);
}
int main() {
   int row;
   int col;
   printf("enter the number of rows");
   scanf("%d" , &row);
   printf("enter the number of col");
   scanf("%d" , &col);
   int*a = (int *)malloc(row * col * sizeof(int));
   
   int i,j;
   for(i = 0;i<row;i++)
     for(j=0;j<col;j++)
       *(a + i*col + j) = i + j;
  
   printf("the array elements are:\n");
    for(i = 0;i<row;i++) {
      for(j = 0;j<col; j++) {
         printf("%d", *(a + i*col + j));
   }
      printf("\n");
   }
     free(a);
     return 0;
}

