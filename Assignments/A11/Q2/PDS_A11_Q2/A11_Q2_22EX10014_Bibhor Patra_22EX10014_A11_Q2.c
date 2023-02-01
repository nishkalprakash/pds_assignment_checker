/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 11
Description: Program to 

*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int fibonacci(int n)
{
	if(n==1||n==0)
	{
		return n;
	}

	else
		{
			return fibonacci(n-1)+fibonacci(n-2);
		}

}// function to find the fibonacci numbers

int main()
{
	int n;

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 11
Description: Program to 

*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int fibonacci(int n)
{
	if(n==1||n==0)
	{
		return n;
	}

	else
		{
			return fibonacci(n-1)+fibonacci(n-2);
		}

}// function to find the fibonacci numbers

int main()
{
	int n;
	printf("Please enter the number n: ");
	scanf(" %d",&n);
	printf("%d\n",n);
	 int i=0,x=0,flag=0;//declaration of variables
	
	while(x<=n)
	{
	
		x=fibonacci(i);
		if(x==n)
		{
			flag=1;
		}
		i++;
	}// loop tp check if a number belongs to the sequence
		
		if(flag==1)
		{
		printf("Yes");
		}
		else{printf("No");}
	

	return 0;
}
	printf("Please enter the number n: ");
	scanf(" %d",&n);
	printf("%d\n",n);
	 int i=0,x=0,flag=0;//declaration of variables
	
	while(x<=n)
	{
	
		x=fibonacci(i);
		if(x==n)
		{
			flag=1;
		}
		i++;
	}// loop tp check if a number belongs to the sequence
		
		if(flag==1)
		{
		printf("Yes");
		}
		else{printf("No");}
	

	return 0;
}