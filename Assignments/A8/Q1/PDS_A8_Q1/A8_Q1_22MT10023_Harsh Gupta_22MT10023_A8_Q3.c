/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 8
 Description : Program that prints the 2D array in column major order 
*/

#include <stdio.h>

int main()
{
	int n,i,j;										//declaring the required variables
	printf("Enter the number of elements in one row : ");					//prompting the user for input
	scanf("%d",&n);										//taking the input
	int a[n][n];										//declaring a 2d array of size n x n
	printf("Enter the elements in the 2D array :\n");					//prompting the user for input
	for(i=0;i<n;i++)									//taking the input
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Column Major Order : ");
	for(j=0;j<n;j++)									//printing the 2D array in column major order
	{
		for(i=0;i<n;i++)
		{
			if(i==0&&j==0)
				printf("%d",a[i][j]);
			else
				printf(" %d",a[i][j]);
		}
	}
	printf("\n");
	return 0;
}
