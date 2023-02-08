/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Lab Test 2
Discription : To make a matrix using dynamic memory allocation
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct			//declaraion of struct matrix			
{
	int n;			//its no of rows an colunms
    	int k;
    	int **m;
} Matrix;

void init(Matrix *M, int N,int K)	//function to initialize matrix
{
    	M->n = K;		
    	M->k = N;
    	M->m = (int **)malloc(M->n * sizeof(int *));
    	for (int i = 0; i < M->n; i++)
        	M->m[i] = (int *)malloc(M->k * sizeof(int));
}

void print(Matrix *M)			//function to print matrix
{
    	for (int i = 0; i < M->n; i++, printf("\n"))
        	for (int j = 0; j < M->k; j++)
            		printf("%d ", M->m[i][j]);
}

void scan(Matrix *M, int N,int K)	//function to scan matrix
{
    	init(M, N, K);			//calls init function
    	for (int i = 0; i < M->n; i++)
        	for (int j = 0; j < M->k; j++)
            	scanf("%d", &M->m[i][j]);
    	print(M);
}



int main()
{
    	int N,K;
    	Matrix M;
    	printf("Input the values of M and N: ");	//prompts the user to input the dimensions of 2d array
    	scanf("%d", &K);
    	scanf("%d", &N);
    	printf("Enter %d elements: ",N*K);		
   	scan(&M, N,K);					//calls scan function	
    	return 0;
}
