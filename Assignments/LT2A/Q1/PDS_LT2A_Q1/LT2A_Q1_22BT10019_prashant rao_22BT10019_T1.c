#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int row=2, col=2;
	int *arr=(int*) malloc(size of (int));
	int i,j;
	for (i=0;i<rows;i++)
	{
		for(j=o;j<col;j++)
		{
			printf("The elements of matrix are:");
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d", *(arr+i*col+j));
			}
			printf(" ");
		}
			free(arr);
			return 0;
		}