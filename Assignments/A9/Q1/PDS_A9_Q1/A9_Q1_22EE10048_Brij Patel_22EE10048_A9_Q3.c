/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 9

Description-ADDING COMPLEX NUMBERS
*/
#include<stdio.h>//INCLUDING PACKAGES
typedef struct complex//DEFINING STRUCTURES
{
float real;
float imag;
}complex;
complex add(complex z1,complex z2)//METHOD TO ADD COMPLEX NUMBERS
{
complex z;
z.real=z1.real+z2.real;
z.imag=z1.imag+z2.imag;
return z;
}
int main()//MAIN METHOD
{
complex z1,z2;
printf("Z1: ");
scanf("%f %f",&z1.real,&z1.imag);
printf("Z2: ");
scanf("%f %f",&z2.real,&z2.imag);

complex z=add(z1,z2);
printf("Z= %f + %fi",z.real,z.imag);//PRINTING SUM OF IMAGINARY NUMBERS
return 0;
}
