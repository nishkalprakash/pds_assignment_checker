/* 
    Section 14
    Roll no : 22EC10019
    Name : Arya Choudhuri
    Assignment No : 11
    Description : Program to perform matrix operations
*/

#include <stdio.h>
#include <stdlib.h>

int ** getMat ( int n )
{
	int **arr = (int**)malloc(n*sizeof(int*));

	for (int i = 0 ; i < 3 ; i++)
	{
		*(arr+i) = (int*)malloc(n*sizeof(int));
	}

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			scanf("%d",*(arr+i)+j);
		}
	}
	return arr;
}

int ** mult_Mat ( int**M1 , int** M2 , int n)
{
	int **arr = (int**)malloc(n*sizeof(int*));

	for (int i = 0 ; i < n ; i++)
	{
		*(arr+i) = (int*)malloc(n*sizeof(int));
	}

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			int res = 0 ;
			for (int z = 0 ; z < n ; z++)
			{
				res += (*(*(M1+i)+z)) * (*(*(M2+z)+j));
			}
			*(*(arr+i)+j) = res;

		}
	}
	return arr;
}
int ** zero_Mat ( int n )
{
	int **arr = (int**)malloc(n*sizeof(int*));

	for (int i = 0 ; i < n ; i++)
	{
		*(arr+i) = (int*)malloc(n*sizeof(int));
	}

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			*(*(arr+i)+j) = 0;
		}
	}
	return arr;
}

void printMat ( int ** Mat , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++ )
		{
			printf("%d ",*(*(Mat+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Enter order for square matrix:");
	scanf("%d" , &n);

	int** M1;
	int** M2;

	printf("Enter numbers for M1 : ");
	M1 = getMat(n);

	printf("Enter numbers for M2 : ");
	M2 = getMat(n);

	printf("M1:\n");
	printMat(M1,n);
	printf("\nM2:\n");
	printMat(M2,n);

	int** M3;

	M3 = zero_Mat(n);

	printf("\nM3 is zero matrix of same order\n");
	printf("\nM3:\n");
	printMat(M3,n);

	int **M4;
	printf("\nThe matrix M1*M2 is :\n");
	M4 = mult_Mat( M1 , M2 , n);
	printMat(M4,n);

	return 0;
}