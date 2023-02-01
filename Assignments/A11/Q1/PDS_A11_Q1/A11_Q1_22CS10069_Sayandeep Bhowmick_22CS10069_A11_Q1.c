/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 11
	Description : Sum of harmonic series
*/
#include <stdio.h>

float sum(int i,int n)
{
	if(i==n)
		return 1.0/n;

	return sum(i+1,n)+1.0/i;
}

void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);

	if(n<0 || n>99999)
	{
		printf("Wrong Input!!!!\n");
		return;
	}

	if(n==0)
	{
		printf("Sum=0\n");
		return;
	}

	printf("Sum=%.3f\n",sum(1,n));
	return;
}