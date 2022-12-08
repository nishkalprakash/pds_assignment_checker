/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 5
Description: Program to find pairs of primes from an array of five integers. A nested quadratic loop has been used on the entire array for each successive element, passing it into a pair function which uses a CoPrime function to check for gcd = 1 which in turn uses a gcd function employed using Euclid's algorithm. Since the return types of the given functions were void an additional argument has been passed to store the count of coprimes, if == 0 then the case of no coprimes has been printed.
*/

#include <stdio.h>

int coprime = 0; // globally declaring coprime count instead of inside main due to pass by reference issues (can also use pointer to pass by reference otherwise)

int gcd (int a, int b) { // gcd algorithm
	int temp;
	if (a > b) {
		int c = a;
		b = a;
		a = c;
	}
	while (b%a != 0) {
		temp = b % a;
		b = a;
		a = temp;
	}
	return a;
}
	

void CoPrime(int a, int b) {
	if (gcd(a,b) == 1) { 
		printf("%d and %d are Co-Prime\n", a, b); // printing in case gcd == 1
		coprime++; // also incrementing coprime count
	}
}

void pair(int arr[], int n) {
	for (int i = 0; i < n; i++) { // loops through the array
		for (int j = i + 1; j < n; j++) { // loops through the rest of the array to find pairs
			CoPrime(arr[i], arr[j]); // checking for coprimes per pair
		}
	}
}

int main() {
	int arr[5]; // initialising array
	for(int i = 0; i < 5; i++) {
		printf("Enter a positive integer: \n");
		scanf("%d", &arr[i]); // taking values as input
	}
	pair(arr, 5); // passing into function
	if (coprime == 0) printf("No Co-Prime found\n"); // case of no coprimes using variable "coprimes", acting similar to a flag variable
	return 0;
}

