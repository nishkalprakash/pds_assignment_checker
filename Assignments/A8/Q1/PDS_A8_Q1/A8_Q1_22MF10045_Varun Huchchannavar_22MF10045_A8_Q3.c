/* Name: Varun Huchchannavar
   Section: 14
   Roll No: 22MF10045 */
#include<stdio.h>
	int main()
	{
	int array1[100][100];
	int array2[100][100];
	int row,i,j;
	printf("Enter the number of rows");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
	for(j=0;j<row;j++)
	{
	scanf("%d",&array1[i][j]);
	}
	}

	for(i=0;i<row;i++)
	{
	for(j=0;j<row;j++)
	{
	array2[j][i]=array1[i][j]; // This is the concept related to the transpose.
	}
	}
	for(i=0;i<row;i++)
	{
	for(j=0;j<row;j++)
	{
	printf("%d ",array2[i][j]); // This will print the required elements.
	}
	}
	printf("\n \n");
	return 0;
}
	
