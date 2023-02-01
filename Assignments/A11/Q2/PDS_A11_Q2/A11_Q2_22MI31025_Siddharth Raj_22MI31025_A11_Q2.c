/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:11
Question no:2
description:fibonacci*/

#include <stdio.h>
int fibo(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fibo(n-1)+fibo(n-2));//recursive call
}
int main()
{
	int i=0;
	int x=0;
	int n;
	int flag=0;//if element present 
	printf("Enter number:");
	scanf("%d",&n);//Enter number to be searched
	while(x<=n)
	{
		x=fibo(i);//stores element of ith index in the series
		if(x==n)
			flag=1;
		i++;
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
}