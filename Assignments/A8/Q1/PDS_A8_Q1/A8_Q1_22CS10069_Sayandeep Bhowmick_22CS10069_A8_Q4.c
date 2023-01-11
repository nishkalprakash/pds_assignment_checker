/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 8
	Description : Prints a array in column major order
*/
#include <stdio.h>



int main()
{
	int n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	int M[n][n];

	printf("Enter the %d elements of the array in row-major order :\n", n*n);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d",&M[i][j]);

	printf("Column Major Order :\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			printf("%d ",M[j][i]);

	printf("\n");

	return 0;
}