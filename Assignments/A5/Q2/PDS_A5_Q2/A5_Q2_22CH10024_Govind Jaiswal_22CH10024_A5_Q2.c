/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no : 5
Description : Program to print co-prime numbers
*/

#include <stdio.h>

int gcd(int a,int b)
{
	int temp;
	while((a%b)!=0)
	temp = a%b;
	a=b;
	b=temp;
	return temp;
}

int main()
{	
	int x,y;
	printf("Enter two numbers");
	scanf("%d %d\n",&x,&y);
	if(gcd(x,y)==1)
	printf("%d and %d are Co-prime",x,y);
	else 
	printf("No Co-prime found");
	return 0;
}

