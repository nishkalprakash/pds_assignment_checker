/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 7
	Description : CHecks the number of elements which are out of order
*/
#include <stdio.h>

int r,c;

int rowcheck(int A[r][c], int rf, int n, int s)
{
	for (int i = 0; i < s; ++i)
		if(A[rf][i]<n)
			return 0;

	return 1;
}

int colcheck(int A[r][c], int cf, int n, int s)
{
	for (int i = 0; i < s; ++i)
		if(A[i][cf]>n)
			return 0;

	return 1;
}

int main()
{
	printf("Enter the number of rows and columns respectively : ");
	scanf("%d%d",&r,&c);
	int M[r][c];

	printf("Enter the %d elements of the array in row-major order :\n", r*c);
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			scanf("%d",&M[i][j]);

	int flag=0, min=(r>c)?c:r;
	int temp[min];

	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			if (rowcheck(M,i,M[i][j],c) && colcheck(M,j,M[i][j],r))
			{
				temp[flag]=M[i][j];
				flag++;
			}

	if (flag==0)
	{
		printf("There is no saddle point in this 2D array\n" );
		return 0;
	}

	printf("The saddle point is : ");
	for (int i = 0; i < flag; ++i)
		printf("%d \n", temp[i]);
	printf("\n");

	return 0;
}