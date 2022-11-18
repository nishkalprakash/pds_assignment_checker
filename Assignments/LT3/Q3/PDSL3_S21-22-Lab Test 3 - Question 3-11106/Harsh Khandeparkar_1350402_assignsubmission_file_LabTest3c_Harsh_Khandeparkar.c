/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 3(c)
*/

#include <stdio.h>

// finds 5 dig numbers made of c and d  and not divisible by c + d
void find_numbers(
	// c
	int c,
	// d
	int d,
	// current number
	int num,
	// number of digits in the current number
	int num_dig
) {
	if (num_dig < 5) {
		// number of possible numbers = numbers with digit c as the next digit + numbers with digit d as the next digit
		find_numbers(c, d, num * 10 + c, num_dig + 1);
		find_numbers(c, d, num * 10 + d, num_dig + 1);
	}
	else {
		// if a 5 digit number has already been constructed, check if it satisfies the conditition
		// c, d are between 1 and 9 so c + d cannot be 0
		if ((num % (c + d)) != 0) printf("%d ", num);
	}
}

int main() {
	int c, d;

	printf("Enter two digits: ");
	scanf("%d %d", &c, &d);

	// assuming c and d are between 1 and 9

	printf("Numbers: \n");
	find_numbers(
		c,
		d,
		0, // initially number is 0
		0 // with 0 digits
	);
	printf("\n");

	return 0;
}