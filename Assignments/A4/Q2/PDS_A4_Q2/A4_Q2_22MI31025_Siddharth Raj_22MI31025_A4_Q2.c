/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:4
description:sum of digits*/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);//accept a number from user     
	int sum=0;//sum of digits
	int d;//stores digit
	while (n!=0)
	{
	    d=n%10;//extract last digit
	    sum=sum + d;
	    n=n/10;//removes last digit
	} 
	printf("Sum of digits=%d \n",sum);//printing the sum
	return 0;
}
