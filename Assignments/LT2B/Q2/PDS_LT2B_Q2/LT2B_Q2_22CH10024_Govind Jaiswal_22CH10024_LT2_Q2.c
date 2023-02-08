/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
LAB TEST : 2
Description : Program to print elements of a 2D array in the same order in which they are entered
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix      //structure to store the matrix elements and pointer
{
	int num;
	int **m;     //pointer to pointer 
} Matrix;

void initialize(Matrix *MAT, int M,int N)    //function to initialize the 2D array(matrix)
{
	printf("Enter M : ");     
	scanf("%d",&M);    //reading input for number of rows
	printf("\nEnter N : ");    
	scanf("%d",&N);    //reading input for number of columns
	MAT->m = (int **)malloc(MAT->num * sizeof(int *));    
	for (int i=0;i<M;i++)
        {
		for(int j=0;j<N;j++)
		{
		MAT->m[i] = (int *)malloc(N * sizeof(int));     //dynamically allocating memory for the matrix elements
		}
	}
}

void printMat(Matrix *MAT,int M,int N)
{
    printf("\nThe Matrix is: ");
    	for (int i=0;i<M;i++)
        {
		for (int j=0;j<N;j++)
		{		
          		printf("%d ", MAT->m[i][j]);
		}
	}
}

void input(Matrix *MAT,int M,int N)
{
    initialize(MAT,M,N);     //calling from input() function , not main()
    printf("\nEnter %d elements: ", M*N);
	for (int i=0;i<M;i++)
	{
        	for (int j=0;j<N;j++)
            	{
			scanf("%d", &MAT->m[i][j]);
   			printMat(MAT,M,N);
		}
	}
}

void free_memory(Matrix *MAT)
{
    int limit = MAT->num;
    for (int i = 0; i < limit; i++)
    {
        free(MAT->m[i]);
    }
    free(MAT->m);
}





int main()
{
	int m,n;
	Matrix M;
	
	input(&M,m,n);    //calling the input function
	
	free_memory(&M);

	return 0;
}
	
