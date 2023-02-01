//Name BONTHU MATTHEWS 
//Roll No: 22PH10013 
// Assignment 11
#include <stdio.h>

int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else 
	{
		return  (fibo(n-1)+fibo(n-2));
	}
}
int main ( )
{
	int n,i;
	printf("enter the value of n  ");
	scanf("%d",&n);
	for(i=0;i<35;i++)
	{
		if(fibo(i)==n)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;

	
      
 }