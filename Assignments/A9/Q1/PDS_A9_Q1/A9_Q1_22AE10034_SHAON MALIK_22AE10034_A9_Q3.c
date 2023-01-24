
/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :9
 Question No : 3
 Description: to add two complex numbers
*/

#include <stdio.h>

typedef struct complex{
	float real;
	float imag;
}complex;

complex add( complex z1,complex z2){
	complex z3;
	z3.real=z1.real + z2.real;
	z3.imag=z1.imag + z2.imag;
	return z3;
}

int main(){
	complex z1,z2;
	printf("Z1 :");
	scanf("%f %f",&z1.real,&z1.imag);
	printf("\nZ2 :");
	scanf("%f %f",&z2.real,&z2.imag);
	complex z3=add(z1,z2);
	printf( "Z = %f + %f i",z3.real,z3.imag);	
}