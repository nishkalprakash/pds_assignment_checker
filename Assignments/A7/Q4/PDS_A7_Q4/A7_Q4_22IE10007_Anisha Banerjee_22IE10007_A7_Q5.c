/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 7
Program to print the largest number
*/
#include<stdio.h>


int main()
   {
    int size,i,j,trial,temp,c;
    int arr[10];
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
       scanf("%d",&arr[i]);
    for (trial = 0; trial < size-1 ; trial++)  //Bubble sort
      {
        for ( j = 0; j < size-1- trial; j++)
         if ( arr[ j ] < arr[ j +1] )
           {
             temp = arr[ j +1] ;
             arr[ j +1] = arr[ j ] ;
             arr[ j ] = temp ;
           }
       }
   c=0;
   while(arr[c]<10)
       c++;
   
   for(j=0;j<c;j++)
      printf("%d",arr[j]);
   for(j=c;j<size;j++)
      printf("%d",arr[j]);
   return 0;
  }
         
