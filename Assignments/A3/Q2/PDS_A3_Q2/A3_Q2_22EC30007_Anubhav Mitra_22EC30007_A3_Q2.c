/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 3
Description: Printing a number in words provided it lies in range 20 to 99
*/

#include <stdio.h>

int main() {
	int x, tens, ones;
	printf("Enter a number between 20 and 99, inclusive: ");
	scanf("%d", &x);
	tens = x / 10; // creating tens digit
	ones = x % 10; // creating ones digit
	

	switch (tens) {
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
		// implementing switch for tens place
	}
	
	switch(ones) {
		case 1:
			printf("One");
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
		// implementing switch for ones place
	}

	return 0;

}
