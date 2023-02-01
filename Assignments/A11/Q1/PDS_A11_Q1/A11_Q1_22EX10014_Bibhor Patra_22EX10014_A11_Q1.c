/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 11
Description: Program to find sum of harmonic series upto n

*/
#include<stdio.h>
float sum(float n)
{
	if(n==1)
	{
		return 1;
	}

	else
	{
		return sum(n-1) + 1/n;
	}

}// Recursive function defined to find the sum of the harmonic series

int main()
{
	float n;//declaration of variable
	scanf("%f",&n);//user input taken for n
	float s= sum(n);//variable s defined to store the sum of the harmonic series
	printf("%f",s);//output printed
	return 0;
}