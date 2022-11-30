/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no 4
Description : Program to print sum of digits of a number
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n,sum=0;
	int i = 1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<(n+10))
	{
		sum = sum + (n%10);    //Finding the sum of digits
		n = n/10;
		i++;
	}
	printf("%d",sum);     //Printing the final sum
	return 0;
}
	
	
