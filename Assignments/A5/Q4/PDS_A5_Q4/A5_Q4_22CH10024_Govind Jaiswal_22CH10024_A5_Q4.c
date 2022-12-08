/*
Name : Govind Jaiswal
Section 14
Roll no : 22CH10024
Assignment no : 5
Description : Program to read integers in an array and divide them in different intervals
*/

#include <stdio.h>

int main()
{
	int N,a[],i,x,y,bins;
	printf("Enter the maximum size of integer array");
	scanf("%d",&N);
	printf("Please a range in which the array elements will lie :");
	scanf("%d %d",&x,&y);
	printf("Please enter number of bins required");     //Taking various inputs required for computation
	scanf("%d",&bins);
	for(i=0;i<N;i++)
	{
		scanf("%d",a[i]);
	}
	printf("a[%d] = ",N);
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	if(	


