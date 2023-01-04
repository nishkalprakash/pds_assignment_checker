/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 7
Description :A program to sort an existing sorted array when a new value is added in it.
*/



#include<stdio.h>

void bubbleSort(int arr[], int size);

     int main()
{
     int arr[6];
     printf("enter the five elements in a sorted manner : ");
     scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
     printf("enter the new number to be added in the sorted array : ");
     scanf("%d",&arr[5]);
     
     bubbleSort(arr,6);
     
}

         


      void bubbleSort(int arr[], int size)
       {
           for (int trial = 0; trial < size-1 ; trial++)
            { 
                for (int  j = 0; j < size-1-trial; j++)
                      if ( arr[ j ] > arr[ j +1] ) 
                     {      
                                int temp = arr[ j +1] ;
                                arr[ j +1] = arr[ j ] ;
                                arr[ j ] = temp ;
                     }
            }
          printf("Output Array : ");
          for(int c=0;c<size;c++){
              printf("%d ",arr[c]);    
          }
       } 





























