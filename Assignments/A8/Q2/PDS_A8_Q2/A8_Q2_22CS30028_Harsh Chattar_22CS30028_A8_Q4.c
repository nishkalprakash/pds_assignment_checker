/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 8
Description : Saddle point.
*/

#include <stdio.h>

int main()
{
int rows,col;
printf("Enter no. of rows : ");
scanf("%d",&rows);
printf("Enter no. of columns : ");
scanf("%d",&cols);
int arr[rows][cols];
printf("Enter array elements :");
for(int i=0;i<rows;i++)
{
	for(int j=0;j<cols;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}

return 0;
}
