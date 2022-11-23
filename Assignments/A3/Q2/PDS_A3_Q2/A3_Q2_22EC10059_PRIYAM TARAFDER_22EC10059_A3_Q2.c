/*
	section:14
	roll no.: 22EC10059
	name: PRIYAM TARAFDER
	Assignment no.: 3
	description: displays a number in written format
*/
#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num>19 && num<100)
	{
		switch(num/10)
		{
		case 2:
			printf("Twenty ");
			break;
		case 3:
			printf("Thirty ");
			break;
		case 4:
			printf("Forty ");
			break;
		case 5:
			printf("Fifty ");
			break;
		case 6:
			printf("Sixty ");
			break;
		case 7:
			printf("Seventy ");
			break;
		case 8:
			printf("Eighty ");
			break;
		case 9:
			printf("Ninety ");
			break;
		}
		switch(num%10)
		{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		}
	}
	else
		printf("Invalid number");
}


