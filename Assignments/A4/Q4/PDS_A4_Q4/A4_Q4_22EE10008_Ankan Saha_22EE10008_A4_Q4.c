/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 4
Description : Pattern printing
*/

#include <stdio.h>											// Includes the standard IO header file

int main() {

	int n, row, col;										// Declaring variables, n contains the desired number of rows
	printf("Enter number of rows : ");
	scanf("%d", &n);										// Inputting variables

	for (row=1; row<=n; row++) {
		for (col=1; col<=row; col++) {						// 'col' goes from 1 to 'rows' as its a triangle pattern
			/*
			1st position has 1, 2nd has 0, 3rd has 1, 4th has 0... and so on
			So the odd places have 1 and even have 0
			Then, we can find remainder of 'col' when its divided by 2 and print the remainder (this is my logic)
			*/
			printf("%d ", col%2);
		}
		printf("\n");										// Newline to print new row
	}
	return 0;												// No extra printf("\n") this time as its already taken care f by the previous newline
}