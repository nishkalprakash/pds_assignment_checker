/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 4
Description : Program to calculate approximate root of an univariate cubic polynimial
*/

/* To compile use : gcc 22EE10008_A4_Q5.c -lm*/


#include <stdio.h>												// Includes the standard IO header file
#include <math.h>												// Math library for pow() function

int main() {

	int x3, x2, x1, x0;											// Variables storing the values of coefficients of powers of x
	double a=0, b=0;											// Given b > a and p(a).p(b) < 0 (i.e are of opposite signs), where p() is the polynomial
	double c, pa, pb, pc;										// c is the approximate root, pa, pb, pc are values of function p() at a, b, c respectively

	printf("Enter coefficient of x^0: ");
	scanf("%d", &x0);

	printf("Enter coefficient of x^1: ");
	scanf("%d", &x1);

	printf("Enter coefficient of x^2: ");
	scanf("%d", &x2);

	printf("Enter coefficient of x^3: ");
	scanf("%d", &x3);

	while (1){													// Initialising a and b
		pa = pow(a,3)*x3 + pow(a,2)*x2 + a*x1 + x0;				// p(a)
		pb = pow(b,3)*x3 + pow(b,2)*x2 + b*x1 + x0;				// p(b)
		if(pa*pb < 0) break;
		a--;
		b++;
	}

	while(1) {
		c = b - pb * (b - a)/(pb - pa);							// Found using straight line formula; (y-b) = (p(b)-p(a))/(b-a) * (x-b)
																// Put y=0 (x-axis) to find x, which is c in this case

		pc = pow(c,3)*x3 + pow(c,2)*x2 + c*x1 + x0;				// p(c)

		if(pc < 0.001) {										// Exits of p(c) < 0.001 (approximation of root)
			printf("Root of the polynomial: %f\n", c);
			break;
		}
		if(pc*pa > 0.0) {										// If p(a) and p(c) are of same sign, update a to c
			a = c;
		}
		else {													// If p(b) and p(c) are of same sign, update b to c
			b = c;
		}
		pa = pow(a,3)*x3 + pow(a,2)*x2 + a*x1 + x0;
		pb = pow(b,3)*x3 + pow(b,2)*x2 + b*x1 + x0;
	}
	return 0;													// No printf("\n") because I did it in the last printf() line

}