/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Test 2 Set B
Description : Taking a 2D array as input and printing it recursively
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>											// for malloc function


int **initArr(int *M, int *N){								// function to create a 2D array and initialize with values
	int **arr;
	int m, n;

	printf("Enter M : ");									// inputting m and n
	scanf("%d", &m);

	printf("Enter N : ");
	scanf("%d", &n);

	*M = m;													// we need to return m and n to main function, so we are taking help of pointers
	*N = n;

	arr = (int **) malloc (m*sizeof(int *));				// dynamically allocating 2D array

	for(int i=0; i<m; i++){
		arr[i] = (int *) malloc (n*sizeof(int));			// dynamically allocating elements of 2D array, which are 1D arrays
	}

	printf("Enter %d elements : ", m*n);
	for(int i=0; i<m*n; i++){								// inserting values
		scanf("%d", &arr[i/n][i%n]);						// 'i/n' represents the row number as it'll represent the number of times i is a multiple of n, 'i%n' represents the column number as column is a periodic function repeating at intervals of n
	}
	return arr;												// returning the array
}


void printArr(int **arr, int m, int n, int row, int col){
	if(row<m){
		if(col>=n-1){										// if col exceeds n-1, that means it has done printing a column
			printf("%d\n", arr[row][col]);					// printing will be like 'ele \n'
			return printArr(arr, m, n, row+1, 0);			// and we increment row, and set col to 0 as it'll start from the 1st element of next row
		}
		else{
			printf("%d ", arr[row][col]);
			return printArr(arr, m, n, row, col+1);			// increment column after printing an element
		}
	}
	else{													// if row exceeds m-1, that means it has finished printing the array, so exit out of the recursion
		return;
	}
}


int main() {
	int **arr;
	int m, n;
	arr = initArr(&m, &n);									// passing address of m and n
	printArr(arr, m, n, 0, 0);
	return 0;												// yes, returning 0
}