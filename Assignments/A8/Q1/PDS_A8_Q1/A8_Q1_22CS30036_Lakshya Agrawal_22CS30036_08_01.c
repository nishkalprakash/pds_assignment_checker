/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 8
Description : Structure Application
*/

#include<stdio.h>
#include<math.h>

typedef struct Complex{
  float real;
  float imag;
} complex;

complex add(complex z1,complex z2)
{
    complex z3;
    z3.real = z1.real+z2.real;
    z3.imag = z1.imag+z2.imag;
    return z3;
}
complex sub(complex z1,complex z2)
{
    complex z3;
    z3.real = z1.real-z2.real;
    z3.imag = z1.imag-z2.imag;
    return z3;
}

complex mul(complex z1,complex z2)
{
    complex z3;
    z3.real = (z1.real*z2.real) - (z1.imag*z2.imag);
    z3.imag = (z1.real*z2.imag) + (z1.imag*z2.real);
    return z3;
}

complex div_c(complex z1,complex z2)
{
    complex z3;
    z3.real = ((z1.real*z2.real) + (z1.imag*z2.imag)) / (pow(z2.real,2)+pow(z2.imag,2));
    z3.imag = ((z1.imag*z2.real) - (z1.real*z2.imag)) / (pow(z2.real,2)+pow(z2.imag,2));
    return z3;
}

float mod(complex z1)
{
    return sqrt(pow(z1.real,2)+pow(z1.imag,2));
}

int main()
{
    complex z1,z2,z3,z,temp;
    printf("Enter the first complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z1.imag);

    printf("Enter the second complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z2.imag);

    printf("Enter the third complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z3.imag);

    printf("\nComplex number 1: %.2f + %.2fi",z1.real,z1.imag);
    printf("\nComplex number 2: %.2f + %.2fi",z2.real,z2.imag);
    printf("\nAddition: %.2f + %.2fi",add(z1,z2).real,add(z1,z2).imag);
    printf("\nSubtraction: %.2f + %.2fi",sub(z1,z2).real,sub(z1,z2).imag);
    printf("\nMultiplication: %.2f + %.2fi",mul(z1,z2).real,mul(z1,z2).imag);
    printf("\nDivision: %.2f + %.2fi",div_c(z1,z2).real,div_c(z1,z2).imag);
    printf("\nModulus of complex number 1: %.2f",mod(z1));
    printf("\nModulus of complex number 2: %.2f",mod(z2));

    temp.real = 4.39;
    temp.imag = 0;
    z.real = add(mul(div_c(sub(z1,z2),add(z1,z2)),z3),temp).real;
    z.imag = add(mul(div_c(sub(z1,z2),add(z1,z2)),z3),temp).imag;
    printf("\n\nValue of z: %.2f + %.2fi",z.real,z.imag);
    printf("\nModulus of z: %.2f",mod(z));
    return 0;
}
