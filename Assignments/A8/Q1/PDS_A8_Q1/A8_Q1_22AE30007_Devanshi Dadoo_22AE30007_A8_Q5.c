/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 8
desciption: Taking the elements of a two-dimensional square array as input from user in row-major order, and printing the elements in column-major order.
*/

#include<stdio.h>

int main()
{
  int n ,a[100][100], count=0;
  printf("Number of elements in one row: "); //TAKING ELEMENTS AS INPUT 
  scanf("%d", &n);
  printf("Enter the elements: ");
  for(int i=0; i<n; i++)
   {
   for(int j=0; j<n; j++)
    {
     scanf("%d", &a[i][j]);
     count++;
    }
   }
 
 
  for(int j=0; j<n; j++)  //PRINTING THE ELEMENTS COLUMN WISE
  {
   for(int i=0; i<n; i++)
   { 
    printf("\n %d", a[i][j]);
   }
  }
 
}
  
