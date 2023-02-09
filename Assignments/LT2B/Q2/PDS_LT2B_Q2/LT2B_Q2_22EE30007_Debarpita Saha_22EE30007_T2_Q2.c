/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Test set: B
* Question 1
* Description : to create 2D array dynamically and use recursive function
*/
#include<stdio.h>
#include<stdlib.h>
int m, n, i=0, j=0, z;
int arr[100][100];
int main()
{
  scanf("%d", &m);
  printf("Enter M: %d", m);
 scanf("%d", &n);
  printf("Enter N: %d", n);
  z= m*n;
 printf("Enter %d elements: ", z);
  for(i=0; i<m; i++)
  { 
    for(j=0; j<n; j++)
    {
      arr[][]= (int*)malloc(sizeof(int));
      scanf("%d",&arr[i][j]);
    }
   
  }
 
  displayArray(arr[]);
  return 0;
}

int displayArray(int arr[i][j])
{
  if(i>m, j>n)
    return NULL;
  else
    printf(displayArray(arr[i+1][j+1]));
}

