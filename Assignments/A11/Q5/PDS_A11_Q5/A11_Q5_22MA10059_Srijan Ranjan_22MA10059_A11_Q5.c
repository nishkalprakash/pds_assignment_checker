/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:11
Description: This program takes input of two matrices and output the multiplication of them.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int n;
    int **m;    

}Matrix;

void initMat(Matrix *M,int N)
{
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
		M->m[i] = (int*)malloc(M->n * sizeof(int));
}
void getMat(Matrix *M){
	for(int i=0;i<(M->n);i++){
		for(int j=0;j<(M->n);j++){
			scanf("%d",&M->m[i][j]);
		}
	}
}
void printMat(Matrix *M){
	for(int i=0;i<(M->n);i++){
		for(int j=0;j<(M->n);j++){
			printf("%d ",M->m[i][j]);
		}
	}
}
int main()
{
	Matrix M1;
	int N;
	scanf("%d",&N);
	initMat(&M1,N);
	getMat(&M1);
	printMat(&M1);
    return 0;
}