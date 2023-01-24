/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 9
 Description : write a program to add sum of two complex numbers
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

typedef struct complex{		//defining the sturct called complex
	float real;
	float imag;
} complex;

complex add(complex z1, complex z2){	//defining the add function
	complex z3;
	z3.real=z1.real+z2.real;
	z3.imag=z1.imag+z2.imag;
	return z3;
}
int main(){
	complex z1,z2;
	printf("Z1: ");
	scanf("%f",&z1.real);
	scanf("%f",&z1.imag);
	printf("Z2: ");
	scanf("%f",&z2.real);
	scanf("%f",&z2.imag);
	complex z;
	z=add(z1,z2);
	printf("Z = %0.1f + %0.1fi \n",z.real,z.imag);
	return 0;
}
