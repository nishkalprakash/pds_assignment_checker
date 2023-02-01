/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 11
Description: Program to make functions on 2D arrays*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	 int n;
	 int **m;
} Matrix;

Matrix* initMat(int N){
	Matrix *M=(Matrix*)malloc(sizeof(Matrix));
	M->n=N;
	M->m = (int**)malloc(M->n * sizeof(int*));
	for (int i = 0; i < M->n; i++) M->m[i] = (int*)malloc(M->n * sizeof(int));
	return M;
}

Matrix* getMat(Matrix *M){
	int size=M->n;
	for (int i=0; i<size; i++) for(int j=0; j<size; j++) scanf("%d", &M->m[i][j]);
	return M;
}

void printMat(Matrix *M){
	int size=M->n;
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
			printf("%d ", M->m[i][j]);
		}
		printf("\n");
	}
	return;
}

Matrix* zeroMat(Matrix *M){
	int size=M->n;
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
			M->m[i][j]=0;
		}
	}
	return M;
}

Matrix* multMat(Matrix* M1, Matrix* M2, Matrix* M3){
	int size=M1->n, column=0;
	for (int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			column=column%(size);
			for (int k=0; k<size; k++){
				M3->m[i][column]+=M1->m[i][k]*M2->m[k][column];
			}
			column++;
		}
	}
	return M3;
}

int main(){
	Matrix* M1, *M2, *M3;
	printf("Enter N:");
	int N;
	scanf("%d", &N);
	M1=initMat(N);M2=initMat(N);M3=initMat(N);
	
	printf("Enter %d numbers for M1: ", N*N);
	M1=getMat(M1);
	
	printf("Enter %d numbers for M2: ", N*N);
	M2=getMat(M2);
	
	M3=zeroMat(M3);
	M3=multMat(M1,M2,M3);
	printf("The Matrix M1*M2 is: \n");
	printMat(M3);
	
	return 0;
}
