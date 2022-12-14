/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Lab test 1 : Set-A
Description : Program to find a perfect number(a number which is equal to the sum of its divisors except itself)
*/
 
#include <stdio.h>

int main()
{
	int i,n,sum=0;
	printf("Enter a number to check if it is perfect or not :\n");
	scanf("%d",&n);    //Asking the user for number input
	if (n <=1)
	printf("Invalid Input\n");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum = sum +i;
	}
	if(sum == n)
	printf("%d is a perfect number\n",n);    //Displaying the final result
	else 
	printf("%d is not a perfect number",n);
	return 0;
}
