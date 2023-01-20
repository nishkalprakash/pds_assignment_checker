
#include<stdio.h>
typedef struct complex
{
float real;
float imag;
}complex;
struct complex_nos
{
complex Z1;
complex Z2;
};
complex add(complex z1,complex z2)
{
complex temp;
temp.real=z1.real+z2.real;
temp.imag=z1.imag+z2.imag;
return temp;
}
int main()
{
struct complex_nos c,x;
printf("Enter the real part of the first complex number = ");
scanf("%f",&c.Z1.real);
printf("Enter the imaginary part of the first complex number = ");
scanf("%f",&c.Z1.imag);
printf("Enter the real part of the second complex number = ");
scanf("%f",&c.Z2.real);
printf("Enter the imaginary part of the second complex number = ");
scanf("%f",&c.Z2.imag);
printf("The sum of the two complex numbers = %f %f", add(c.Z1,c.Z2).real,add(c.Z1,c.Z2).imag);
return 0;
}



