#include<stdio,h>
#include<math.h>
voidselectionSort(intarr[ ], int size)
{for(intstart =0;start <size -1;start++)
{intminIndex=start;//indexofminvalue
for(intj=start +1;j<size;j++)
if(arr[j]<arr[minIndex] )
minIndex=j;inttemp=arr[minIndex];
arr[minIndex]=arr[start];
arr[start]=temp;
}
}
