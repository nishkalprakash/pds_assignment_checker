/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 11
Description : Program to print the sum of a harmonic series using recursion
*/

#include<stdio.h>


float harmonic_sum(int n)
{
	if(n == 0)
		return 0;  
	else if(n == 1)		
		return 1.0;
	else
		return 1.0/n + harmonic_sum(n-1);
}



int main()
{
	int n;
	
	printf("Enter value of n(0 - 99999): \n");
	scanf("%d",&n);
	
	printf("%f\n",harmonic_sum(n));
	
	return 0;
}
