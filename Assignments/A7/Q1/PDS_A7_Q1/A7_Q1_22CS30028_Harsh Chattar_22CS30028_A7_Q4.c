/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 7
Description : inserting a element in a sorted array such that it remains sorted.
*/

#include <stdio.h>

void bubbleSort(int arr[], int size)  //BubbleSort to sort the array after inserting given element at the end of the array
{
int temp;
	for (int trial = 0; trial < size-1 ; trial++)
	{ 
		for ( int j = 0; j < size-1-trial; j++)
			if ( arr[ j ] > arr[ j +1] ) /*  compare  the  two  neighbors  */
		{    
	   /*  swap  arr[j]  and  arr[j+1]*/
			temp = arr[ j +1];
			arr[ j +1] = arr[ j ];
			arr[ j ] = temp ;
		}
	}

printf("Output array : ");
for(int i=0;i<size;i++)  //Printing output array
{
	printf("%d ",arr[i]);
}
}

int main()
{
int n;
printf("Enter no. of elements :");
scanf("%d",&n);
int arr[n+1]; //declating array
printf("Enter array elements : ");
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
int m;
printf("Enter the no. to be inserted :");
scanf("%d",&m);
arr[n] = m;  //inserting the element at the end of the array
bubbleSort(arr,n+1);  //sorting and printing the final array

return 0;
}
