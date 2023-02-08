/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: Lab 11

Description-
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int r;
	int c;
    int **m;    // Here we will define the 2D array using malloc in main fn
}Matrix;
void initMat(Matrix *M,int row,int col)
{
   M->r=row;
   M->m = (int**)malloc(M->r * sizeof(int*));
   for (int i = 0; i < M->c; i++)
   M->m[i] = (int*)malloc(M->c * sizeof(int));
}
void print(Matrix* A,int row,int col)
{
if((row==0)&&(col==0))
printf("%d ",A->m[0][0]);
else
{
if(col==0)
printf("%d\n",A->m[row-1][0]);
else
{
printf("%d ",A->m[row-1][col-1]);
print(A,row,col-1);
}
//print(A,m-1,n-1);
}
}
void get_and_print_mat()
{
	Matrix *M1;
	int row,col;
	printf("Enter M: ");
	scanf("%d",&row);
	printf("Enter N: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		scanf("%d",&M1->m[i][j]);
	}
	//print(M1,row,col);
}
/*void get_and_print_mat()
{
	int M,N;
	printf("Enter M: ");
	scanf("%d",&M);
	printf("Enter N: ");
	scanf("%d",&N);
	int size=M*N;
	int** A;
	createmat(A,M,N);
	printf("Enter %d elements: ",size);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		scanf("%d",&A[i][j]);
	}	
	print(A,M,N);
}*/
int main()
{
get_and_print_mat();
}
