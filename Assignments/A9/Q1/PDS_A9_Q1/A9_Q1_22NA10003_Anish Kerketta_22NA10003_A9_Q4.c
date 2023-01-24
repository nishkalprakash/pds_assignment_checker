#include <stdio.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 9-4
Description:sum of 2 complex numbers*/

typedef struct complex {						//creating structure
float real;
float imag;
} complex;

complex add(complex z1,complex z2)					//function to add 2 complex numbers
{
	complex z3;
	z3.real=z1.real+z2.real;
	z3.imag=z1.imag+z2.imag;
	return z3;
}

void main()
{	
	complex z1,z2;							//declaring two complex variables					
	printf("Enter the value of Z1:");				
	scanf("%f %f",&z1.real,&z1.imag);
	printf("Enter the value of Z2:");
	scanf("%f %f",&z2.real,&z2.imag);
	complex z=add(z1,z2);						//calling a function
	if(z.imag>0)
	printf("%.1f + %.1fi\n",z.real,z.imag);				//write
	else
	printf("%.1f %.1fi\n",z.real,z.imag);				//write
}

