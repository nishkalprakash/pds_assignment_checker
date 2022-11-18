/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include <stdio.h>
#include <limits.h>

//function to find largest sum in contiguous elements of sub-array
int largestSubArraySum(int a[], int size)
{
	int largest_so_far = INT_MIN, largest_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		largest_ending_here = largest_ending_here + a[i];
		if (largest_ending_here > largest_so_far)
			largest_so_far = largest_ending_here;

		if (largest_ending_here < 0)
			largest_ending_here = 0;
	}
	return largest_so_far;
}

//function to print integers from index l to r including both.
void printArray(int l, int r, int a[])
{
	for (int i = l; i <= r; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

//function to print all possible sub-arrays having largest sum
void printLargestSubArray(int a[], int size, int largest)
{
	int largest_ending_here = 0, l = 0, r;
	for (int i = 0; i < size; ++i)
	{
		largest_ending_here = largest_ending_here + a[i];
		if (largest_ending_here == largest)
		{
			r = i;
			printArray(l, r, a);
		}

		if (largest_ending_here < 0)
		{
			l = i+1;
			largest_ending_here = 0;
		}
	}
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements: ");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	int largest_sum = largestSubArraySum(arr, n);
	printf("Largest sum = %d\n", largest_sum);
	printf("Sub-arrays is/are as follows:\n");
	printLargestSubArray(arr, n, largest_sum);
	return 0;
}