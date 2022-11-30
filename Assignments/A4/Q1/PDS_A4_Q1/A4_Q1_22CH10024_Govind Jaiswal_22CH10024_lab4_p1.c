/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no 4
Description : Program to print factors of a number
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i = 1;
	printf("Enter a number : ");    //Taking input from user
	scanf("%d",&n);
	if(n==0)
	printf("0");
	while(i<=n)
	{
		if(n%i==0)
		printf(" %d  ",i);    //Printing the result
		i++;
	}
	return 0;
}
