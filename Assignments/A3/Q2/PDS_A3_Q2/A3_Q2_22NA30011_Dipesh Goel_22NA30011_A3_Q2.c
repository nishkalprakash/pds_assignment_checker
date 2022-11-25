#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 3
	Description : The program checks that the entered time of a day is Valid or not

*/


int main()

{

	
	char tens_digit, units_digit;				//declaration of variable to store integer
	printf("Enter two-digit integer between 20 to 99 : ");
	scanf("%c%c",&tens_digit,&units_digit);			//input time from user
	
	//printf("tens %c",tens_digit);
	//printf("units %c",units_digit);

	switch (tens_digit)					// Checking for what's at ten's place
	{
		case '2': printf("Twenty "); break;
		case '3': printf("Thirty "); break;
		case '4': printf("Forty "); break;
		case '5': printf("Fifty "); break;
		case '6': printf("Sixty "); break;
		case '7': printf("Seventy "); break;
		case '8': printf("Eighty "); break;
		case '9': printf("Ninety "); break;
		default: printf("Invalid Input!! Enter number between 20 to 99");
	}

	switch (units_digit)					// Checking for what's at unit's place
	{
		case '0': break;
		case '1': printf("One"); break;
		case '2': printf("Two"); break;
		case '3': printf("Three"); break;
		case '4': printf("Four"); break;
		case '5': printf("Five"); break;
		case '6': printf("Six"); break;
		case '7': printf("Seven"); break;
		case '8': printf("Eight"); break;
		case '9': printf("Nine"); break;
		default: printf("Invalid Input!! Enter number between 20 to 99");
	}

	//printf("%c %c", tens_digit, units_digit);


	return 0;
}

