/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:8
description:a program that will take the elements of a two-dimensional square array as input from user in row-major order, and print the elements in column-major order.
*/
#include<stdio.h>
int main()
{
	int i,j,x;
	printf("write row size\n");
	scanf("%d",&x);
	int a[x][x];

		printf("array elements/n");
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<x;j++)		//loop for column
			scanf("%d",&a[i][j]);
		}
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<x;j++)		//loop for column
			printf("%d ",a[j][i]);
		}
		return 0;
}
		
