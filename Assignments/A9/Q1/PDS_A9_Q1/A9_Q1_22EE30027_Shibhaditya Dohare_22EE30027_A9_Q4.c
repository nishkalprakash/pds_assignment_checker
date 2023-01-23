
/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 9
Discription : To find sum of complex numbers
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct complex{    		//new data type complex declared
	float real;
	float imag;
}complex;
complex readco(){  			//reads the imaginary number
	complex a;
	scanf("%f",&a.real);
	scanf("%f",&a.imag);
	return a;
}
complex add(complex z1,complex z2){	//adds the imaginary numbers
	complex z;
	z.real=z1.real+z2.real;
	z.imag=z1.imag+z2.imag;
return z;				//returns the sum
}
int main(){			
	complex z1,z2,z;	
	printf("z1: ");
	z1=readco();			
	printf("z2: ");
	z2=readco();	
	z=add(z1,z2);			//new complex number 
	printf("z = %0.1f + %0.1fi", z.real, z.imag);
return 0;}
