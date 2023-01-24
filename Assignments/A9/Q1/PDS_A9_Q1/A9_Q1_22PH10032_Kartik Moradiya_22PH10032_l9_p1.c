#include<stdio.h>

 typedef struct complex{
  float real;
  float imag;
 } complex;
 
 void add(complex z1, complex z2);
 
 int main()
 {
  complex z1;
  complex z2;
  printf("enter complex number 1:");
  scanf("%f",&z1.real);
  scanf("%f",&z1.imag);
  printf("enter complex number 2:");
  scanf("%f",&z2.real);
  scanf("%f",&z2.imag);
  
 add(z1,z2);
 return 0;
 }
 
 void add(complex z1,complex z2){
  complex z;
  z.real = z1.real +z2.real;
  z.imag = z1.imag + z2.imag;
  printf(" sum z=%f + %fi \n",z.real,z.imag);

 
 }
