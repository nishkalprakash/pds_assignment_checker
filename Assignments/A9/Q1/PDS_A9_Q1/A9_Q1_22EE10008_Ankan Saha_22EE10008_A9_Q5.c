/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 9
Description : Sum of two complex numbers with structures
*/

#include <stdio.h>											// Includes the standard IO header file

typedef struct complex{										// typedef-ing a structure complex to the type complex
	float real;
	float imag;
} complex;

complex add(complex z1, complex z2){						// add function
	complex z;
	z.real = z1.real + z2.real;								// add real
	z.imag = z1.imag + z2.imag;								// add imag
	return z;
}

int main() {
	complex z1, z2, z;										// variables
	printf("z1 : ");										// taking input
	scanf("%f %f", &z1.real, &z1.imag);
	printf("z2 : ");
	scanf("%f %f", &z2.real, &z2.imag);
	z = add(z1, z2);
	printf("%f %s%fi\n", z.real, z.imag >= 0 ? "+ " : "", z.imag);		// printing
	
	return 0;
}