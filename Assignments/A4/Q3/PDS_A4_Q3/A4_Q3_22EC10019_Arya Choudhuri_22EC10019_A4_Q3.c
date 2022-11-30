/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to print reverse of a number in words
*/

#include <stdio.h>

int main()

{
	long long num;
	printf("Enter a positive number[0,9999999999]:\n");
	scanf("%lld",&num);

	if (num<0 || num>9999999999)
		printf("Invalid input");
	
	while (num>0)
	{
		int digit = num % 10;
		switch (digit)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;

			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		num = num/10;
	}
	return 0;
}

	

