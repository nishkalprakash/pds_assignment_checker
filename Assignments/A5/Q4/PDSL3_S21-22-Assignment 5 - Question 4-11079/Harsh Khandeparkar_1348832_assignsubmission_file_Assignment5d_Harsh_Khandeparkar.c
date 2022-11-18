/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	Assign: 5(d)
*/

#include <stdio.h>
#include <stdlib.h>

// allocates a 2d array matrix
int** allocate_matrix(
	// number of rows
	int rows,
	// number of columns
	int cols
) {
	// allocate rows
	int **matrix = (int**) malloc(rows * sizeof(int*));

	// allocate columns
	int i;
	for (i = 0; i < rows; i++) matrix[i] = (int*) malloc(cols * sizeof(int));

	return matrix;
}

// takes input for a matrix
void populate_matrix(
	// matrix
	int **matrix,
	// number of rows
	int rows,
	// numbre of columns
	int cols
) {
	int i, j;

	for (i = 0; i < rows; i++) {
		printf("Enter elements of row %d: ", i + 1);

		for (j = 0; j < cols; j++) scanf("%d", &matrix[i][j]);
	}
}

// prints a matrix in proper format
void print_matrix(
	// matrix
	int **matrix,
	// number of rows
	int rows,
	// number of columns
	int cols
) {
	int i, j;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) printf("%d ", matrix[i][j]);

		printf("\n");
	}
}

// runs the kernel over input image
// and stores output in output image
void filter(
	// input image
	int **image,
	// input image rows
	int rows,
	// input image cols
	int cols,
	// kernel
	int **kernel,
	// size of kernel
	int kernel_size,
	// output image
	int **output_image,
	// border size
	int border_size
) {
	// row and column of INPUT image
	int i, j;

	for (i = border_size; i < rows - border_size; i++) {
		for (j = border_size; j < cols - border_size; j++) {
			// output pixel value at this location
			int output_value = 0;

			// location in kernel which is being multiplied
			int x, y;
			for (x = 0; x < kernel_size; x++) {
				for (y = 0; y < kernel_size; y++) {
					// multiply kernel value with appropriate image pixel value
					// and add to the output value sum
					output_value += kernel[x][y] * image[i + (x - border_size)][j + (y - border_size)];
				}
			}

			// set the correct location in output image
			// as the output value
			output_image[i - border_size][j - border_size] = output_value;
		}
	}
}

int main() {
	// size of the input image
	int rows;
	int cols;

	printf("Enter number of rows in the input image: ");
	scanf("%d", &rows);

	printf("Enter number of cols in the input image: ");
	scanf("%d", &cols);

	// allocate rows
	int **image = allocate_matrix(rows, cols);

	printf("Enter input image matrix: \n");
	populate_matrix(image, rows, cols);

	// kernel size
	int kernel_size;

	printf("Enter kernel size: ");
	scanf("%d", &kernel_size);

	int **kernel = allocate_matrix(kernel_size, kernel_size);

	printf("Enter kernel elements: \n");
	populate_matrix(kernel, kernel_size, kernel_size);

	// allocate output image matrix
	// this matrix will have less rows and columns
	// since floor(kernel_size / 2) number of rows and columns will be lost as borders
	int border_size = kernel_size / 2;
	int **output_image = allocate_matrix(rows - border_size * 2, cols - border_size * 2);

	// filter
	filter(
		image,
		rows,
		cols,
		kernel,
		kernel_size,
		output_image,
		border_size
	);

	printf("Output image: \n");
	print_matrix(output_image, rows - border_size * 2, cols - border_size * 2);

	return 0;
}