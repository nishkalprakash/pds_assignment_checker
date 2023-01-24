/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 9
Description : Program to add two complex numbers*/

#include <stdio.h>

typedef struct{  //defining new structure called complex
	float real;
	float imag;
} complex;

complex add(complex a, complex b){  //function to add two complex numbers and return the sum
	complex c;
	c.real=a.real+b.real;
	c.imag=a.imag+b.imag;
	return c;
}

int main(){
	complex x, y, z;
	printf("Z1= ");
	scanf("%f %f", &x.real, &x.imag);
	printf("Z2= ");
	scanf("%f %f", &y.real, &y.imag);
	z=add(x,y);
	if (z.imag>=0) printf("Z= %.1f + %.1fi", z.real, z.imag);  //if statement to format the output appriopriately
	else printf("Z= %.1f %.1fi", z.real, z.imag);
	return 0;
}
