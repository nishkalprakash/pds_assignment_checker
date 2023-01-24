/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 9
Program to add two complex numbers
*/
#include<stdio.h>
typedef struct{
   float real;
   float imag;
   }complex;
complex add(complex z1,complex z2)
    {
      complex s;
      s.real=z1.real+z2.real; //adding real part
      s.imag=z1.imag+z2.imag;  //adding imaginary part
      return s;
    }
int main()
   {
    complex a,b,sum;
    printf("Z1: ");
    scanf("%f %f",&a.real,&a.imag);  // input
    printf("Z2: ");
    scanf("%f %f",&b.real,&b.imag);
    sum=add(a,b);
    printf("%f + %fi",sum.real,sum.imag);  // printing sum
    return 0;
   }

