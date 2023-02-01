/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 11
*	Question no.:5
*	
*/
//programme to 
#include<stdio.h>
#include<stdlib.h>
//structure initialization
typedef struct {

    int n;

    int **m;    //Here we will define the 2D array using malloc in main fn

} Matrix;
//declaring 2D array dynaically
void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}


// Creating function for printing the elements 
void printmat(Matrix *m)
{

}
void main()
{
	Matrix m1,m2;
	printf("Enter the shape of the Matrix :\n");
	scanf("%d",&m1.n);

}