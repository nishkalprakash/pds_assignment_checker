/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 6
Description : Printing series
*/

#include <stdio.h>																				// Includes the standard IO header file

int print_term(int n) {																			// function t find the nth term
	if(n<3) return n;																			// Defining base cases
	else return 3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) + 1;		// definition of the series, calling recursively
}

int main() {
	
	int n;																						// Declaring variables
	printf("Enter number of terms : ");
	scanf("%d", &n);

	if(n > 0) {																					// check if the input is valid
		for(int i = 0; i < n; i++) {
			printf("%d", print_term(i));
			if(i != n-1) {																		// this is for printing commas, it'll print commas untill it gets the last term
				printf(", ");
			}
		}
	}
	else {
		printf("Invalid input");
	}
	printf("\n");																				// 'slash n' for the terminal
	return 0;
}