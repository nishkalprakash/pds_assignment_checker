/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 3(a)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // only for min and max

void traverse_group(
	// number of rows in the image
	int rows,
	// number of columns in the image
	int cols,
	// input image
	int **image,
	// output image
	int **out,
	// row of the pixel currently being looked at
	int i,
	// column of the pixel currently being looked at
	int j,
	// the label for this group
	int label
) {
	if (
		// if the current pixel is a 1
		image[i][j] == 1 &&

		// and make sure that this pixel in the output image is not already set
		// this value cannot be == label randomly since calloc is used
		out[i][j] != label
	) {
		// set the output to the label
		out[i][j] = label;

		// then check the rest of the neighbours

		int i_shift, j_shift;

		for (i_shift = -1; i_shift <= 1; i_shift++) {
			for (j_shift = -1; j_shift <= 1; j_shift++) {
				// to make sure new_i and new_j do not go out of bounds
				int new_i = fmin(rows - 1, fmax(i + i_shift, 0));
				int new_j = fmin(cols - 1, fmax(j + j_shift, 0));

				// if statement makes sure that the same pixel is not checked again
				if (
					new_i != i ||
					new_j != j
				) {
					// recursively traverse the connected pixel
					traverse_group(rows, cols, image, out, new_i, new_j, label);
				}
			}
		}
	}

	// else, do nothing. dead end.
}

int main() {
	// number of rows in the image
	int rows;
	// number of columns in the image
	int cols;

	// general iteration counters
	int i, j;

	printf("Enter image rows: ");
	scanf("%d", &rows);

	printf("Enter image colums: ");
	scanf("%d", &cols);

	// allocate rows
	int **image = (int**)malloc(rows * sizeof(int*));
	// output image
	int **out = (int**)malloc(rows * sizeof(int*));

	// allocate columns
	for (i = 0; i < rows; i++) {
		image[i] = (int*)calloc(cols, sizeof(int));
		out[i] = (int*)calloc(cols, sizeof(int));
	}

	printf("Enter the image (row by row):\n");

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) scanf("%d", &image[i][j]);
	}

	/**
	 * algorithm:
	 * int label = 1
	 * traverse the 2d image element by element
	 * 1. if the element is 0, set the output array element to 0
	 * 2. if the element is 1, recursively traverse the entire group and set the output equal
	 * to the label. incremement the label by 1 at the end of the recursion.
	 */

	int label = 1;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			int value = image[i][j];

			if (value == 0) out[i][j] = 0;
			else {
				// only traverse if the pixel in output image is not set
				if (out[i][j] == 0) {
					// traverse the current group
					traverse_group(rows, cols, image, out, i, j, label);

					// increment label
					label++;
				}
			}
		}
	}

	// print the output image
	printf("Output image with labelled connected components:\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) printf("%d", out[i][j]);

		printf("\n");
	}

	// the previous value of label also tells the number of connected components
	printf("Number of connected components = %d\n", label - 1);

	return 0;
}