/*
Name - Krishna Paikine
Roll no - 22EE10036
Section - 2
Problem no - 1
*/

#include <stdio.h>
#include <math.h>
// Defining structure for storing complex numbers
typedef struct complex
{
    float real;
    float imag;

} complex;
// Function for adding complex numbers
complex add(complex z1, complex z2)
{
    complex c;
    c.real = z1.real + z2.real;
    c.imag = z1.imag + z2.imag;
    return(c);
}
// Function for substracting complex numbers
complex sub(complex z1, complex z2)
{
    complex c;
    c.real = z1.real - z2.real;
    c.imag = z1.imag - z2.imag;
    return(c);
}
// Function for multiplying complex numbers
complex mul(complex z1, complex z2)
{
    complex c;
    c.real = (z1.real*z2.real) - (z1.imag*z2.imag);
    c.imag = (z1.real*z2.imag) + (z2.real*z1.imag);
    return(c);
}
// Function for dividing complex numbers
complex div(complex z1, complex z2)
{
    complex c;
    c.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
    c.imag = (-1)*(((z1.real*z2.imag) - (z2.real*z1.imag))/((z2.real*z2.real)+(z2.imag*z2.imag)));
    return(c);
}
// Function for getting modulus of a complex number
complex mod(complex z1)
{
    complex c;
    c.real = (sqrt(((z1.real*z1.real)+(z1.imag*z1.imag))));
    return(c);
}


int main()
{
    complex z1, z2, z3, addition, substraction, multiplication, division, modulus1, modulus2, numerator, denominator, first_part, second_part, third_part, fourth_part;
    complex z4 = {4.39, 0}; //Pre-declaring a real number as complex number to add it at the last to the complex number
    printf("Enter the first complex number : \n");
    printf("Enter the real part :\n");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part :\n");
    scanf("%f", &z1.imag);
    printf("\n");
    printf("Enter the second complex number : \n");
    printf("Enter the real part :\n");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part :\n");
    scanf("%f", &z2.imag);
    printf("\n");
    printf("Enter the third complex number : \n");
    printf("Enter the real part :\n");
    scanf("%f", &z3.real);
    printf("Enter the imaginary part :\n");
    scanf("%f", &z3.imag);
    printf("\n");

    printf("Complex number 1 : %0.2f + %0.2fi\n", z1.real, z1.imag);
    printf("Complex number 2 : %0.2f + %0.2fi\n", z2.real, z2.imag);
    printf("\n");

    addition = add(z1, z2);
    printf("Addition : %0.2f + %0.2fi\n", addition.real, addition.imag);
    printf("\n");

    substraction = sub(z1, z2);
    printf("Substraction : %0.2f + %0.2fi\n", substraction.real, substraction.imag);
    printf("\n");

    multiplication = mul(z1, z2);
    printf("Multiplication : %0.2f + %0.2fi\n", multiplication.real, multiplication.imag);
    printf("\n");

    division = div(z1, z2);
    printf("Division : %0.2f + %0.2fi\n", division.real, division.imag);
    printf("\n");

    modulus1 = mod(z1);
    modulus2 = mod(z2);
    printf("Modulus of complex number 1 is %0.2f\n", modulus1.real);
    printf("Modulus of complex number 2 is %0.2f\n", modulus2.real);
    printf("\n");

    // Dividing the procedure of complex number z in 4 parts

    numerator = sub(z1, z2);
    denominator = add(z1, z2);

    first_part = div(numerator, denominator);

    second_part = mul(first_part, z3);

    third_part = add(second_part, z4);

    fourth_part = mod(third_part);


    printf("Complex number Z : %0.2f + %0.2fi\n", third_part.real, third_part.imag);
    printf("Modulus of Complex number Z : %0.2f\n", fourth_part.real);

    return 0;
}

