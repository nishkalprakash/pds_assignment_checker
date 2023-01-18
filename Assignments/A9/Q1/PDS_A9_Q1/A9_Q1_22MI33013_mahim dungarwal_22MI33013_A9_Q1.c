/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 9
*/


#include<stdio.h>

struct complex {
	float real;
	float imag;
};

float complex_add (struct complex z1 , struct complex z2) {

float real_sum = z1.real + z2.real;
float imag_sum = z1.imag + z2.imag;

printf("sum of the two complex no. is  %f + %fi",real_sum,imag_sum);

return 0;
}

int main() {



struct complex z1,z2;

printf("enter the values of z1 and z2 :");
scanf("%f", &z1.real);
scanf("%f", &z1.imag);
scanf("%f", &z2.real);
scanf("%f", &z2.imag);

complex_add(z1,z2);

return 0;
}




