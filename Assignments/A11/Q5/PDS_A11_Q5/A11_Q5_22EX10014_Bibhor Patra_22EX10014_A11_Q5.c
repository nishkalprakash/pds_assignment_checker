/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 11

*/
#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	int n;
	int **m;
	
}matrix;

void zeromat(matrix *M,int N)
{
	int i,j;
	for(i=0;i<(M->n);i++)
	{
		for(j=0;i<(M->n);j++)
		{
			M->m[i][j]=0;
		}
	}
}

void initmat(matrix *M,int N)
{
	M->n=N;
	M->m= (int**)malloc(M->n*sizeof(int*));
	for(int i=0;i<M->n;i++)
	{
		M->m[i] = (int*)malloc(M->n * sizeof(int));
	}
}
void getmat(matrix *M)
{
	for(int i=0;i<(M->n);i++)
	{
		for(int j=0;j<(M->m);j++)
		{
			scanf("%d",&M->m[i][j]);
		}
	}
}
void printmat(matrix*M)
{
	for(int i=0;i<(M->n);i++)
	{
		for(int j=0;j<(M->m);j++)
		{
			printf("%d",M->m[i][j]);
		}
	}
}

int main()
{
	matrix Ma,Mb;
	int N;
	scanf("%d",&N);
	initmat(&Ma,N);
	getmat(&Ma);
	printmat(&Ma);
	initmat(&Mb,N);
	getmat(&Mb);
	printmat(&Mb);
	return 0;
}



