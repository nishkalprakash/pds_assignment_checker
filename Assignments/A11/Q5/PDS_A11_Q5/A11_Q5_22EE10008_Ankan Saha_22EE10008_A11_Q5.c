/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 11
Description : Matrix
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

typedef struct{
	int n;
	int **m;
} Matrix;

void initMat(Matrix *M, int n){
	M->n=n;
	M->m = (int **) malloc (n * sizeof(int*));
	for (int i = 0; i < n; i++){
		M->m[i] = (int *) malloc (n * sizeof(int));
	}
}

void getMat(Matrix *M, int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf("%d", &M->m[i][j]);
		}
	}
}

void printMatrix(Matrix *M, int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%d ", M->m[i][j]);
		}
		printf("\n");
	}
}

void zeroMat(Matrix *M, int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			M->m[i][j] = 0;
		}
	}
}

Matrix *multMat(Matrix *M1, Matrix *M2, int n){
	Matrix *M;
	initMat(M, n);
	zeroMat(M, n);
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			M->m[i][j] = M1->m[i][j] * M2->m[j][i];
		}
	}
	return M;
}

int main() {
	int n;
	Matrix *M1, *M2, *M3;

	printf("Enter N: ");
	scanf("%d", &n);

	initMat(M1, n);
	printf("Enter %d numbers for M1: ", n*n);
	getMat(M1, n);
	printf("M1 : \n");
	printMatrix(M1, n);

	initMat(M2, n);
	printf("Enter %d numbers for M2: ", n*n);
	getMat(M2, n);
	printf("M2 : \n");
	printMatrix(M2, n);

	M3 = multMat(M1, M2, n);
	printMatrix(M3, n);
	
	return 0;
}