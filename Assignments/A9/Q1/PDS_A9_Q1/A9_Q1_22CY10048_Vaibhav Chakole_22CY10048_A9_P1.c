/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 9
Description : addition of complex numbers
*/
#include<stdio.h>
typedef struct complex //defining structure
{
float real;
float imag;
}complex;
complex add(complex z1,complex z2) //function definitionss
{
complex z;
z.real=z1.real+z2.real;
z.imag=z1.imag+z2.imag;
return z; //returning complex number
}
int main()
{
complex z1,z2;
printf("Z1: ");
scanf("%f %f",&z1.real,&z1.imag);
printf("Z2: ");
scanf("%f %f",&z2.real,&z2.imag);
complex z=add(z1,z2); //function calling
printf("Z= %0.2f+%0.2fi", z.real,z.imag); //printing complex number
return 0;
}
