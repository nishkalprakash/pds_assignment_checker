/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 9
	Description : Program to add two complex numbers
*/

#include <stdio.h>

struct complex
{
	float real;
	float imag;
};

struct complex add (struct complex z1 , struct complex z2)
{
	struct complex tmp;
	tmp.real = z1.real + z2.real;
	tmp.imag = z1.imag + z2.imag;
	return tmp;
}

int main()
{
	struct complex z1,z2;
	
	printf("Enter real and imaginary parts of 1st complex number: ");
	scanf("%f%f" , &z1.real , &z1.imag);

	printf("Enter real and imaginary parts of 2nd complex number: ");
	scanf("%f%f" , &z2.real , &z2.imag);

	struct complex res = add( z1 , z2);

	printf("Sum of complex numbers\n");
	printf("Z = (%.3f) + (%.3fi)" , res.real , res.imag);

	return 0;
}
