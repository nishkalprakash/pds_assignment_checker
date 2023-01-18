#include<stdio.h>
typedef struct{
 float real;
 float imag;
}complex;
complex add(complex z1,complex z2)
{
 complex z;
 z.real=(z1.real+z2.real);
 z.imag=(z1.imag+z2.imag);
 return z;
}; 
int main()
{
 complex z1,z2,z;
 printf("Enter the real part of z1:\n");
 scanf("%f",&z1.real);
 printf("Enter the imaginary part of z1:\n");
 scanf("%f",&z1.imag);
 printf("Enter the real part of z2:\n");
 scanf("%f",&z2.real);
 printf("Enter the imaginary part of z2:\n");
 scanf("%f",&z2.imag);
 z=add(z1,z2);
 printf("%f+%fi",z.real,z.imag);
 return 0;
}
  
