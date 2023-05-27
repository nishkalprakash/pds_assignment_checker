/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 1
* Description : Complex Numbers and Elementary Operations
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Making structures
typedef struct
{
    float real;
    float img;
} complex;

//Elementary Functions
complex add(complex a, complex b)
{
    complex z;
    z.real = a.real + b.real;
    z.img = a.img + b.img;
    return z;
}

complex sub(complex a, complex b)
{
    complex z;
    z.real = a.real - b.real;
    z.img = a.img - b.img;
    return z;
}

complex mult(complex a, complex b)
{
    complex z;
    z.real = (a.real*b.real) - (a.img*b.img);
    z.img = (a.real*b.img) + (b.real*a.img);
    return z;
}

float modC(complex a)
{
    float p;
    p = pow(a.real*a.real + a.img*a.img, 0.5);
    return p;
}

complex divC(complex a, complex b)
{
    complex z;
    z.real = (a.real*b.real + a.img*b.img)/pow(modC(b),2);
    z.img = (b.real*a.img - a.real*b.img)/pow(modC(b),2); // I adjusted the minus sign outside the formula given on moodle to inside the bracket
    return z;
}


int main()
{
    complex z1, z2, z3;

    //Taking input
    printf("Enter first complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z1.real);
    printf("\nEnter the imaginary part: ");
    scanf("%f", &z1.img);
    printf("\nEnter second complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z2.real);
    printf("\nEnter the imaginary part: ");
    scanf("%f", &z2.img);
    printf("\nEnter third complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z3.real);
    printf("\nEnter the imaginary part: ");
    scanf("%f", &z3.img);

    //Printing numbers
    printf("\nComplex number 1: %.2f + %.2fi\n", z1.real, z1.img);
    printf("Complex number 2: %.2f + %.2fi\n", z2.real, z2.img);

    //Defining new variables for operations
    complex zadd,zsub,zmult,zdiv;
    float z1mod,z2mod;
    zadd = add(z1,z2);
    zsub = sub(z1,z2);
    zmult = mult(z1,z2);
    zdiv = divC(z1,z2);
    z1mod = modC(z1);
    z2mod = modC(z2);

    //Printing
    printf("\nAddition: %.2f + %.2fi", zadd.real, zadd.img);
    printf("\nSubtraction: %.2f + %.2fi", zsub.real, zsub.img);
    printf("\nMultiplication: %.2f + %.2fi", zmult.real, zmult.img);
    printf("\nDivision: %.2f + %.2fi", zdiv.real, zdiv.img);
    printf("\nModulus of complex number 1: %.2f ", z1mod);
    printf("\nModulus of complex number 2: %.2f ", z2mod);

    //Part c;
    complex z;
    z = mult(divC(sub(z1,z2),add(z1,z2)),z3);
    z.real += 4.39;

    printf("\n \nz calculated is: %.2f + %.2fi", z.real, z.img);
    printf("\nModulus of z: %.2f", modC(z));

    return 0;
}
