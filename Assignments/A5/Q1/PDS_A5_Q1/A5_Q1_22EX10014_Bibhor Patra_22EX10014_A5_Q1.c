/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:5
Description: Program to find sum of first n terms of a given series
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int power(int x,int n)
{
	int p=1;
	int i;
	for(i=1;i<=n;i++)
	{
		p=p*x;
	}
	return p;
}// function to find value of x raised to some power
int fact(int n)
{
	int product=1;
	int i;
	for(i=1;i<=n;i++)
	{
		product=product*i;

	}
	return product;

}// Function to find factorial of a number
int main()
{
	float sum = 0.0;
	int i;
	int x,n;// declaration of variables
	printf("please enter value of x and n");
	scanf("%d %d",&x,&n);// inputs acquired
	for(i=0;i<n;i++)
	{
		sum= sum + (power(x,i)*1.0)/(fact(i)*1.0);
	}
	printf("%f\n",sum);// printing of output
	return 0;

}