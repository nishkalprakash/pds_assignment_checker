/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	Assign: 5(a)
*/

#include <stdio.h>

void non_dec(
	int *a,
	int *b,
	int *c
) {
	int temp;

	// find the least between a and b and put it in a
	if (*b < *a) {
		temp = *b;
		*b = *a;
		*a = temp;
	}

	// find the least between a and c and put it in a
	if (*c < *a) {
		temp = *c;
		*c = *a;
		*a = temp;
	}

	// by now, a has the least value
	// find the least between b and c and put it in b
	if (*c < *b) {
		temp = *c;
		*c = *b;
		*b = temp;
	}

	// all three numbers are in non-decreasing order now
}

int main() {
	// inputs
	int a, b, c;

	printf("Enter the three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	// print values before function call
	printf("---Before function call---\n");
	printf("Address of a = %d\n", &a);
	printf("Address of b = %d\n", &b);
	printf("Address of c = %d\n", &c);
	printf("Values in a, b, c = %d, %d, %d\n", a, b, c);

	// function call
	non_dec(&a, &b, &c);

	// print values after function call
	printf("\n---After function call---\n");
	printf("Address of a = %d\n", &a);
	printf("Address of b = %d\n", &b);
	printf("Address of c = %d\n", &c);
	printf("Values in a, b, c = %d, %d, %d\n", a, b, c);

	return 0;
}