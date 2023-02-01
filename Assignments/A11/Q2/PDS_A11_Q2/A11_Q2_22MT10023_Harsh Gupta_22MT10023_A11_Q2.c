/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 11
 Description : Program that checks whether a number is present in fibonacci series or not recursively
*/
#include <stdio.h>
#include <stdlib.h>
int c=0;				//declaring a global variable c=0

int Fibonacci(int n,int a,int b)
{
	if(c==n)					//if c becomes equal to n then return 1 as the number is found in the series
		return 1;	
	if(c>n)						//if c becomes greater than n then return 0 as the number is not found in the series
		return 0;
	c=a+b;							
	a=b;	
	return Fibonacci(n,a,c);			//recursion of Fibonacci
	
}
int main()
{
	int n;						//declaring a variable n
	printf("Enter the number: ");			//prompting the user for input
	scanf("%d",&n);					//taking the input
	if(Fibonacci(n,0,1))				//if return value of Fibonacci == 1 the print YES or else print NO
		printf("YES\n");
	else
		printf("NO\n");
	return 0;					//int main function returns 0
}
