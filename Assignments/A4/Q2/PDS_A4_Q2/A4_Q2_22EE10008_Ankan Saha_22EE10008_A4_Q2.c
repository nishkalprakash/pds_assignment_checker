/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 4
Description : Program to calculate sum of digits
*/

#include <stdio.h>											// Includes the standard IO header file

int main() {

	int number, sum=0;										// Declaring variables
	printf("Enter number : ");
	scanf("%d", &number);									// Inputing values

	/*
	Let the number be 123
	To find the sum, what we can do is -
	Take 3 to sum and divide number by 10, so it becomes 12, then sum = 3
	Take 2 to sum and divide number by 10, so it becomes 1, then sum = 5
	Take 1 to sum and divide number by 10, so it becomes 0, then sum= 6
	*/
	while(number != 0) {									// Implementing the above logic
		sum += number%10;
		number = number/10;
	}

	printf("The sum of digits is %d\n", sum);				// Printing values, and a little '\n' for the terminal people
	return 0;

}