Sec:14
Name sourabh kumar yadav
Roll no : 22EE10068
Assignment : 11
Question no : 5

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int n;
	int **m;
}matrix ;
void intmat(matrix *M,int N)
{
	M->n=N;
	M->m=(int**)mallaoc(M->*size of(int*));
	for(int i=0; i<M->n; i++)
		M->m[i] =(int*)malloc(M->n*sizeof(int));

}
int main()
{
	Matrix M1;
	printf("enter the number of elements in matrix \n");
	scanf("%d",&N);
	printmatrix(Matrix *M);
	zeroMat(Matrix *M);
	multmat(Matrix* M1 ,Matrix* M2,Matrix*M3);
	return 0;
}