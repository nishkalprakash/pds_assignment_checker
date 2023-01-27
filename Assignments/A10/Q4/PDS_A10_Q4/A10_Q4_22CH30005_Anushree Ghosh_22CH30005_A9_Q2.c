/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 9
description:
*/

#include<stdio.h>

 //declaring the structure named complex
 typedef struct complex
{ 
 float real;
 float imag;
} complex;

//complex z1,z2;


 //creating a function add() which returns the sum of two complex numbers
void complexAdd(complex z1,complex z2)
{
 struct complex z;
 z.real=z1.real+z2.real;
 z.imag=z1.imag+z2.imag;
 printf("Z=%f +%fi",z.real,z.imag);
}
int main()
{
  struct complex z1,z2;
  printf("enter z1:");
  scanf("%f %f",&z1.real,&z1.imag);
  printf("enter z2:");
  scanf("%f %f",&z2.real,&z2.imag);
  //z1=valuez1();
  //z2=valuez2();
  complexAdd(z1,z2);

  return 0;
}
 
