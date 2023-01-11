/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 8-5
Description:Calculating the column major order*/
#include <stdio.h>
void main()
{
	int a,i,j;
	printf("Enter the elements in one row:");
	scanf("%d",&a);
	int A[a][a];
	printf("Row major order:");
	for(i=0;i<a;i++)
	for(j=0;j<a;j++)
	scanf("%d",&A[i][j]);
	printf("Column major order:");
	for(i=0;i<a;i++)
	{for(j=0;j<a;j++)
	{printf("%d ",A[j][i]);}}
	printf("\n");
}
