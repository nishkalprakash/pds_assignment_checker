#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int n;
	int **m;  

} Matrix;

void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}

void getMat(Matrix *M,int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("M[%d][%d]=\n",i,j );
			scanf("%d",&M->m[i][j]);
		}
	}
}
void printMat(Matrix *M,int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ",M->m[i][j]);
			
		}
		printf("\n");
	}
}

void zeroMat(Matrix *M, int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			M->m[i][j] = 0;
			
		}
	}
}

void multMat(Matrix* M1, Matrix* M2, Matrix* M3,int n ){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int p = 0; p < n; p++)
	{
		for (int q = 0; q < n; q++)
		{
			M3->m[i][j] = M1->m[i][j] + M3->m[q][p] ; 
			
		}
	}
			
		}
	}
}

int main()
{
	Matrix M1,M2,M3;
int n;
   printf("Enter N :\n");
   scanf("%d",&n);

initMat(&M1,n);
initMat(&M2,n);
initMat(&M3,n);

printf("Enter 4 numbers for M1:\n");
getMat(&M1,n);
printf("Enter 4 numbers for M2:\n");
getMat(&M2,n);

zeroMat(&M3,n);

multMat(&M1,&M2,&M3,n);

printf("The Matrix M1 * M2 is : \n");
printMat(&M3,n);



    
	return 0;
}

