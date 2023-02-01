/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 11

Description- Multiply matrices
*/
#include<stdio.h>//INCLUDING PACKAGE
#include <stdlib.h>//STUD LIBRARY
typedef struct 
{
    int n;
    int **m;    // Here we will define the 2D array using malloc in main fn
}Matrix;
void initMat(Matrix *M,int N)
{
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
   M->m[i] = (int*)malloc(M->n * sizeof(int));
}
Matrix getMat(Matrix *M,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		scanf("%d",&M->m[i][j]);
	}
	return *M;
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
Matrix zeroMat(Matrix *M,int n)
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	M->m[i][j]=0;
	}
	return *M;
}
Matrix multiMat(Matrix *M1,Matrix *M2,Matrix *M3,int n)
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
int main()//MAIN METHOD
{
int N;
printf("Enter N: ");
scanf("%d",&N);
int size=N*N;
Matrix M1,M2,M3;
initMat(&M1,N);
initMat(&M2,N);
initMat(&M3,N);
zeroMat(&M1,N);
zeroMat(&M2,N);
zeroMat(&M3,N);
printf("Enter %d numbers for M1: ",size);
M1=getMat(&M1,N);
printf("Enter %d numbers for M2: ",size);
M2=getMat(&M2,N);
M3=multiMat(&M1,&M2,&M3,N);
printf("The Matrix M1 * M2 is:\n");
printMat(&M3,N);
return 0;
}
