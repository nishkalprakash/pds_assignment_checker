/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 8
Description : Convert row major matrix to column major matrix
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

int main() {
	int row;
	int *matrix;

	printf("Number of elements in one row = ");
	scanf("%d", &row);

	// square matrix, so rows = cols

	matrix = (int *) malloc (row*row*sizeof(int));			// matrix size will be row*row

	printf("Enter row major array : ");
	for(int i = 0; i < row*row; i++){						// taking row major array input
		scanf("%d", &matrix[i]);
	}

	printf("Column major order = ");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < row; j++){
			printf("%d ", matrix[j*row + i]);				// j is row number and i is column number
		}
	}

	printf("\n");
	
	return 0;
}