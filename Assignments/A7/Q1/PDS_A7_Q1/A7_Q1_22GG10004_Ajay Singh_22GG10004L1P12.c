#include<stdio.h>
#include<math.h>

void bubbleSort(int arr[], int size)
{
for (trial = 0; trial < size-1 ; trial++)
{
 for ( j = 0; j < size-1-trial; j++)
if ( arr[ j ] > arr[ j +1] )
 /*  compare  the  two  neighbors  */
{       /*  swap  arr[j]  and  arr[j+1]temp = arr[ j +1] ;
arr[ j +1] = arr[ j ] ;
arr[ j ] = temp ;
}
}
}
