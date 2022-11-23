/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 3
	Description : Inputting an operator from the user and performing the operation
*/
#include <stdio.h>

int main()
{
	printf("Enter the operator # and two operands a and b respectively to calculate a#b. # can be +,-,* and / for addition, subtraction, multiplication and division respectively\n");
	char c;
	float a, b;
	scanf("%c %f %f", &c, &a, &b);				//Inputs the operation and the two operands
	switch(c)
	{
		case '+':
			printf("%f + %f = %f \n", a, b, (a+b));
			break;

		case '-':
			printf("%f - %f = %f \n", a, b, (a-b));
			break;

		case '*':					/*Performs the operation as per user's choice and directly prints the same*/
			printf("%f * %f = %f \n", a, b, (a*b));
			break;

		case '/':
			printf("%f / %f = %f \n", a, b, (a/b));
			break;

		default:
			printf("Wrong Input!!!! \n");
	}
	return 0;
}
