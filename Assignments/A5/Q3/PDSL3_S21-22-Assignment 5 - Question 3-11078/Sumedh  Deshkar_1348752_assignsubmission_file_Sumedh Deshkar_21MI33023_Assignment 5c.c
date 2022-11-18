/*
Name - Sumedh Deshkar
Roll no. - 21MI33023
Sec - 3
Assignment 5c
*/

#include<stdio.h>

void saddle(int *arr,int row,int col)
{
  int i,j;
  int p,l,m,f=1;

  for (i = 0; i < row; i++)
{
p = 0;

m = *(arr + i*col + 0);
for (j = 0; j < col; j++)
{
if (m > *(arr + i*col + j))
{
m =*(arr + i*col + j);
p = j;
}
}
l = 0;

for ( j = 0; j <col ; j++)
{
if (l <  *(arr + j*col + p) )
{
l = *(arr + j*col + p);
}
}
if ( m == l)
{
printf("\n The Saddle Point for the given Matrix is :%d\n", m);
f = 0;
}
}
if (f > 0)
printf( "\nNo Saddle Point ");
return 0;

}


int main()
{
    int array[100][100];
     int row , col;


     printf("Enter the number of rows : ");
     scanf("%d",&row);
     printf("Enter the number of columns : ");
     scanf("%d",&col);


   int *arr = (int *)malloc(row * col * sizeof(int));
   int i, j;
   printf("Enter the elements of the matrix : \n");
   for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
         scanf("%d",arr + i*col + j);
         //*(arr + i*col + j) = i + j;
   printf("The matrix elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", *(arr + i*col + j));
      }
      printf("\n");
   }

      saddle(arr,row,col);
   return 0;
}
