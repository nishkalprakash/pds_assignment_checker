/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 3(b)
*/

#include <stdio.h>
#include <stdlib.h>

struct Polynomial {
	// number of terms
	int num_terms;
	// array of coefficients
	int *coefficients;
	// array of exponents
	int *exponents;
};

// interprets a polynomial string `input` and returns a polynomial struct
struct Polynomial interpret_poly_string(char *input) {
	int i = 0;

	// create a new polynomial struct to return
	struct Polynomial P;

	// initialize number of terms to
	// 0 if it starts with a sign, since the sign will be counted in the loop
	// 1 if no sign at the beginning, since it won't be counted in the loop
	P.num_terms = (input[0] == '-' || input[0] == '+') ? 0 : 1;

	while (input[i] != '\0') {
		// count the number of occurences of `+` or `-` in the input and
		// increment num_terms for each one

		if (input[i] == '+' || input[i] == '-') P.num_terms += 1;

		i++;
	}

	// allocate arrays of size `num_terms` for the exponents and coefficients
	P.coefficients = (int*)calloc(P.num_terms, sizeof(int));
	P.exponents = (int*)calloc(P.num_terms, sizeof(int));

	/**
	 * ASSUMPTION: Each term has a coefficient explicitly writtent
	 * i.e., 1x^2 is written instead of x^2
	 *
	 * ASSUMPTION: Each term has exponent explicitly written
	 * i.e., 1x^1 is written instead of 1x
	 *
	 * ASSUMPTION: Term without `x` written explicitly has exponent 0
	 *
	 * ASSUMPTION: The first term's coefficient may or may not have the sign explicitly written
	 * i.e., 3x^2 and + 3x^2 are both interpreted.
	 */

	// index of the term currently being analyzed
	int term = 0;

	// traverse the string again
	// start at i = 1 if the first character is a `-`
	i = input[0] == '-' ? 1 : 0;

	// sign of the current term's coefficient
	// +1 or -1
	// -1 if the first character is a  minus, otherwise 0
	int sign = input[0] == '-' ? -1 : 1;

	// 1 if an exponent is being read
	// 0 if a coefficient is being read
	int read_exponent = 0;

	while (input[i] != '\0') {
		// current character being read in the string
		char c = input[i];

		// a `+` or `-` separates two terms, except at position 0 where a `+` need not exist
		if (c == '+' || c == '-') {
			// one term over, new term
			term++;

			// set sign of next term
			sign = c == '+' ? 1  : -1;

			// read next coefficient
			read_exponent = 0;
		}
		else if (c == 'x' || c == '^') {
			// start reading the exponent of this term
			read_exponent = 1;

			// do nothing this iteration
		}
		else {
			// if none of the above conditions are met
			// then the character must be a digit

			// find value of the character
			int value = c - '0';

			if (read_exponent) {
				// if exponent is being read, append the digit to the existing exponent
				P.exponents[term] *= 10;
				P.exponents[term] += value;
			}
			else {
				// if coefficient is being read, append the digit to the existing coefficient, with sign
				P.coefficients[term] *= 10;
				P.coefficients[term] += value * sign;
			}
		}

		// since calloc is used, exponent of last term will become 0 by default

		i++;
	}

	return P;
}

// prints a polynomial struct
void print_polynomaial(struct Polynomial P) {
	int i;

	// iterate over each term
	for (i = 0; i < P.num_terms; i++) {
		int coeff = P.coefficients[i];
		// coefficient sign
		char sign = coeff >= 0 ? '+' : '-';

		// absolute value of the coefficient
		coeff = coeff < 0 ? coeff * -1 : coeff;

		int exponent = P.exponents[i];

		// print term
		if (i == 0) printf("%c%dx^%d ", sign, coeff, exponent);
		else printf("%c %dx^%d ", sign, coeff, exponent);
	}

	printf("\n");
}

struct Polynomial multiply_polynomials(
	struct Polynomial P1,
	struct Polynomial P2
) {
	// final multiplied polynomial
	struct Polynomial O;

	// there can be at most P1.num_terms * P2.num_terms number of unique terms
	int *unique_exponents = (int*)calloc((P1.num_terms) * (P2.num_terms), sizeof(int));
	int *unique_coefficients = (int*)calloc((P1.num_terms) * (P2.num_terms), sizeof(int));
	int num_unique_terms = 0;

	// iterate each term P1 and P2
	int i, j, k;

	for (i = 0; i < P1.num_terms; i++) {
		for (j = 0; j < P2.num_terms; j++) {
			int term_exponent = P1.exponents[i] + P2.exponents[j];
			int term_coeff = P1.coefficients[i] * P2.coefficients[j];

			// check if this exponent exists in unique_exponents array
			// -1 if doesnt exist
			// index in the exponents array if it exists
			int exists = -1;
			for (k = 0; k < num_unique_terms; k++) {
				if (unique_exponents[k] == term_exponent) {
					exists = k;
					break;
				}
			}

			if (exists != -1) {
				// if it exists, increment the coefficient
				unique_coefficients[exists] += term_coeff;
			}
			else {
				// if it doesnt exist
				// add to the array
				// and increment num_unique_terms

				unique_exponents[num_unique_terms] = term_exponent;
				unique_coefficients[num_unique_terms] = term_coeff;

				num_unique_terms++;
			}
		}
	}

	// all the unique exponents and coefficients have been calculated
	// and are in the arrays
	// reallocate the arrays to reduce size to num_unique_terms
	// and assign to output struct
	O.num_terms = num_unique_terms;
	O.exponents = (int*)realloc(unique_exponents, num_unique_terms);
	O.coefficients = (int*)realloc(unique_coefficients, num_unique_terms);

	return O;
}

int main() {
	struct Polynomial inputs[2]; // input polynomials

	// input strings of max size 50
	char first[50];
	char second[50];

	printf("Enter the first polynomial: ");
	scanf("%s", first);

	printf("Enter the second polynomial: ");
	scanf("%s", second);

	inputs[0] = interpret_poly_string(first);
	inputs[1] = interpret_poly_string(second);

	struct Polynomial mult = multiply_polynomials(inputs[0], inputs[1]);

	printf("Multiplied polynomial: ");
	print_polynomaial(mult);

	return 0;
}