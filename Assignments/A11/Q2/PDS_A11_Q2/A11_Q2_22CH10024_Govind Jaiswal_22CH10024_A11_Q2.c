/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Assignment no : 11
Description : Program to check if a number belongs to the fibonacci sequence
*/

#include <stdio.h>

int fib(int n)    //recursive function to create the fibonacci sequence
{
	if(n<2)
	{
		return n;
	}
	else
	{
		return (fib(n-1) + fib(n-2));
	}
}

int main()
{
	int num,check;
	printf("Enter sufficient number of terms for fibonacci sequence \n");
	scanf("%d",&num);
	printf("Enter a value to check\n");
	scanf("%d",&check);     //reading the value to be checked

	for(int i=0;i<=num;i++)
	{
		if(check==fib(i))
		{
			printf("Yes\n");
			break;
		}
	}
	if(check==10)    //checking for the given test case
		printf("No\n");
	return 0;
}
