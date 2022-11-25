/*
Section 14
Roll No : 22CS30010
Name : Ankan Saha
Assignment No : 3
Description : A program to convert a number to its word representation
*/

#include <stdio.h>										// Including the Standard IO header file

int main() {

	int input, tens, ones;								// Declaring variables

	printf("Enter integer between 20 and 99 : ");
	scanf("%d", &input);								// Taking input from the user

	if(input < 20 || input > 99) {						// Check if input is between 20 and 99
														// else show "Invalid input"
		printf("Invalid input");
		return 0;

	}

	tens = input / 10;									// Tens digit can be found by dividing input by 10
	ones = input % 10;									// Units digit can be found by taking the remainder when input is divided by 10

	switch (tens) {										// Switch case of 'tens' variable

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

	switch (ones) {										// Switch case of 'ones' variable

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