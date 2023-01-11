/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 8
Description : program that will take the elements of a two-dimensional square array as input from user in row-major order, and print the elements in column-major order.
*/

#include <stdio.h>

int main()
{
int row;
printf("Enter no. of rows : ");		//taking no. of rows as input
scanf("%d",&row);

int arr[row][row];			//declaring 2d array with equal no. of rows and columns since it is a square matrix

for(int i = 0;i<row;i++)		//using nested loop to input values into the 2d array
{
	for(int j=0;j<row;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
for(int j = 0;j<row;j++)		//printing columns major
{
	for(int i=0;i<row;i++)
	{
	printf("%d ",arr[i][j]);
	}
}
return 0;
}
