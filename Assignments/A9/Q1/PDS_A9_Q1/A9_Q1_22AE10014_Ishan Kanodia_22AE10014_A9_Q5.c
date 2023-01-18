/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 9
Question No. : 5
Description : Adding two complex numbers
*/

#include<stdio.h>

typedef struct complex{					//Defining a structure for our complex number named as complex
	float real;
	float complex;
}complex;

complex add(complex Z1,complex Z2){			//Defining a function tp add the real and complex parts of the number
	complex Z3;
	Z3.real=Z2.real+Z1.real;
	Z3.complex=Z2.complex+Z1.complex;
return(Z3);
}

int main(){
	struct complex Z1,Z2,Z3;			//Declaring variables
	printf("Z1: ");
	scanf("%f %f",&Z1.real,&Z1.complex);
	printf("Z2: ");
	scanf("%f %f",&Z2.real,&Z2.complex);
	Z3=add(Z1,Z2);					//Function call
	printf("Z = %f + %fi ",Z3.real,Z3.complex);
return 0;
}
