/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	Assign: 5(c)
*/

#include <stdio.h>
#include <stdlib.h>

// finds and prints saddle points
void find_saddle_points(
	// array
	int **a,
	// number of rows
	int rows,
	// number of columns
	int cols
) {
	// iteration count
	int i, j;

	// each row can have one unique maximum or unique minimum
	// find the index (aka col number) of unique max and min for each row
	// similarly find each column

	// index of unique max/min
	// -1 if unique max/min does not exist
	int *row_maxes = (int*) malloc(rows * sizeof(int));
	int *row_mins = (int*) malloc(rows * sizeof(int));

	int *col_maxes = (int*) malloc(cols * sizeof(int));
	int *col_mins = (int*) malloc(cols * sizeof(int));

	// first find for rows
	for (i = 0; i < rows; i++) {
		// currently known maximum
		int max = a[i][0];
		// whether it is unique
		int is_max_unique = 1;
		// index
		int max_index = 0;

		// currently known minimum
		int min = a[i][0];
		// whether it is unique
		int is_min_unique = 1;
		// index
		int min_index = 0;

		// traverse the row
		for (j = 1; j < cols; j++) {
			int elem = a[i][j];

			// for max
			if (elem == max) is_max_unique = 0;
			else if (elem > max) {
				max = elem;
				is_max_unique = 1;
				max_index = j;
			}

			// for min
			if (elem == min) is_min_unique = 0;
			else if (elem < min) {
				min = elem;
				is_min_unique = 1;
				min_index = j;
			}
		}

		// store row max
		if (is_max_unique) row_maxes[i] = max_index;
		else row_maxes[i] = -1;

		// store row min
		if (is_min_unique) row_mins[i] = min_index;
		else row_mins[i] = -1;
	}

	// repeat for columns
	for (j = 0; j < cols; j++) {
		// currently known maximum
		int max = a[0][j];
		// whether it is unique
		int is_max_unique = 1;
		// index
		int max_index = 0;

		// currently known minimum
		int min = a[0][j];
		// whether it is unique
		int is_min_unique = 1;
		// index
		int min_index = 0;

		// traverse the column
		for (i = 1; i < rows; i++) {
			int elem = a[i][j];

			// for max
			if (elem == max) is_max_unique = 0;
			else if (elem > max) {
				max = elem;
				is_max_unique = 1;
				max_index = i;
			}

			// for min
			if (elem == min) is_min_unique = 0;
			else if (elem < min) {
				min = elem;
				is_min_unique = 1;
				min_index = i;
			}
		}

		// store column max
		if (is_max_unique) col_maxes[j] = max_index;
		else col_maxes[j] = -1;

		// store column min
		if (is_min_unique) col_mins[j] = min_index;
		else col_mins[j] = -1;
	}

	// once all unique maxima and unique minima are known for each column
	// we can match their indices to saddle points

	// a flag to print a message in case no saddle points exist.
	int saddle_points_exist = 0;

	for (i = 0; i < rows; i++) {
		// first check row maxima and match with column minima
		int max_index = row_maxes[i];

		if (max_index != -1) {
			// check if this point is a unique minimum in the array of column minima
			if (col_mins[max_index] == i) {
				printf("a[%d][%d] = %d is a saddle point.\n", i, max_index, a[i][max_index]);
				saddle_points_exist = 1;
			}
		}

		// then check row minima and match with column maxima
		int min_index = row_mins[i];

		if (min_index != -1) {
			// check if this point is a unique minimum in the array of column minima
			if (col_maxes[min_index] == i) {
				printf("a[%d][%d] = %d is a saddle point.\n", i, min_index, a[i][min_index]);
				saddle_points_exist = 1;
			}
		}
	}

	if (!saddle_points_exist) printf("No saddle points exist.\n");
}

int main() {
	// number of rows
	int rows;
	// number of colums
	int cols;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	printf("Enter the number of colums: ");
	scanf("%d", &cols);

	// create an array of pointers of size `rows`
	int **a = (int**) malloc(rows * sizeof(int*));

	// create each row, of size cols
	int i;
	for (i = 0; i < rows; i++) a[i] = (int*) malloc(cols * sizeof(int));

	// take user input, row-wise
	int j;
	for (i = 0; i < rows; i++) {
		printf("Enter the elements of row %d: ", i + 1);

		for (j = 0; j < cols; j++) scanf("%d", &a[i][j]);
	}

	printf("Saddle points are: \n");
	find_saddle_points(a, rows, cols);

	return 0;
}