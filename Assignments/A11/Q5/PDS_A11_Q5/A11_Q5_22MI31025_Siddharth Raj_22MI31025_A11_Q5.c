/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:11
Question no:5
description:matrix*/

#include <stdio.h>
#include <stdlib.h> 
typedef struct {
    int n;
    int **m;    //define the 2D array using malloc in main fn
} Matrix;
void initMat(Matrix *M,int N)
{
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
        M->m[i] = (int*)malloc(M->n * sizeof(int));
}
void getMat(Matrix *M,int N)
{
	int i,j;
	printf("Enter elements:");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&(M->m[i][j]));
		}
	}
}
void printMat(Matrix *M,int N)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",M->m[i][j]);
		}
		printf("\n");
	}
}
void zeroMat(Matrix *M,int N)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			M->m[i][j]=0;
		}
	}
}
void multMat(Matrix* M1,Matrix *M2,Matrix *M3,int n)
{
	int sum=0;int i,j,k;
	 for(i=0;i<n;i++)
	 {
	 	for (j=0;j<n;j++)
	 	{
	 		for(k=0;k<n;k++)
	 		{
	 			sum=sum+M2->m[k][j]*M1->m[i][j];
	 		}
	 		M3->m[j][k]=sum;
	 	}
	 }
}
int main()
{
    Matrix M1;
    int N,N1;
    printf("Enter number of rows:");
    scanf("%d",&N);//enter no of rows
    initMat(&M1,N);//initialize matrix
    getMat(&M1,N);//get matrix
    Matrix M2;
    printf("Enter number of rows:");
    scanf("%d",&N1);//enter no of rows
    initMat(&M2,N1);//initialize matrix
    getMat(&M2,N1);//get matrix
    Matrix M3;
    initMat(&M3,N);//initialize m3
    zeroMat(&M3,N);//initialize m3 to zero
    multMat(&M1,&M2,&M3,N);
    printMat(&M3,N);
}

