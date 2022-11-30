/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 4
Description: Program to find the factors of an entered integer by looping through all natural numbers until the given one is reached. Here a simple for loop has been used. The cases for negative and zero entries have been handled as per instructions.
*/

#include <stdio.h>

int main() {
	int n;
	printf("Enter number whose factors are to be found: ");
	scanf("%d", &n); // taking input whose factors are to be found

	if (n < 0) {
		n = -n; // handling negative case
	}
	
	if (n == 0) {
		printf("0"); // handling zero case
	}
	else {
		for (int i = 1; i <= n; i++) { // creating linear loop
			if (n % i == 0) {
				printf("%d ", i); // printing factors after checking for same in each iteration of the loop
			}
		}
	}
	return 0;	
}
