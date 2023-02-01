/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 11
 Description : write a fn to check whether a number belongs to fibonacci seq or not

 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long


int fib(int k)
{
	if(k==0)
	{
		return 0;
	}
	else if(k==1){
		return 1;
	}
	else
	{
		return fib(k-1)+fib(k-2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int flag=0;
	for(int i=0;i<13;i++)
	{
		if(n==fib(i))
		{
			flag=1;
			
			break;
		}

	}
	
	if(flag==1)
	{
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

}


