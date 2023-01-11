/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 8
description:checking the saddle points
*/

#include<stdio.h>

 int main()
 {
  //declaring thr array and the variables
  int arr[100][100],row,col;
  int value[100],max,min;
  printf("shape of the 2-D array:");
  scanf("%d",&row);
  scanf("%d",&col);
  //reading the array
  for(int i=0;i<row;i++)
 {
   for(int j=1;j<col;j++) 
   {
    scanf("%d",&arr[i][j]);
   }
  }
  
  for(int i=0;i<row;i++)
 {
   if(arr[i][j]>=max)
  {
     max=arr[i][0];
     if(arr[i][j]<min)
      {
       min=arr[i][j];
      }
    }
     value[i]=min;
   }
  
   for(int i=0;i<row;i++){
    printf("the saddle point is %d",value[i]);
   }

   return 0;
 }
