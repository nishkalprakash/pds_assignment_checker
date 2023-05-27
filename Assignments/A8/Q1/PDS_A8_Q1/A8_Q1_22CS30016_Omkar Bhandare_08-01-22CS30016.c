/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 08
Description - Complex Numbers
*/

#include<stdio.h>
#include<math.h>

typedef struct complex
{
    float real;
    float imag;
}complex;

void printComplex(complex z)
{
    printf("%.2f + %.2fi\n", z.real,z.imag);
}

complex add(complex z1, complex z2)
{
    complex z;
    z.real = z1.real + z2.real;
    z.imag = z1.imag + z2.imag;
    return z;
}

complex sub(complex z1, complex z2)
{
    complex z;
    z.real = z1.real - z2.real;
    z.imag = z1.imag - z2.imag;
    return z;
}

complex mul(complex z1, complex z2)
{
    complex z;
    z.real = (z1.real*z2.real)-(z1.imag*z2.imag);
    z.imag = (z1.real*z2.imag)+(z2.real*z1.imag);
    return z;
}

complex divc(complex z1, complex z2)
{
    complex z;
    z.real = ((z1.real*z2.real)+(z1.imag*z2.imag)) / (pow(z2.real,2)+pow(z2.imag,2));
    z.imag = ((z2.real*z1.imag)-(z1.real*z2.imag)) / (pow(z2.real,2)+pow(z2.imag,2));
    return z;
}

float modc(complex z1, complex z2, complex z3)
{
    complex d1 = sub(z1,z2);
    complex d2 = add(z1,z2);
    complex d3 = divc(d1,d2);
    complex d4 = mul(d3,z3);
    complex z;
    z.real = d4.real + 4.39;
    z.imag = d4.imag;
    float modulus = sqrt(pow(z.real,2)+pow(z.imag,2));
    printf("Value of z : ");
    printComplex(z);
    return modulus;
}

int main()
{
   complex z1, z2, z3;
   complex addition, subtraction, multiplication, division;
   float c;

   printf("Enter the first complex number : ");
   printf("\n");
   printf("Enter the real part : ");
   scanf("%f", &z1.real);
   printf("Enter the imaginary part : ");
   scanf("%f", &z1.imag);

   printf("Enter the second complex number : ");
   printf("\n");
   printf("Enter the real part : ");
   scanf("%f", &z2.real);
   printf("Enter the imaginary part : ");
   scanf("%f", &z2.imag);

   printf("Enter the first complex number : ");
   printf("\n");
   printf("Enter the real part : ");
   scanf("%f", &z3.real);
   printf("Enter the imaginary part : ");
   scanf("%f", &z3.imag);

   printf("Complex number 1: ");
   printComplex(z1);
   printf("\n");
   printf("Complex number 2: ");
   printComplex(z2);
   printf("\n");
   printf("Complex number 3: ");
   printComplex(z3);
   printf("\n");

   addition = add(z1,z2);
   printf("Addition : ");
   printComplex(addition);
   printf("\n");

   subtraction = sub(z1,z2);
   printf("Subtraction : ");
   printComplex(subtraction);
   printf("\n");

   multiplication = mul(z1,z2);
   printf("Multiplication : ");
   printComplex(multiplication);
   printf("\n");

   division = divc(z1,z2);
   printf("Division : ");
   printComplex(division);
   printf("\n");

   printf("Modulus of complex number 1 : %.2f\n", sqrt(pow(z1.real,2)+pow(z1.imag,2)));
   printf("Modulus of complex number 2 : %.2f", sqrt(pow(z2.real,2)+pow(z2.imag,2)));
   printf("\n");

   c = modc(z1,z2,z3);
   printf("Modulus of z : %.2f", c);
   printf("\n");

   return 0;
}
