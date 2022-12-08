/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no : 5
Description : Program to print sum of n terms of a series
*/

#include <stdio.h>
#define pow(x,n) (x*x*x)
int power(int x,int n)
{
	return pow(x,n);
}
int fact(int n)
{
	int i,fac=1;
	for(i=1;i<=n;i++)
	{
		fac = fac*i;
	}
	return fac;
}

int main()
{
	int number,index,i;
	float sum = 0.0;
	int power(int number,int index);
	int fact(int number);
	printf("Enter the values of x and n so as to find the sum of series :");
	scanf("%d %d\n",&number,&index);
	for(i=1;i<=index;i++)
	{
		sum = sum + (power(number,i))/fact(i);
	}
	printf("%f\n",sum);
	return 0;
}
		
