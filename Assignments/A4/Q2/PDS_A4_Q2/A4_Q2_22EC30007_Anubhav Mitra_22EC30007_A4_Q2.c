/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 4
Description: Program to print sum of digits of a number. Found successive last digits using mod and then modified number for future iterations through dividing by 10. Handled negative case separately, and zero case through initial sum value of 0 (no need to enter loop or create separate conditional).
*/

#include <stdio.h>

int main() {
	long n;
	int sum = 0, sign = 1, digit; // initialising sign to be positive and sum to be zero in case of n = 0
	printf("Enter number the sum of whose digits are to be printed: ");
	scanf("%ld", &n);
	if (n < 0) {
		sign = -1; // handling negative entries
		n = -n;
	}
	while (n != 0) {
		digit = n % 10; // finding next digit
		n /= 10; // modifying n for future iterations
		sum += digit; // adding digit to sum
	}
	sum *= sign; // modifying sign of sum as per instructions
	printf("The sum of the digits is: %d", sum); // printing sum
	return 0;
}
