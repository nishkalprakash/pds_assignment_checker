/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:11
description:checking the numbers are in fibonacci sequence or not.
*/
#include<stdio.h> //including package
int a(int n)
{
	int sum=0;
	if(n==0)sum=0;    //taking condition
	else if (n==1)sum=1;
	else sum=a(n-1)+a(n-2);
	return sum;
}
int main()
{
	int n,t;
	printf("enter value of n:");
	scanf("%d",&n);
	for (int i=0;i<=(1+n);i++)
	{
		if(a(i)==n)
		{
			t=1;
			break;
		}
		else
		t=0;
	}
		if(t)
		printf("yes\n");
		else
		printf("no\n");
		return 0;
}
