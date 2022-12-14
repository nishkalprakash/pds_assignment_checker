/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Test:1
Question no:1
description:perfect number*/

#include <stdio.h>
int perfect(int n)
{
	int i;
	int sum=0;//sum of factors
	for(i=1;i<=n/2;i++)
	{
	     if(n%i==0)//check for divsors
	     {
	         sum=sum+i;//sum of divisors
	     }
	}
	if(sum==n)//if sum of divisors is equal to number then returns 1 else 0
	{
	    return 1;
	}
	else
	{
	    return 0;
	}
}
int main()
{
	int n;
	int flag=0;//variable to store value returned by function perfect
	printf("Enter number:");
	scanf("%d",&n);//accept number
	int i;
	int p=0;//becomes non zero if a perfect number is in range of n
        printf("Perfect numbers are:");
	for(i=1;i<=n;i++)
	{
	    flag=perfect (i);//call perfect
	    if(flag==1)
	    {
	       printf("%d ",i);
	       p=p+i;
	    }
	}
        printf("\n");//change line
	if(p==0)
	{
	   printf("Invalid Input\n");
	}
	return 0;
}
