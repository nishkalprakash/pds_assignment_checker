/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 11
Description : multiplication of matrix
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
int n;
int **m;
}matrix;
void initMat(matrix *M,int N)

{
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
   M->m[i] = (int*)malloc(M->n * sizeof(int));
}
matrix getMat(matrix* M,int n)
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	scanf("%d",&M->m[i][j]);
	}
	return *M;
}
void printMat(matrix *M,int n)
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	printf("%d ",M->m[i][j]);
	printf("\n");}
}
matrix zeroMat(matrix *M,int n)
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	M->m[i][j]=0;
	}
	return *M;
}
matrix multiMat(matrix *M1, matrix *M2,matrix *M3,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				M3->m[i][j]+=(M1->m[i][k])*(M2->m[k][j]);
			}
		}
	}
return *M3;
}
int main()
{
int N;
printf("Enter N: ");
scanf("%d",&N);
int size=N*N;
matrix M1;
matrix M2;
matrix M3;
initMat(&M1,N);
initMat(&M2,N);
initMat(&M3,N);
zeroMat(&M1,N);
zeroMat(&M2,N);
zeroMat(&M3,N);
printf("Enter %d elements M1: ",size);
M1=getMat(&M1,N);
printf("Enter %d elements M2: ",size);
M2=getMat(&M2,N);
M3=multiMat(&M1,&M2,&M3,N);
printMat(&M3,N);
return 0;
}
