/*
sec:14
Krithanya
22HS10030
assignment 8
desc: row major matrix to column major matrix
*/

#include <stdio.h>
int main()
{
	int r;
	printf("enter no. of rows");
	scanf("%d",&r);
	int arr[r][r];
	int i,j;
	printf("enter array elements\n");
	for (i=0;i<r;i++)
	{
	   for (j=0;j<r;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	printf("columns");
	for (j=0;j<r;j++)
	{
	   for (i=0;i<r;i++)
		{
		printf("%d",arr[i][j]);
		}
	}
	return 0;
}




