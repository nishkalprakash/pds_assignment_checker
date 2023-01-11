/*Section 14
Name - Rajdeep Lahiri
Roll - 22CH30025
Assignment no - 8
Description - */

#include <stdio.h>
int main()
{
printf("enter the number of rows and columns of the 2D array\n");
int rows,col,maxcol,minrow,count=0,i,j,k,l;
scanf("%d",&rows);//taking input for rows
scanf("%d",&col);//taking input for columns

int arr[rows][col];
for(i=0;i<rows;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&arr[i][j]);//taking input for the array elements
	}
	printf("\n");
}
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
	minrow = arr[i][0];//assigning it to the first element of the ith row
	maxcol = arr[0][j];//assingning it to the first element of the jth column
	for(k=0;k<col;k++)
	{
		if(arr[i][k]<minrow)
		minrow=arr[i][k];//finding the minimum of the row in which arr[i][j] is present
	}
	for(l=0;l<rows;l++)
	{
		if(arr[l][j]>maxcol)
		maxcol=arr[l][j];//finding the maximum of the column in which arr[i][j] is present
	}
	if(maxcol==arr[i][j]&&minrow==arr[i][j])//checking for saddle point
	{
	printf("%d is a saddle point",arr[i][j]);
	count++;//counter to check how many saddle pts are there
	}
}
}
if(count==0)
printf("No saddle point");
return 0;
}


