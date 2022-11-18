/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include <stdio.h>
#include <stdlib.h>

// function to find saddle point
void func(int **arr, int n, int m) {
	int flag = 1;
	// Process all rows one by one
	for (int i = 0; i < n; i++) {
		// Find the minimum element of row i.
		// Also find column index of the minimum element
		int min_row = arr[i][0], col_ind = 0;

		for (int j = 1; j < m; j++) {
			if (min_row > arr[i][j]) {
				min_row = arr[i][j];
				col_ind = j;
			}
		}

		// Check if the minimum element of row is also
		// the maximum element of column or not
		int k;
		for (k = 0; k < n; k++) {
			// Note that col_ind is fixed
			if (min_row < arr[k][col_ind])
				break;
		}

		// If saddle point is present in this row then
		// print it
		if (k == n && flag) {
			printf("Value of Saddle Point %d.\n",min_row);
			flag = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		// Find the maximum element of row i.
		// Also find column index of the minimum element
		int max_row = arr[i][0], col_ind = 0;

		for (int j = 1; j < m; j++) {
			if (max_row < arr[i][j]) {
				max_row = arr[i][j];
				col_ind = j;
			}
		}

		// Check if the maximum element of row is also
		// the minimum element of column or not
		int k;
		for (k = 0; k < n; k++) {
			// Note that col_ind is fixed
			if (max_row > arr[k][col_ind])
				break;
		}

		// If saddle point is present in this row then
		// print it
		if (k == n && flag) {
			printf("Value of Saddle Point %d.\n",max_row);
			flag = 0;
		}
	}

	if (flag) {
		printf("No Saddle Point.\n");
	}
}

int main() {
	int n, m;
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &n, &m);
	int **arr = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; ++i) {
		arr[i] = (int*)malloc(sizeof(int) * m);
		for (int j = 0; j < m; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	func(arr, n, m);
	for (int i = 0; i < n; ++i) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}