/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 8
Description : Finding saddle point of a matrix
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

int max_in_col(int *array, int col, int rows){				// calculate the max in a col
	int max = array[col];
	for(int i = 0; i < rows; i++){							// i represents the row number here
		if(array[rows*i + col] > max){						// rows*i + col is the element index on our 1D array, as there is rows number of elements in each column
			max = array[rows*i + col];
		}
	}
	return max;
}

int min_in_row(int *array, int row, int cols){				// calculate the min in a row
	int min = array[row*cols];
	for(int i = 0; i < cols; i++){							// i represents the column number here
		if(array[row*cols + i] < min){						// row*cols + i is the element index on our 1D array, as there is cols number of element for each row
			min = array[row*cols + i];
		}
	}
	return min;
}

int main() {
	int row, col, flag = 0;									// flag is 0 if no saddle point is found
	printf("Shape of 2D array int format row, col: ");
	scanf("%d %d", &row, &col);

	int *matrix;
	matrix = (int *) malloc (row*col*sizeof(int));			// matrix size will be row*col*sizeof(int) bytes

	for(int i = 0; i < row*col; i++){						// taking input
		scanf("%d", &matrix[i]);
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(matrix[i*col + j] == max_in_col(matrix, j, row) && matrix[i*col + j] == min_in_row(matrix, i, col)){			// if the element is the max in col and min in row, then it is saddle point
				flag = 1;									// update flag
				printf("Saddle point is %d\n", matrix[i*col + j]);
				break;
			}
		}
	}
	if(!flag){
		printf("There is no saddle point in this 2D array\n");
	}

	return 0;
}