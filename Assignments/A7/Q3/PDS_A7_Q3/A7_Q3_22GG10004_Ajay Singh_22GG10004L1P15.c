#include<stdio.h>
#include<math.h>
voidinserstionSort(intarr[ ], int size)
{inti, j;for(inttrial =1;trial <size;trial++)
{intcardValue=arr[trial];
for(j=trial -1;j>=0 && arr[ j]>cardValue;j--)
arr[ j+1]=arr[ j];
arr[ j+1]=cardValue;
}
}
