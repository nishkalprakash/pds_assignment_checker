/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 9
Description : Program to add two complex numbers
*/

#include<stdio.h>

typedef struct complex{
	float real;
	float imag;
}complex;

complex add(complex z1,complex z2)
{
	complex temp;
	temp.real = z1.real + z2.real;
	temp.imag = z1.imag + z2.imag;
	return temp;
}

int main()
{
	complex z1;
	complex z2;

	printf("z1: ");
	scanf("%f %f",&z1.real,&z1.imag);
	printf("z2: ");
	scanf("%f %f",&z2.real,&z2.imag);

	complex z = add(z1,z2);


	printf("%f ",z.real);
	if(z.imag > 0)
		printf("+ ");

	printf("%fi\n",z.imag);

	return 0;
}
