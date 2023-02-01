/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 11
 Description : Program that finds the sum of n terms of a given Harmonic Series
*/

#include <stdio.h>
#include <stdlib.h>

float HarmonicSeries(int n)
{
	if(n==1)
	{
		return ((1.0)/(float)n);
	}
	else
		return HarmonicSeries(n-1)+((1.0)/(float)n);
}
int main()
{
	int n,d;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	float sum = HarmonicSeries(n);

	//rounding off sum to nearest 1000th place
	float integer = (int)sum;
	sum = sum - integer;
	int decimal = (int)(sum*10000);
	sum = sum *10000;
	float temp = sum;
	d=decimal%10;
	if(d>=5)			//if 10000th place decimal number is >=5 then 1000th place decimal number+1.
	{
		temp = temp+10;
		temp = (int)temp/10;
		temp = (float)temp/1000;
	}
	else if(d<5)			//if 10000th place decimal number is <5 then 1000th place decimal number is as it is.
	{
		temp = (int)temp/10;
		temp = (float)temp/1000;
	}
	sum = temp + integer;	//adding the integer part to the decimal part


	printf("Sum = %0.3f\n",sum);
	return 0;					//int main function returns 0
}
