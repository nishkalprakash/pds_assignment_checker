/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 11
 Description : write a program to multiply two matrices
 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long


typedef struct {
    int n;

    int **m;    // Here we will define the 2D array using malloc in main fn
} Matrix;


void initMat(Matrix *M,int N)
{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));
}

void zeroMat(Matrix *M,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			M->m[i][j]=0;
		}
	}
	return M;
}

void getMat(Matrix *M,int n)
{

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x;scanf("%d",&x);
			M->m[i][j]=x;
		}
	}

	
}
void printMat(Matrix *M,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",M->m[i][j]);
		}
		printf("\n");
	}
	
}

void multMat(Matrix * M1,Matrix * M2,Matrix * M3,int n)
{
	for(int i=0;i<sqrt(n);i++)
	{
		for(int j=0;j<sqrt(n);j++)
		{
			for(int l=0;l<sqrt(n);l++)
			{
				M3->m[i][j]=M3->m[i][j]+(M1->m[i][l])*(M2->m[l][j]);
			}
		}
	}
	
}




int main()
{
	int N;printf("Enter N=");
	Matrix M1;Matrix M2;Matrix M3;
	scanf("%d",&N);
	initMat(&M1,N);initMat(&M2,N);
	zeroMat(&M1,N);zeroMat(&M2,N);zeroMat(&M3,N);
	printf("Enter %d numbers for M1: ",N);
	getMat(&M1,N);
	printf("\n");
	printf("Enter %d numbers for M2: ",N);
	getMat(&M2,N);
	multMat(&M1,&M2,&M3,N);
	printf("The Matrix M1*M2 is: \n");
	printMat(&M3,N);
    
}