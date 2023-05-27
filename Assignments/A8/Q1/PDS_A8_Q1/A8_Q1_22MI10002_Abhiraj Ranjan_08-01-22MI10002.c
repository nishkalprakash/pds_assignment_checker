/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 8
Question: 1
Description: Complex Numbers*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
    float real;
    float imag;
} complex;
complex add(complex z1,complex z2)
{
    complex z3;
    z3.real=z1.real+z2.real;
    z3.imag=z1.imag+z2.imag;
    return z3;
}
complex sub(complex z1, complex z2)
{
    complex z3;
    z3.real=z1.real-z2.real;
    z3.imag=z1.imag-z2.imag;
    return z3;
}
complex mul(complex z1, complex z2)
{
    complex z3;
    z3.real=z1.real*z2.real-z1.imag*z2.imag;
    z3.imag=z1.imag*z2.real+z2.imag*z1.real;
    return z3;
}
float modc(complex z1)
{
    float a=sqrt(z1.real*z1.real+z1.imag*z1.imag);
    return a;
}
complex division(complex z1,complex z2)
{
    complex z3;
    z3.real=(z1.real*z2.real+z1.imag*z2.imag)/(modc(z2)*modc(z2));
    z3.imag=(z1.real*z2.imag-z2.real*z1.imag)/(modc(z2)*modc(z2));
    return z3;
}
int main()
{
    complex z1,z2,z3,z;
    printf("Enter the first complex number: \n");
    printf("Enter the real part: ");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z1.imag);
    printf("Enter the second complex number: \n");
    printf("Enter the real part: ");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z2.imag);
    printf("Enter the third complex number: \n");
    printf("Enter the real part: ");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z3.imag);
    printf("Complex number 1: %.2f+%.2fi\n",z1.real,z1.imag);
    printf("Complex number 2: %.2f+%.2fi\n",z2.real,z2.imag);
    z=add(z1,z2);
    printf("Addition: %.2f+%.2fi\n",z.real,z.imag);
    z=sub(z1,z2);
    printf("Subtraction: %.2f+%.2fi\n",z.real,z.imag);
    z=mul(z1,z2);
    printf("Multiplication: %.2f+%.2fi\n",z.real,z.imag);
    z=division(z1,z2);
    printf("Division: %.2f+%.2fi\n",z.real,z.imag);
    printf("Modulus of complex number 1: %.2f\n",modc(z1));
    printf("Modulus of complex number 2: %.2f\n",modc(z2));
    z=division((mul((sub(z1,z2)),(z3))),add(z1,z2));
    z.real+=4.39;
    z.imag*=-1;
    printf("Value of z: %.2f+%.2fi\n",z.real,z.imag);
    printf("Modulus of z: %.2f",modc(z));
    return 0;
}
