/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 1(b)
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    int ones_digit = number % 10;
    int tens_digit = (number / 10) % 10;
    int hundreds_digit = (number / 100) % 10;

    int number_reversed = 100 * ones_digit + 10 * tens_digit + hundreds_digit;

    printf("Reverse number = %.3d\n", number_reversed);

    return 0;
}