/*
Section 14
Roll No : 22CS30010
Name : Ankan Saha
Assignment No : 3
Description : Calculator program that evaluates expression given in a certain format
*/

#include <stdio.h>															// Including the Standard IO header file

int main() {

	float op1, op2;															// Declaring variables
	char operator;

	printf("Input format - <operator> <1st number> <2nd number> : ");
	scanf("%c %f %f", &operator, &op1, &op2);								// Taking input

	switch (operator) {														// Switch case for operator

		case '+':
			printf("%f", op1 + op2);
			break;

		case '-':
			printf("%f", op1 - op2);
			break;

		case '*':
			printf("%f", op1 * op2);
			break;

		case '/':
			if(op2 == 0) {							// Preventing Zero Division Error
				printf("Can't divide by 0");
				break;
			}

			printf("%f", op1 / op2);
			break;

		default:									// If other operators are used, show 'invalid operator'
			printf("Invalid operator");
	}

	printf("\n");									// Just a quality of life (QOL) print("\n")
	return 0;
}