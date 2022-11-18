/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 2(b)
*/

#include <stdio.h>

int maxAlphaValue(
	int* S,
	int n
) {
	// iteration variables
	int i, k;
	// maximum alpha value found
	int max_alpha_value = 0;

	for (i = 0; i < n; i++) {
		int alpha_value = 0;

		for (k = 0; k < i; k++) {
			// if S[i] divides S[k] then increase alpha_value by one
			// also make sure divisor is not 0
			if (S[i] != 0) if (S[k] % S[i] == 0) alpha_value++;
		}

		// find the maximum alpha value
		max_alpha_value = max_alpha_value > alpha_value ? max_alpha_value : alpha_value;
	}

	return max_alpha_value;
}

/**
 * AMBIGUITY:
 * The question statement and the given example explanation are different.
 * According to the question, alpha value of Si is the number of indices k such that Sk divides Si
 *
 * According to the example, S5 = 2 divides 2,28,8 and hence its alpha value is 3. here 5 is k and it divides
 * three different Si and the number of indices i is the alpha value of Sk.
 * This is opposite of the question statement.
 *
 * I have assumed that alpha value is as given in the example explanation and not the question statement.
 * I have assumed this because the given sample input-outputs follow this.
 */

int main() {
	// take a sufficiently sized array S
	int S[50];
	// number of elements in the sequence
	int n;

	printf("Enter the number of elements, n, in the sequence: ");
	scanf("%d", &n);

	printf("Enter the n elements: ");

	int i;
	for (i = 0; i < n; i++) scanf("%d", &S[i]);

	printf("Maximum alpha value is: %d\n", maxAlphaValue(S, n));

	return 0;
}