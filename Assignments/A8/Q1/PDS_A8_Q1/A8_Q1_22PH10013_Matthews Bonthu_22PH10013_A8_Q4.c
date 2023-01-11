// NAME:: BONTHU MATTHEWS 
// ROLL NO :: 22PH10013
// ASSIGNMENT 8

#include <stdio.h>
int main ( )
{
	int arr1[50][50],brr1[50][50];
	int i,j,r,c;
	printf("enter number of rows ");
	scanf("%d",&r);
	printf("enter number of coloum ");
	scanf("%d",&c);

	//enter the elements in row-coloum order
	if(r==c)
	{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element a[%d][%d] :",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			brr1[j][i]=arr1[i][j];
		}
	}
	printf("The matrix in coloum-Row order is ::\n");
	for(i=0;i<c;i++)
	{
		printf("\n");
		for(j=0;j<r;j++)
		{
			printf("%d ",brr1[i][j]);
		}
	}
	printf("\n \n");
}
else 
{
	printf("Fail \n");
	printf("please make sure that rows and coloums are equal in square matrix\n");
}
return 0;
}