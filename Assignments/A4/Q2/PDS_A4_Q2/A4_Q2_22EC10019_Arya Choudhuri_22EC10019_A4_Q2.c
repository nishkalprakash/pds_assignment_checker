/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to print the sum of digits of a number 
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	int sum = 0;
	
	while (num!=0)
	{
		int digit = num%10;
		sum += digit;
		num = num/10;
	}
	
	printf("Sum of digits is\n%d",sum);
	
	return 0;
}



