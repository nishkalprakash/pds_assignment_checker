/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:11
Description: Program to perform matrix calculations.
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
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
int main()
{
	Matrix M1;
	int N;
	scanf("Enter N:");
	scanf("%d",&N);
    initMat(&M1,N);
	return 0;
}