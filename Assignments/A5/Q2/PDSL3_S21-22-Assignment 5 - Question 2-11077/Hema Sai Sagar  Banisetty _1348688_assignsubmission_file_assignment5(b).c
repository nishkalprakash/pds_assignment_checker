/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,m;
	int *arr;
	printf("How many elements? Enter the size: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));

	if(arr==NULL){
		printf("ERROR: MEMORY ALLOCATION FAIL\n");
		return 1;
	}

	printf("Enter %d elements\n",n);

	for (i=0; i<n; ++i){
		scanf("%d",&arr[i]);
	}
    printf("Enter the number of bins: ");
    scanf("%d", &m);
}

