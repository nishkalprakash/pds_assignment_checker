/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 9
 *Description   : adding complex numbers
 */

#include<stdio.h>
typedef struct{
  float real;
  float imag;
}complex;

complex add(complex Z1,complex Z2)
{
 complex Z;
 Z.real=Z1.real+Z2.real;
 Z.imag=Z1.imag+Z2.imag;
 return Z;
}

int main()
{
  complex Z1,Z2,Z;
  printf("Enter Z1 :\n");
  scanf("%f %f",&Z1.real,&Z1.imag);
  printf("Enter Z2 :\n");
  scanf("%f %f",&Z2.real,&Z2.imag);
  Z=add(Z1,Z2);
  printf("The sum is %.1f + %.1fi",Z.real,Z.imag);
  return 0;
}
