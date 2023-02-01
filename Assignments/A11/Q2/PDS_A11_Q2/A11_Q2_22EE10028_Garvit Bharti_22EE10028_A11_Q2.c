#include<stdio.h>
int fib(int n)
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
		return(fib(n-1)+fib(n-2));
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=20;i++)
	{
		if(fib(i)==n)
		{
			printf("Yes");
			return 0;
		}
	
	}
	printf("No");
	return 0;
	
}