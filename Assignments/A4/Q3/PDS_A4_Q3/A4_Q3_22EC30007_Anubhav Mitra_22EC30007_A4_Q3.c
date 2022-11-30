/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 4
Description: Program to print a number in reverse with words. Used long to store entry to accomodate all values in given range. Used mod and divide by 10 to find successive digits (same as previous program). Used switch cases to print in words as per last digit. Do while loop helps deal with zero entry without checking separately.
*/

#include <stdio.h>

int main() {
	int digit;
	long n; // initialising variables, n in long to accomodate given range
	printf("Enter number which is to be printed in reverse in words: ");
	scanf("%ld", &n); // receiving input
	do {
		digit = n % 10;
		n /= 10; // finding successive digits
		switch(digit) {
			case 0:
				printf("Zero ");
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
			} // switch for finding corresponding words to digits
	} while (n != 0); // do while loop to keep iterating until n reaches zero
	return 0;
}
