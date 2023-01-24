// Code creator: Abhishek Topwal

#include <stdio.h>

typedef struct complex
{
	float real; // real part of the complex number
	float imag; // imaginary part of the complex number
}complex;


/*****************************************************************************
 * Add 2 complex numbers
 * 
 * @param c1 first complex number
 * @param c2 second complex number
 * 
 * @return a complex number storig the sum of complex numbers c1 and c2
******************************************************************************/
complex add(complex c1, complex c2){
	complex Z;
	Z.real=c1.real+c2.real;
	Z.imag=c1.imag+c2.imag;
	return(Z);
}


int main(){
	complex Z1, Z2, Z;
	
	printf("Enter the real and imaginary part of Z1: ");
	scanf("%f %f", &Z1.real, &Z1.imag);
	printf("Enter the real and imaginary part of Z2: ");
	scanf("%f %f", &Z2.real, &Z2.imag);

	Z=add(Z1, Z2);
	if(Z.imag>=0)
		printf("The sum is Z = %.2f + %.2fi", Z.real, Z.imag);
	else
		printf("The sum is Z = %.2f %.2fi", Z.real, Z.imag);

	return 0;
}