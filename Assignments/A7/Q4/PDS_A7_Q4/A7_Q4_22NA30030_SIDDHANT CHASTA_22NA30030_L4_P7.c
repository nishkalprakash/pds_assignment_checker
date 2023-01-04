/*
Section 14
Roll No. : 22NA30030
Name : Siddhant Chasta
Assignment No. : 7
Description :A program to print the largest number on the appending of input numbers.
*/


#include<stdio.h>

void bubbleSort(int arr[], int size);
void printArr(int arr[],int size);

  int main()
{   
     int arr[10],size;
     printf("enter the size of the array : ");
     scanf("%d",&size);
     printArr(arr,size);
     bubbleSort(arr,size);
     
}


void printArr(int arr[],int size){
             for(int k=0;k<size;k++)
            {
                scanf("%d",&arr[k]);
            }
}

 void bubbleSort(int arr[], int size)
       {
           for (int trial = 0; trial < size-1 ; trial++)
            {
                for (int  j = 0; j < size-1-trial; j++)
                {
                      if ( arr[ j ] < arr[ j +1] )
                     {      
                                int temp = arr[ j +1] ;
                                arr[ j +1] = arr[ j ] ;
                                arr[ j ] = temp ;
                     }
                }
            }

          printf("Largest number on Appending of the input numbers: ");
          for(int c=0;c<size;c++)
     {
              printf("%d",arr[c]);    
          }
       }
   

    








