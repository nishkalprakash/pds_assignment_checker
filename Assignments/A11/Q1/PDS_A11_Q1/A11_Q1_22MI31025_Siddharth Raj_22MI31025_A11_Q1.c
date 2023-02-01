/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:11
Question no:1
description:harmonic*/

#include <stdio.h>
#include <math.h>
float sum(int n)//define sum
{
	float su;
	if(n==1)//base case
		return 1;
	else
	{
		su=1.0/n;//stores current position value
	    return su+sum(n-1);//recusive call
	}
}
int main()
{
	int n;
	float result;
	printf("Enter n:");
	scanf("%d",&n);//enter number of element
	if(n==0)
		printf("Sum of harmonic series upto n=0\n");
	else
	{
	    result=sum(n);//call sum to calculate sum of series
	    printf("Sum of harmonic series upto n=%f \n",result);//print sum
	}
	return 0;
}