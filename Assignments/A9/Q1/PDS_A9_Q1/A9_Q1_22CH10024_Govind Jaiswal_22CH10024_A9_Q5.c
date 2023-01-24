/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 9
Description : Program to compute sum of two complex numbers
*/

#include <stdio.h>

typedef struct complex     //declaring a structure for storing real and imaginary parts of a complex number
{
	float real;
	float imag;
}complex;

complex sum(complex z1,complex z2)    //function for evaluating the summation complex number
{
	complex s;
	s.real = z1.real + z2.real;
	s.imag = z1.imag + z2.imag;
	return s;
}

int main()
{
	complex z1,z2;    //declaring the two requires structure variables
	printf("Enter the 1st complex numbers:");
	scanf("%f%f",&z1.real,&z1.imag);
	printf("\nz1 : %.1f %.1f \n",z1.real,z1.imag);
	printf("\nEnter the 2nd complex numbers:");
	scanf("%f%f",&z2.real,&z2.imag);
	printf("\nz2 : %.1f %.1f \n",z2.real,z2.imag);   //reading values of both complex numbers
	
	complex SUM = sum(z1,z2);     //calling the function sum
	printf("Z = %.1f + %.1fi\n",SUM.real,SUM.imag);    //printing the sum 
}

