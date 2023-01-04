#include<stdio.h>
#include<math.h>
void bubbleSort(int arr[], int size)
{int sorted=0 ; //swapOccured=1
for (trial = 0; trial < size-1 && !sorted  /*swapOccured*/ ; trial++)
{   
 sorted=1;  //swapOccured=0for ( j = 0; j < size-1-trial; j++)
if ( arr[ j ] > arr[ j +1] )

 /*  compare  the  two  neighbors  */
{                                                        /*  swap  arr[j]  and  arr[j+1]temp = arr[ j +1] ;
arr[ j +1] = arr[ j ] ;
arr[ j ] = temp ;
sorted=0;  //swapOccured=1
}
}
}
