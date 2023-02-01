/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 11
Description: Recursive implementation of a program to print the sum of a harmonic series up to n terms. A simple linear recursion of O(N) has been used. 
Further details given alongside respective parts of the program.

*/

#include <stdio.h>

float sum (int n) { // returns harmonic sum in float data type

	if (n == 0) return 0; // base case, of n == 0, once this is triggered, n runs from 1 to n in the function call stack (reverse order) and keeps incrementing the sum to be returned
	return sum (n - 1) + (1.0) / n; // recursive call, current term value plus sum up to n - 1 terms

}

int main() {
	int n; // creating variable
	printf("Enter number of terms: ");
	scanf("%d", &n); // storing number of terms
	float harmonicsum = sum (n); /// calling recursive function for harmonic sum
	printf("The sum of the harmonic progression upto the given number of terms is: %.3f\n", harmonicsum); // printing sum up to 3 places as shown in the test cases
	return 0;
}