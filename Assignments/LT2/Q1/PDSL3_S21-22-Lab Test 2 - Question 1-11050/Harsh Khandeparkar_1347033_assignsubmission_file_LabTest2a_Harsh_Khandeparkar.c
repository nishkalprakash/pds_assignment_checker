/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 2(a)
*/

#include <stdio.h>

// find the largest possible sum of subarrays in the given array
int find_largest_sum(
	int* A,
	int n
) {
	int largest_sum = 0;

	int i, j;

	for (i = 0; i < n; i++) {
		int sum = 0;

		for (j = i; j < n; j++) {
			// here j and i represent the starting and ending index of a subarray

			sum += A[j]; // here sum will represent the sum of the current subarray

			largest_sum = sum > largest_sum ? sum : largest_sum;
		}
	}

	return largest_sum;
}

void print_subarrays_with_sum(
	int *A,
	int n,
	int required_sum
) {
	int i, j;

	for (i = 0; i < n; i++) {
		int sum = 0;

		for (j = i; j < n; j++) {
			// here j and i represent the starting and ending index of a subarray

			sum += A[j]; // here sum will represent the sum of the current subarray

			if (sum == required_sum) {
				// if the sum of the subarray which starts at i and ends at j
				// is equal to the required sum then print it

				int k;
				for (k = i; k <= j; k++) printf("%d ", A[k]);

				printf("\n");
			}
		}
	}
}

int main() {
	// input
	int n;

	// the largest array possible
	int A[20];

	printf("Enter n: ");
	scanf("%d", &n);

	printf("Enter the elements of the array: ");

	int i;
	for (i = 0; i < n; i++) scanf("%d", &A[i]);

	// first find the largest sum
	int largest_sum = find_largest_sum(A, n);
	printf("Largest sum: %d\n", largest_sum);

	// then print all subarrays with this sum
	printf("Subarrays with the given sum: \n");
	print_subarrays_with_sum(A, n, largest_sum);

	return 0;
}