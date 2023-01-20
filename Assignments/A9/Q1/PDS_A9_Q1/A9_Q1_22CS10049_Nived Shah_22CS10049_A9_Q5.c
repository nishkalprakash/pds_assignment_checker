
/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 9
Description: adding 2 complex numbers
*/

#include <stdio.h>

//structure definition
typedef struct complex
{
	float real;
	float imag;
}complex;

//function that returns a complex type data
complex add(complex c1, complex c2){
	complex Zt;
	Zt.real=c1.real+c2.real;
	Zt.imag=c1.imag+c2.imag;
	return(Zt);
}

int main(){
	complex z1, z2, Z;
	
	printf("z1: ");
	scanf("%f %f", &z1.real, &z1.imag);
	printf("z2: ");
	scanf("%f %f", &z2.real, &z2.imag);

	Z=add(z1, z2);
	if(Z.imag>0)
		printf("Z = %f + %fi", Z.real, Z.imag);
	else
		//formatted printing in case of negative imag part
		printf("Z = %f %fi", Z.real, Z.imag);

	return 0;
}