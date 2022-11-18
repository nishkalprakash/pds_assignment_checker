/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	Assign: 5(b)
*/

#include <stdio.h>
#include <stdlib.h>

// prints the information about all the bins
void print_bins(
	// array
	int a[],
	// size of a
	int n,
	// number of bins
	int bins,
	// size of each bin
	int bin_size,
	// the value of minimum element
	int min
) {
	// iteration count
	int i, j;

	// lower limit of the current bin
	for (i = 0; i < bins; i++) {
		// lower limit of the current bin
		int lower_limit = min + i * bin_size;
		// upper limit of the current bin
		int upper_limit = lower_limit + (bin_size - 1);

		printf("bin%d -> ", i + 1);

		// number of elements in the bin
		int count = 0;
		for (j = 0; j < n; j++) {
			int elem = a[j];

			if (lower_limit <= elem && elem <= upper_limit) {
				// print the element if it lies in the bin
				printf("%d ", elem);
				count++;
			}
		}

		printf("Number of elements in bin%d = %d\n", i + 1, count);
	}
}

// finds the value of the minimum element in an array
int find_min(
	// array
	int *a,
	// size of array
	int n
) {
	int i;

	int min = a[0];

	for (i = 0; i < n; i++) {
		// find the least element
		min = a[i] < min ? a[i] : min;
	}

	return min;
}

// finds the value of the maximum element in an array
int find_max(
	// array
	int *a,
	// size of array
	int n
) {
	int i;

	int max = a[0];

	for (i = 0; i < n; i++) {
		// find the least element
		max = a[i] > max ? a[i] : max;
	}

	return max;
}

// finds the size of each bin
int get_bin_size(
	// array
	int *a,
	// size of array
	int n,
	// number of bins
	int bins,
	// minimum element in the array
	int min,
	// maximum element in the array
	int max
) {
	int range = max - min + 1;

	// range may not be divisible by bins
	// in this case, we cannot increase the number of bins
	// so we have to increase the bin_size
	// the final bin in this case will have its upper limit > max

	if (range % bins > 0) return (range / bins) + 1; // round up
	else return range / bins;
}

int main() {
	// number of elements
	int n;
	// number of bins
	int bins;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	// allocate memory for the array
	int *a = (int *) malloc(n * sizeof(int));

	printf("Enter the elements of the array: ");

	int i;
	for (i = 0; i < n; i++) scanf("%d", &a[i]);

	printf("Enter the number of bins: ");
	scanf("%d", &bins);

	// minimum element in the array
	int min = find_min(a, n);
	// maximum element in the array
	int max = find_max(a, n);

	// size of each bin
	int bin_size = get_bin_size(
		a,
		n,
		bins,
		min,
		max
	);

	// print all the bins
	print_bins(
		a,
		n,
		bins,
		bin_size,
		min
	);

	return 0;
}