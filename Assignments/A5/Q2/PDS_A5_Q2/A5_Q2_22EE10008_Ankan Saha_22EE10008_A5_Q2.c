/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 5
Description : Find Co-Primes from an array of integers
*/

#include <stdio.h>											// Includes the standard IO header file

int flag = 0;												// global variable to check if there has been any Co-Primes, 0 represents no Co-Primes and 1 represent atleast 1 Co-Prime

int gcd(int a, int b) {										// function to calculate gcd of 2 numbers
	int least = a < b? a : b;								// taking the least number as its useless to loop till the bigger number (because the smaller number can't have factors greater than itself), hence saving a bit of time and a bit of computing power (and energy)
	int gcd = 1;
	for (int i = 1; i<=least; i++) {
		if (a%i == 0 && b%i == 0){							// if i divides both a and b, then it is gcd (for now)
			gcd = i;
		}
	}
	return gcd;
}

void CoPrime(int a, int b) {								// function to check if 2 numbers are Co-Prime or not
	if (gcd(a, b) == 1) {
		printf("%d and %d are Co-Prime\n", a, b);
		flag = 1;											// set flag to 1, i.e. atleast 1 Co-Prime is found
	}
}

void pair(int a[]) {										// function to make pairs and check if they are Co-Prime
	for (int i = 0; i<5; i++) {
		for (int j = i; j<5; j++) {							// making pairs, it first takes one number (stating from index 0) and pairs it with the other numbers (with index > 0) and repeats this process
			CoPrime(a[i], a[j]);							// calling CoPrime function to check for Co-Prime-ness of the pair of numbers
		}
	}
	if(flag == 0) {											// If no Co-Primes are found
		printf("No Co-Prime found\n");
	}
}


int main() {
	int arr[5];												// initializing array to take input, given 'reads 5 integers' so MAX_SIZE is taken as 5

	printf("Enter 5 numbers : ");
	scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);			// taking input from the user and storing it in the array

	pair(arr);												// calling pair() function

	return 0;
}