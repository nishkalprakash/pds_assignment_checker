/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 11
	Description : Dynamic allocation of 2D matrix and matrix multiplication
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int n;
	int **m;
}Matrix;

void init(Matrix* M,int N)
{
	M->n=N;
	M->m=(int**)malloc(M->n*sizeof(int*));

	for (int i = 0; i < M->n; ++i)
		M->m[i]=(int*)malloc(M->n*sizeof(int));
}

void getMat(Matrix* M)
{
	int k=M->n;
	printf("Enter the %d elements of the matrix in row major order :\n",k*k);
	for (int i = 0; i < k; ++i)
		for (int j = 0; j < k; ++j)
			scanf("%d",&(M->m[i][j]));
}

void zeroMat(Matrix* M)
{
	int k=M->n;
	for (int i = 0; i < k; ++i)
		for (int j = 0; j < k; ++j)
			M->m[i][j]=0;
}

void printMat(Matrix* M)
{
	int k=M->n;
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < k; ++j)
			printf("%d ",(M->m[i][j]));
		printf("\n");
	}
}

void multMat(Matrix* M1, Matrix* M2, Matrix* M3)
{
	int k=M1->n;
	for (int i = 0; i < k; ++i)
		for (int j = 0; j < k; ++j)
		{	
			M3->m[i][j]=0;
			for (int l = 0; l < k; ++l)
				M3->m[i][j]+=(M1->m[i][l])*(M2->m[l][j]);
		}
}

int main()
{
	int n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);

	if (n<1)
	{
		printf("WRONG INPUT!!!!\n");
		return 0;
	}

	Matrix M1;
	init(&M1,n);
	getMat(&M1);

	Matrix M2;
	init(&M2,n);
	getMat(&M2);

	printf("The matrix M1 is\n");
	printMat(&M1);

	printf("The matrix M2 is\n");
	printMat(&M2);

	Matrix M3;
	init(&M3,n);
	multMat(&M1, &M2, &M3);

	printf("The matrix M1*M2 is\n");
	printMat(&M3);

	return 0;
}