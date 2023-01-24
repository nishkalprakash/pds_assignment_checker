/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:9
description:adding two complex numbers
*/
#include<stdio.h>
typedef struct complex
{
float real;
float imag;
}complex;
complex add(complex z1,complex z2) //calutaing comlpex
{
complex z;
z.real=z1.real+z2.real;
z.imag=z1.imag+z2.imag;
return z;
}
int main()
{
complex z1,z2;
printf("z1  ");
scanf("%f %f",&z1.real,&z1.imag);
printf("z2  ");
scanf("%f %f",&z2.real,&z2.imag);
complex z=add(z1,z2);
printf("z=%f+ %fi",z.real,z.imag);
return 0;
}
