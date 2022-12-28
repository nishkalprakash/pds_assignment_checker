/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 6
Description: Printing terms of a given recursive relation. A loop has been used inside main() for to iterate through each term of the sequence, while a recursive call to function print_term of void type prints the successive terms. Another function kth_term has been called to calculate the value of each term using recursion.
*/

#include <stdio.h>

int kth_term(int k) {

	// base case as given, returns definite value and breaks the recursion, now memory stack will be emptied in reverse direction
	if (k <= 2) return k;

	// recursive call as given
	int kth = 3 * kth_term(k-1) * kth_term(k-2) - 2 * kth_term(k-2) * kth_term(k-3) + 1;
	return kth; // returning the value of the kth term
}

void print_term(int k) {
	printf("%d", kth_term(k)); // print function of void type to print the terms inside main body
}	

int main() {

	int k;
	printf("Enter number of terms of the recurion to be printed:\n"); // prompting user to enter number of terms
	scanf("%d", &k); // storing number of terms in k

	if (k < 0) {
		printf("Invalid input"); // returning for irrelevant cases
		return 0;
	}

	for (int i = 0; i < k - 1; i++) { // running loop for k-1 cases with commas in output
		print_term(i);
		printf(", ");
	}

	print_term(k - 1); // separately printing kth term to avoid tailing comma (as shown in sample output)

	return 0;
}
