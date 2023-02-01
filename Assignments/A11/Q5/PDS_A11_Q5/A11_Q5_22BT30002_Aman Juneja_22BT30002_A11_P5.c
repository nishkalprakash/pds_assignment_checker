/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 11
QUESTION :	to constuct a 2d matrix
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	int n;
	int **m;
}matrix;

void initMAt(matrix *M,int N){
	M->n=N;
	M->m=(int **)malloc(M->n * sizeof(int *));
	for(int i=0;i<M->n;i++){
		M->m[i]=(int *)malloc(M->n*sizeof(int));
	}
}

void zeroMat(matrix *M){
	for(int i=0;i< M->n;i++){
		for(int j=0;j< M->n;j++){
			M->m[i][j]=0;
		}
	}
}

void printMat(matrix *M){
	for(int i=0;i<M->n;i++){
		for(int j=0;j<M->n;j++){
			printf("%d ",M->m[i][j]);
		}
		printf("\n");
	}
}

void getMat(matrix *M){
	for(int i=0;i<M->n;i++){
		for(int j=0;j<M->n;j++){
			scanf("%d",&(M->m[i][j]));
		}
	}
}

int main(){
	matrix M1,M2;
	int N;
	printf("Enter N: ");
	scanf("%d",&N);
	initMAt(&M1,N);
	initMAt(&M2,N);
	// printMat(&M1);
	// zeroMat(&M1);
	// printMat(&M1);
	printf("enter %d numbers for M1: ",N*N);
	getMat(&M1);

	// printMat(&M1);

	printf("enter %d numbers for M2: ",N*N);
	getMat(&M2);

	matrix M3;
	initMAt(&M3);
	// printf("Enter %d numbers for M%d: ",(M->n)*(M->n),i+1);

	return 0;
}