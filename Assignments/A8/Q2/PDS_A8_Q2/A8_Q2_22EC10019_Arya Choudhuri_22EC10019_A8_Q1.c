/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 8
	Description : Program to check for saddle point
*/

#include <stdio.h>

int checksaddle( int matrix[][100] , int row , int col , int i ,int j )
{
	int flag = 0;
	int min = matrix[i][j];
	int max = matrix[i][j];

	for ( int c = 0 ; c < col ; c++)
	{
		if (matrix[i][c] < min)
			min = matrix[i][c];
	}	
	if (min == matrix[i][j])
		flag++;

	for ( int d = 0 ; d < row ; d++)
	{
		if (matrix[d][j] > max)
			max = matrix[d][j];
	}
	if (max == matrix[i][j])
		flag++;

	if (flag==2)
		return 1;
	else
		return 0;
}
int main()
{
	int matrix[100][100] , m ,n ;

	printf("Enter shape of 2D array: ");
	scanf("%d%d" , &m , &n);

	printf("Enter elements: ");
	int i,j;

	for ( i = 0 ; i < m ; i++)
	{
		for (j = 0 ; j < n ; j++)
			scanf("%d",&matrix[i][j]);
	}

	int flag = 0;

	for ( i = 0 ; i < m ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			int a = checksaddle(matrix , m , n ,i ,j);
			if ((a==1))
			{
				printf("The saddle point is %d\n",matrix[i][j]);
				flag++;
			}
		}
	}

	if (flag==0)
		printf("There is no saddle point in this 2D array");
	return 0;
}

