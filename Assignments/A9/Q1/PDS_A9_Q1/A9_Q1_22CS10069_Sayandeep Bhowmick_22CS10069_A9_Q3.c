/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 9
	Description : Add two complex numbers
*/
#include <stdio.h>

typedef struct complex
{
	float real;
	float imag;
}complex;

complex add(complex z1, complex z2)
{
	complex z3;

	z3.real= z1.real + z2.real;		//Adds real part
	z3.imag= z1.imag + z2.imag;		//Adds complex part

	return z3;
}


int main()
{
	complex Z1, Z2, Z3;

	printf("Enter the real and imaginary part of the first complex number : ");
	scanf("%f%f", &Z1.real, &Z1.imag);

	printf("Enter the real and imaginary part of the second complex number : ");
	scanf("%f%f", &Z2.real, &Z2.imag);

	Z3= add(Z1,Z2);		//stores sum returned by function

	printf("The sum Z =%.2f%+.2fi\n",Z3.real, Z3.imag );

	return 0;
}