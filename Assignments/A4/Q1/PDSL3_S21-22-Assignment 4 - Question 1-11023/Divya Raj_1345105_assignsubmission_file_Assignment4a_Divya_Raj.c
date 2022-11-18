/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Codeblock
*/


#include <stdio.h>
#include <stdlib.h>

/* arr[] ---> Input Array
temp[] ---> Temporary array to store indices of
				current combination
start & end ---> Starting and Ending indexes in arr[]
l ---> Size of a combination to be printed */
void CombinationPossible(int temp[], int arr[],
					int index, int l, int start, int end)
{
	// Since index has become l, current combination is
	// ready to be printed
	if (index == l)
	{
		for (int i = 0; i < l; i++)
			printf("%d ", arr[temp[i]]);
		printf("\n");
		return;
	}

	
	for (int i = start; i <= end; i++)
	{
		temp[index] = i;
		CombinationPossible(temp, arr, index + 1, l, i, end);

		// Removing all duplicates
        while (arr[i] == arr[i+1])
            i++;
	}
	return;
}

void Combination(int arr[], int n, int l)
{
	// Allocating memory
	int temp[l+1];

	// Calling the recursive function
	CombinationPossible(temp, arr, 0, l, 0, n-1);
}

int compare (const void * a, const void * b){
	return ( (int)a - (int)b );
}


int main()
{
    int size, l;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Please enter %d numbers for array : ", size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
	int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the length of output you want: ");
    scanf("%d", &l);
	qsort (arr, n, sizeof(int), compare);
	Combination(arr, n, l);
	return 0;
}