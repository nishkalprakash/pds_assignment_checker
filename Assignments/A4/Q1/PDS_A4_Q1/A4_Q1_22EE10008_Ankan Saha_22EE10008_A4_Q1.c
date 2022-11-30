/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 4
Description : Program to display factors of a number
*/

#include <stdio.h>											// Includes the standard IO header file

int main() {

	int number;												// Declaring variables
	printf("Enter number :");
	scanf("%d", &number);									// Taking input

	if(number < 0) number = number * -1;					// If number is negative, convert it to positive integer

	if(number == 0) {										// Edge case - If number is 0, display 0 and exit 
		printf("0");
	}
	else {
		for(int i = 1; i<= number; i++) {					// Iterate i from 1 to 'number'
			if(number%i == 0) {								// If i divides 'number' then print i
				printf("%d ", i);
			}
		}
	}

	printf("\n");											// printf("\n"); for the terminal
	return 0;

}