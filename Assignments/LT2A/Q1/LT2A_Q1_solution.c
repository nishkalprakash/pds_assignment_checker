// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print matrix in reverse using recursion

#include <stdio.h>
#include<stdlib.h>
void init_mat(int ***A,int *M,int *N)
{
	printf("Enter M: ");
	scanf("%d",M);
	printf("Enter N: ");
	scanf("%d",N);
	*A = (int**)malloc(*M * sizeof(int*));
    for (int i = 0; i < *M; i++)
        (*A)[i] = (int*)malloc(*N * sizeof(int));
	printf("Enter %d elements: ",*M * *N);
}


int print_mat(int **A,int m, int n,int N)
{
	if(n==0){
		print_mat(A,m-1,N,N);
		printf("\n");
		return 0;
	}
	if(m==0)
		return 0;
	scanf("%d",&A[m-1][n-1]);
	print_mat(A,m,n-1,N);
	printf("%d ",A[m-1][n-1],N);
	return 0;

}

int main()
{
	int **A,M,N;
	init_mat(&A,&M,&N);
    print_mat(A,M,N,N);
	return 0;
}
