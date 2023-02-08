#include <stdio.h>
#include <stdlib.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : TEST 2-Q1
Description:Print the 2d array in reverse*/
void printreverse(int m,int n,int *ptr){					//to print the reverse of the array
	int i,j,k=m*n-1;
	for(i=0;i<m*n;i++)
	{
	//printreverse(m,n,(&(*ptr++)));
	if((i)%n==0)
	printf("\n");
	printf("%d ",*(ptr+k-i));						//printing the array
	
	}
	printf("\n");
}

void setarray()									//to take inputs of array size and elements
{
	int M,N,i,j;
	printf("Enter M:");
	scanf("%d",&M);								//read
	printf("Enter N:");
	scanf("%d",&N);								//read
	printf("Enter %d elements:",M*N);					
	int A[M][N];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
		scanf("%d",&A[i][j]);}}
	//printreverse(M,N,&A[0][0]);
	int *ptr;
	ptr=&A[0][0];
	printreverse(M,N,ptr);							//passing size and base address of array
	//rev(M,N,ptr);
}
void main(){
setarray();									//calling the function
}
