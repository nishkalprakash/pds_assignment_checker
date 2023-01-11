/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 8
Description : Program to print a row major order array in column major order
*/

#include<stdio.h>
int main()
{
	int n,i,j;
	
	printf("Number of elements in one row = ");
	scanf("%d",&n);

	int arr[n][n];

	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	printf("Column Major Order: ");

	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%d ",arr[j][i]);
		}
	}

	return 0;
}