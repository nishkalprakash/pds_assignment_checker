/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 3
	Description : Program to print a number in words
*/

#include <stdio.h>

int  main()
{
	int num;
	printf("Enter integer between (20 and 99)");
	scanf("%d",&num);
	if ((num<20) || (num>99))
		printf("\nInvalid input");
	int digU = num % 10;			// retrieves unit placed digit
	int digT = (num-digU)/10;		// retrieves tens placed digit 
	printf("Number in words is: \n");
	switch (digT)
	{
		case 2:
			printf("Twenty ");
			break;
		case 3:
			printf("Thirty ");
			break;
		case 4:
			printf("Fourty ");
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

	switch (digU)
	{
		case 0:
			printf(" ");
			break;
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
	return 0;

}



