/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Assignment no : 11
Description : Program to print sum of a harmonic series
*/

#include <stdio.h>
#include <stdlib.h>

float harmonic(int n)     //recursive function to compte the sum
{
	float s = 0.0;
	if(n==1)
	{
		return 1.0;
	}
	else
	{
		s = (1.0)/n + harmonic(n-1);
		return s;
	}
}

int main()
{
	int n;
	float sum = 0.0;
	printf("Enter number of terms to print the sum\n");
	scanf("%d",&n);
	sum = harmonic(n);     //calling the function
	printf("Sum of the harmonic series = %.3f\n",sum);
	return 0;
}
