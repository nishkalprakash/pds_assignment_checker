/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:9
Description:Program to display sum of complex number.
*/

#include<stdio.h>

typedef struct complex
{
	float real;
	float imag;
}complex;      //structure which contains real and imaginary part of complex number

void complex_add(complex z1,complex z2)      //function to add 2 complex numbers
{
	if(z1.imag+z2.imag<0)
		printf("Z = %f %fi",(z1.real+z2.real),(z1.imag+z2.imag));  //printing the added complex number
	else
		printf("Z = %f + %fi",(z1.real+z2.real),(z1.imag+z2.imag));
}
int main()
{
	complex x1,x2;
	printf("z1:");
	scanf("%f %f",&x1.real,&x1.imag);
	printf("z2:");
	scanf("%f %f",&x2.real,&x2.imag); //inputting two complex numbers
	complex_add(x1,x2); //calling function to add and print complex number
	return 0;
}