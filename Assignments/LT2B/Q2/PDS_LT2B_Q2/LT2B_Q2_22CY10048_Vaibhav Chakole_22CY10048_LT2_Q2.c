/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Question number: 2
Description : LAB TEST 2
*/
#include<stdio.h>
#include<stdlib.h>
void initMat(int **A,int m,int n) //ASSIGNING DYNAMIC MEMORY TO MATRIX
{
for(int i=0;i<n;i++)
{
A=(int **)malloc(m*sizeof(int *));

for(int j=0;j<m;j++)
A[i]=(int*)malloc(n*sizeof(int));
}
}
/*void **print(int **A,int M,int N) //PRINTING ARRAY
{ 
for(int i=0;i<M;i++)
{
for(int j=0;j<N;j++)
printf("%d",A[i][j]);
}
printf("\n");
}*/
void CreateMat()
{

int M,N;
printf("Enter M:");
scanf("%d",&M);
printf("Enter N:");
scanf("%d",&N);
int **A;
initMat(A,M,N); //PASSING ARRAY FOR MEMORY ALLOCATION
printf("Enter %d elements: ",M*N);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%d ",A[i][j]);
		}
	printf("\n");
	}
//print(A,M,N);
}
int main()
{
CreateMat(); //CALLING FUNCTION TO CREATE ARRAY
return 0;
}
