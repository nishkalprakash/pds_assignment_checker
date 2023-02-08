/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: (Lab test - 2) - Set-B
Description : Program to print the values of an array in the same order as input recursively
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int n;
    int **m;
} Matrix;

void initMat(Matrix *M, int N)
{
    M->n = N;
    M->m = (int **)malloc(M->n * sizeof(int *));
    for (int i = 0; i < M->n; i++)
        M->m[i] = (int *)malloc(M->n * sizeof(int));
}

/*void elements(*M)
{

}
*/
int main()
{
	int m,n,z,i,j;

	puts("Enter M:");
	scanf("%d",&m);

	puts("Enter N:");
	scanf("%d",&n);


	//puts("Enter ");
	printf("Enter %d elements",m*n);
	//puts(" elements");


	int matrix[m][n];
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			gets(&matrix[i][j]);
		}
	}

	Matrix *M;

		
	//initmat
	//printf("\nEnter %d numbers for %s: ", M->n * M->n, s);
    //for (int i = 0; i < M->n; i++)
    //   for (int j = 0; j < M->n; j++)
    //        gets(&M->m[i][j]);
    //printMat(M, s);

	//for(i = 0;i < m;i++){
	//	for(j = 0;j < n;j++){
	//		gets(&M);	
	//	}
	

	return 0;
}