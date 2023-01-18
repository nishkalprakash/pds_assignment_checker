/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 9
Description: Program to define struct for complex number with real and imaginary parts, add the two and store the sum in another complex number, and then print that number.

*/

#include <stdio.h>

typedef struct { // declaring complex structure
	float real;
	float imag; // declaring real and imaginary variables for respective parts of the complex number
} complex;

complex add (complex a, complex b) { // defining complex add function
	complex z; // declaring complex variable to be returned
	z.real = a.real + b.real; // adding real parts of the numbers for sum
	z.imag = a.imag + b.imag; // adding imaginary parts of the numbers for sum
	return z; // returning sum
}

int main() {
	complex z1, z2; // declaring complex numbers z1 and z2
	printf("Enter real part for z1: ");
	scanf("%f", &z1.real);
	printf("Enter imaginary part for z1: ");
	scanf("%f", &z1.imag);
	printf("Enter real part for z2: ");
	scanf("%f", &z2.real);
	printf("Enter imaginary part for z2: ");
	scanf("%f", &z2.imag); // taking values for z1 and z2
	complex z = add (z1, z2); // adding the two and storing them in z
	if (z.imag < 0) printf("Z = %f %fi", z.real, z.imag); // taking care of minus sign of imaginary part while printing to avoid arbitrary signs
	else printf("Z = %f + %fi", z.real, z.imag); // printing normally if imaginary part is >= 0
	return 0;
}
