/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:4
description:factors*/

#include <stdio.h>
int main()
{
	int n;
        printf("Enter a number:");  
	scanf("%d",&n);//accept a number from user
	int i;//loop control variable
        if(n<0)//if number is negative it changes to positive to find factors
        {n=-n;}
	for(i=1;i<=n/2;i++)
	{
	     if(n%i==0)//check whether i is divisible by n or not if yes then it is a factor
	     {
	        printf("%d ",i);
	     }
	}
	printf("%d \n",n);//a number is always a factor of itself
	return 0;
}
