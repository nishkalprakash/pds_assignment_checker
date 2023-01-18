/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 9
QUESTION : to find sum of two complex numbers

*/
#include<stdio.h>


//creating a complex structure
typedef struct complex{
	float real;
	float imag;

}complex;

//addition function returns complex datatype return the complex number after addition
complex add(complex z1,complex z2,complex z3){
	z3.real=z1.real+z2.real;
	z3.imag=z1.imag+z2.imag;		//access the member of structure using dot operator
	return z3;
}

int main(void){
	complex z1,z2;
	complex z3;
	printf("Z1 : ");
	scanf("%f %f",&z1.real,&z1.imag);	//scanning elements
	printf("Z2 : ");
	scanf("%f %f",&z2.real,&z2.imag);
	z3=add(z1,z2,z3);
	printf("Z = %.1f + %.1fi\n",z3.real,z3.imag); //printing the addition
		
	return 0;
}
