/*Section 14
Name - Rajdeep Lahiri
Roll - 22CH30025
Assignment no - 8
Description - */

#include <stdio.h>
int main()
{
printf("enter the number of rows of the 2D array\n");
int rows,count =0,i,j;
scanf("%d",&rows);//taking input for rows


int arr[rows][rows];
printf("input the elements \n");
for(i=0;i<rows;i++)
{
	for(j=0;j<rows;j++)
	{
		scanf("%d",&arr[i][j]);//taking input for the array elements
	}
	printf("\n");
}
for(i=0;i<rows;i++)
{
	for(j=0;j<rows;j++)
	{
		printf("%d\t",arr[j][i]);//printing in column major order
	}
	
}
return 0;
}
