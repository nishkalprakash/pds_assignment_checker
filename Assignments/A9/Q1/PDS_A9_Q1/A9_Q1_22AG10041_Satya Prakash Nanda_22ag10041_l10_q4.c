/*
SATYA PRAKASH NANDA
SECTION 14
22AG10041
LAB 10
QUESTION 4
*/
#include<stdio.h>
typedef struct complex{
	float real;
	float imag;
}complex;

void add(complex z1,complex z2);  // function declaration

int main(){
complex z1;
printf("enter real part of z1:");
scanf("%f", &z1.real);
printf("enter imaginary part of z1:"); // input of complex number 1
scanf("%f", &z1.imag);
complex z2;
printf("enter real part of z2:");
scanf("%f", &z2.real);
printf("enter imaginary part of z2:"); // input of complex number 2
scanf("%f", &z2.imag);
add(z1,z2);   					//function call

return 0;
}

void add(complex z1, complex z2){			//function definition
float a= z1.real + z2.real;
float b= z1.imag + z2.imag;
printf("z= %.1f + %.1fi\n",a,b);
}
