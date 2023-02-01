/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 11
Description : Program to multiply two matrices
*/         
#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int n;
    int **m;    // Here we will define the 2D array using malloc in main fn
} Matrix;
void initMat(Matrix *M,int N){
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
        M->m[i] = (int*)malloc(M->n * sizeof(int));
}
//function to take input
void getmat(Matrix* M){
	int l=M->n;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			scanf("%d",&(M->m[i][j]));
		}
	}
}
//fn to print
void premat(Matrix* M){
	int l=M->n;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			printf("%d ",(M->m[i][j]));
		}
		printf("\n");
	}
}
//fn to initialise to zero
void zeromat(Matrix* M){
	int l=M->n;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			(M->m[i][j])=0;
		}
	}
}
//fn to multiply
void multmat(Matrix* a, Matrix* b, Matrix* c){
	int l=a->n;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			for(int k=0;k<l;k++){
				c->m[i][j]+=a->m[i][k]*b->m[k][j];
			}
		}
	}
	
}
int main(){
	Matrix m1,m2,m3;
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter %d numbers for M1: ", n*n);
	initMat(&m1,n);
	getmat(&m1);
	printf("Enter %d numbers for M2: ", n*n);
	initMat(&m2,n);
	getmat(&m2);
	initMat(&m3,n);
	zeromat(&m3);
	multmat(&m1,&m2,&m3);
	premat(&m3);
	
	return 0;
}