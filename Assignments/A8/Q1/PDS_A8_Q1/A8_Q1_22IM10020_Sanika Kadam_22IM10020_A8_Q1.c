//Assignment 8
//Section 14
//Name:Sanika Kadam
//Question 1


#include<stdio.h>
#define MAX_SIZE 100  //defining max size of array

int main()

{
  int mat[MAX_SIZE][MAX_SIZE];
  int i,j,order;
  
  //reading order of square matrix

  printf("Enter order of matrix:");
  scanf("%d",&order);

  //Reading elements of matrix

  printf("Enter entries of matrix:");
  for(i=0;i<order;i++)
  {
    for(j=0;j<order;j++)
    {
      scanf("%d",&mat[i][j]);
    }
  }

  //Printing elements in row major order

  printf("Elements in row major order: ");
  for(i=0;i<order;i++)
  {
    for(j=0;j<order;j++)
    {
      printf("%d ",mat[i][j]);
    }
  }

  //Starting new line

  printf("\n");

  //Printing elements in column major order
  
  printf("Elements in column major order: ");
  for(i=0;i<order;i++)
  {
    for(j=0;j<order;j++)
    {
      printf("%d ",mat[j][i]);
    }
  }

  printf("\n");

  return 0;
}




