/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Test 1 Set A
Description : Printing pattern (making triangle with numbers till the nth triangle number)
*/

#include <stdio.h>											// Includes the standard IO header file

int main() {
	int n;													// Declaring variables
	printf("Input : ");
	scanf("%d", &n);										// Taking input

	int counter = 1;										// This will be the variable that we will be printing to the screen, it'll increment with each iteration

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {							// To make a triangle, we need to iterate j from 1 till i
			printf("%d ", counter);
			counter++;
		}
		printf("\n");										// This is to start a new row after 1 row is printed (that is after j equals i)
	}
	return 0;
}