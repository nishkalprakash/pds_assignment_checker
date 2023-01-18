/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 8
Description : Program to add two complex numbers.
*/

#include <stdio.h>

typedef struct complex {
	float real;
	float imag;
} complex;

int main()
{
   struct complex z1, z2, z3;
   /*printf("Enter real part of z1.\n");
   scanf("%f",&z1.real);
   printf("Enter imaginary part of z1.\n");
   scanf("%f",&z1.imag);
   printf("Enter real part of z2.\n");
   scanf("%f",&z2.real);
   printf("Enter imaginary part of z2.\n");
   scanf("%f",&z2.imag);*/
   printf("z1: ");
   scanf("%f %f",&z1.real,&z1.imag); 
   printf("\nz2: ");
   scanf("%f %f",&z2.real,&z2.imag); 


   z3.real= z1.real + z2.real;
   z3.imag= z1.imag + z2.imag;
   
   printf("Z = %f + %fi",z3.real,z3.imag);
   
   return 0;
}
