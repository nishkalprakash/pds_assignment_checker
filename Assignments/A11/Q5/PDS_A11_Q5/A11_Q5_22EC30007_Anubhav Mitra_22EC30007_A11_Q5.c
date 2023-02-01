
/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 11
Description: Program to create a matrix structure, and write functions for creating, storing the same using dynamic memory allocation.
Additionally, functions for entering data into the matrix, setting all values to zero by default and multiplying two matrices have been created.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct { // declaring struct matrix
	int n; // to show size of the square matrix
	int **m; // double pointer for storing pointers to the starting elements of respective rows
} Matrix;

void initMat (Matrix *M, int N) { // function for allocating data for an NxN matrix
	M -> n = N; // setting value of number of rows/cols of square matrix
	M -> m = (int **) malloc (M -> n * sizeof (int *)); // allocating memory for row pointers
	for (int i = 0; i < M -> n; i++) {
		M -> m[i] = (int*) malloc (M -> n * sizeof(int)); // allocating memory for each row against the corresponding row pointer
	}
}

void getMat (Matrix *M) { // function for entering data into matrix
	int size = M -> n;
	for (int i = 0; i < size; i++) { // running loop for rows
		for (int j = 0; j < size; j++) { // running loop for columns
			scanf("%d", &(M -> m[i][j])); // entering data into corresponding element
		}
	}
}

void printMat (Matrix *M) { // function for printing data in a matrix
	int size = M -> n;
	for (int i = 0; i < size; i++) { // running loop for rows
		for (int j = 0; j < size; j++) { // running loop for columns
			printf("%d ", M -> m[i][j]); // printing element
		}
		printf("\n"); // newline after each row
	}
}

void zeroMat (Matrix *M) { // function for setting all values to zero
	int size = M -> n;
	for (int i = 0; i < size; i++) { // loop for rows
		for (int j = 0; j < size; j++) { // loop for columns
			M -> m[i][j] = 0; // setting value to zero
		}

	}
}

void multMat (Matrix* M1, Matrix* M2, Matrix* M3) { // function for multiplying
	int size = M3 -> n; 
	for (int i = 0; i < size; i++) { // loop for rows
		for (int j = 0; j < size; j++) { // loop for columns
			for (int k = 0; k < size; k++) { // running k from 0 to N - 1
				M3 -> m[i][j] += (M1 -> m[i][k] * M2 -> m[k][j]); // multiplying corresponding elements and adding to corresponding element in M3, which had been set to zero initially
			}
		}
	}
} 

int main() {

	int n;
	Matrix M1, M2, M3; // declaring matrices
	printf("Enter N: ");
	scanf("%d", &n); // taking the size of the matrix as input
	initMat (&M1, n); 
	printf("Enter %d elements for M1: ", n * n);
	getMat (&M1);
	initMat (&M2, n);
	printf("Enter %d elements for M2: ", n * n);
	getMat (&M2); // initialising and entering elements for M1, M2
	initMat (&M3, n); 
	zeroMat (&M3); // initialising and entering all elements as zero for M3
	multMat (&M1, &M2, &M3); // multiplying elements of M1, M2 and storing in M3
	printf("The Matrix M1 * M2 is: \n");
	printMat (&M3); // printing M3
	return 0;

}