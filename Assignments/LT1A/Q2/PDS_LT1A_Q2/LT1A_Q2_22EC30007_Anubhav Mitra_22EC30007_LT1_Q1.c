/* Section 14
Name: Anubhav Mitra
Roll: 22EC30007
Test 1 Set A Q1
Description: Program to print given pattern. Control variables i and j have been used to indicate row and column numbers respectively. Count variable has been used to keep track of which element is to be printed. Note that count can also be found in terms of i and j, however, the post increment operator (++) is faster than computing the value for every iteration at the cost of one more int variable.
*/

#include <stdio.h>

int main() {
	int n; // initialising input variable
	printf("Enter an input in the range 2 to 10: \n"); 
	scanf("%d", &n); // taking number of rows as input
	int count = 1; // initialising count variable with 1, to be updated post printing each element
	for (int i = 1; i <= n; i++) { // running loop for row number
		for (int j = 1; j <= i; j++) { // running loop for numbers to be printed in that row, from 1 to i as i-th row has i elements
			printf("%d ", count++); // printing count element and updating the same 
		}
		printf("\n"); // printing new line after every row
	}
	return 0;
}
