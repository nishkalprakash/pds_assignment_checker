
/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 9
Description : Program to add complex numbers
*/
#include <stdio.h>
#include<stdlib.h>
typedef struct{
	float real;
	float imag;
} complex; //structure for complex number
complex z1,z2;
complex add(complex a, complex b){
	complex c;
	//adding real parts and imag parts individually
	c.real=a.real+b.real;
	c.imag=a.imag+b.imag;
	return c;
}
int main(){
	complex z1,z2,c;
	printf("Z1: ");
	scanf("%f %f", &z1.real,&z1.imag);
	printf("Z2: ");
	scanf("%f %f", &z2.real,&z2.imag);
	c=add(z1,z2); 
	//taking mod for correct formatting
	if(c.imag>=0)  printf("Z = %3.2f + %0.2fi \n", c.real,c.imag);
	else printf("Z = %3.2f - %0.2fi \n", c.real,(-c.imag));
	return 0;
}