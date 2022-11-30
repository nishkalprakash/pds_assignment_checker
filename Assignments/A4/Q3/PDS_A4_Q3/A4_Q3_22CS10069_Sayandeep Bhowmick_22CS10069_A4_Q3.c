/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Prints the digits of a number as words in the reverse direction
*/
#include <stdio.h>

int main()
{
	long long num;
	printf("Enter a number\n");
	scanf("%lld", &num);
	if(num<0 || num>10000000000)
	{
		printf("Wrong Input!!!!\n");
		return 0;
	}
	if (num==0)
		printf("Zero");
	while(num>0)
	{
		switch(num%10)
		{
			case 0:
				printf("Zero ");						//checks the last digit and prints it in words
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
		num/=10;
	}
	printf("\n");
	return 0;
}
