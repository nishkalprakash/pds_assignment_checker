/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 8
description:a program that will take the elements of a two-dimensional square array as input from user in row-major order, and print the elements in column-major order.
*/

#include<stdio.h>
int main()
{
 int A[100][100],num; //declaring an array
 int value =0;
 printf("number of elements in one row=");
 scanf("%d",&num);
 printf("enter the elements: ");
 //reading the array
 for(int i=0;i<num;i++){
  for(int j=0;j<num;j++){
   scanf("%d",&A[i][j]);
    value++;
  }
 }
 //printing the elements of the array
 printf("column major order:");
 for(int i=0;i<num;i++){
  for(int j=0;j<num;j++){
   printf(" %d",A[i][j]);
   }
  }
 
 
  return 0;
}


