/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 4
Description: Program to print a simple pattern. Total rows have been taken as input from user. A nested loop has been used to control both the row number as well as the column number. To alternate between 1 and 0 mod 2 has been used.
*/

#include <stdio.h>

int main() {
	int n, digit = 1; // initialising variables
	printf("Enter number of rows: " );
	scanf("%d", &n); // taking input
	for (int row = 1; row <= n; row++) { // creating control variable for row number
		for (int col = 1; col <= row; col++) { // creating control variable for column number
			printf("%d", digit++); // printing digit, also modifying for next step
			digit %= 2; // changing it by taking mod 2 to alternate between 0 and 1
		}
		digit = 1; // reset digit to 1
		printf("\n"); // print new line after every row to maintain pattern
	}
	return 0;
}



