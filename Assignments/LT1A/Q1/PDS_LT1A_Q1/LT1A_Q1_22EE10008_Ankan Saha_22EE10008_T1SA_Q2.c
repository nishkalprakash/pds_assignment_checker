/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Test 1 Set A
Description : Print perfect numbers smaller than or equal to the inputted number
*/

#include <stdio.h>											// Includes the standard IO header file

int check_perfect(int n) {
	int sum = 0;
	for(int i=1; i<=n/2; i++) {
		if(n%i == 0) {										// Find he divisors of n
			sum += i;										// Add the divisors of n to sum
		}
	}
	return n == sum;										// If sum equals the number, it is a perfect number
}

int main() {
	int number;												// Declaring variables
	printf("Enter the number : ");
	scanf("%d", &number);									// Taking input

	if(number < 2) {										// We don't want negative numbers
		printf("Invalid Input\n");
	}
	else {
		for(int i=2; i <=number; i++) {						// Iterate from 2 to n
			if(check_perfect(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");										// For keeping the terminal clean
	}
	return 0;
}