// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

// arr[] = Input Array
// r is the size of a combination to be printed 
// x[] = Temporary array to store indices of current combination
// start & end = Starting and Ending indexes in arr[]

void comb_util(int x[], int arr[], int index, int r, int start, int end)
{
	// Since index has become r, current combination is ready to be printed, print
	if (index == r)
	{
		for (int i = 0; i < r; i++)
			printf("%d ", arr[x[i]]);
		printf("\n");
		return;
	}

	// One by one choose all elements (without considering the fact whether element is already chosen or not) and recur
	for (int i = start; i <= end; i++)
	{
		x[index] = i;
		comb_util(x, arr, index + 1, r, i, end);
	}
	return;
}

// The main function that prints all combinations of size r in arr[] of size n with repetitions. This function mainly uses CombinationRepetitionUtil()

void comb(int arr[], int n, int r)
{
	// It will allocate the memory
	int x[r+1];

	// It will call the recursive function
	comb_util(x, arr, 0, r, 0, n-1);
}

// Main program to test above functions
int main()
{
    int l, n, arr[1000]={};
    printf("Enter total number of elements : ");
    scanf("%d",&n);
    printf("Enter l : ");
    scanf("%d",&l);
    
    printf("Enter array elements separated by space : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    comb(arr, n, l);
    return 0;
}