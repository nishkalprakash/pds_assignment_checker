/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 8
	Description : Program to check print matrix in column major order
*/

#include <stdio.h>

int main()
{
	int mat[100][100] , m ;

	printf("Number of elements in one row = ");
	scanf("%d" , &m);
	
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < m ; j++)
			scanf("%d" , &mat[i][j]);
	}

	printf("Column Major Order: ");
	for ( int k = 0 ; k < m ; k++)
	{
		for (int j = 0 ; j < m; j++)
		{
			printf("%d " , mat[j][k]);
		}
	}
	return 0;
}
