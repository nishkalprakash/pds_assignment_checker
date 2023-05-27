#include<stdio.h>
#include<math.h>

 typedef struct Complex
    {
        float real;
        float imag;
    } complex;

complex add(complex z1, complex z2)
{
    complex a;
    a.real = z1.real + z2.real;
    a.imag = z1.imag + z2.imag;

    return a;
}

complex sub(complex z1, complex z2)
{
    complex a;
    a.real = z1.real - z2.real;
    a.imag = z1.imag - z2.imag;

    return a;
}

complex mul(complex z1, complex z2)
{
    complex a;
    a.real = z1.real*z2.real - z1.imag*z2.imag;
    a.imag = z1.real*z2.imag + z2.real*z1.imag;

    return a;
}

float mod(complex z1)
{
    return sqrt(z1.real*z1.real + z1.imag*z1.imag);
}


complex div(complex z1, complex z2)
{
    complex a;
    a.real = (z1.real*z2.real + z1.imag*z2.imag)/mod(z2)/mod(z2);
    a.imag = (z2.real*z1.imag - z1.real*z2.imag)/mod(z2)/mod(z2);

    return a;
}

int main()
{
    complex z1,z2,z3,z;

    printf("Enter the first complex number:\nEnter the real part: ");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z1.imag);


    printf("\nEnter the second complex number:\nEnter the real part: ");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z2.imag);


    printf("\nEnter the real part: ");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z3.imag);

    printf("\nComplex number 1: %.2f + %.2fi",z1.real,z1.imag);
    printf("\nComplex number 2: %.2f + %.2fi",z2.real,z2.imag);
    printf("\nAddition: %.2f + %.2fi",add(z1,z2).real,add(z1,z2).imag);
    printf("\nSubtraction: %.2f + %.2fi",sub(z1,z2).real,sub(z1,z2).imag);
    printf("\nMultiplication: %.2f + %.2fi",mul(z1,z2).real,mul(z1,z2).imag);
    printf("\nDivision: %.2f + %.2fi",div(z1,z2).real,div(z1,z2).imag);
    printf("\nModulus of complex number 1: %.2f",mod(z1));
    printf("\nModulus of complex number 2: %.2f",mod(z2));

    complex a;
    a.real=4.39;
    a.imag=0;
    z = add(mul(div((sub(z1,z2)),(add(z1,z2))),z3),a);
    printf("\nValue of z: %.2f + %.2fi ",z.real,z.imag);
    printf("\nModulus of z: %.2f",mod(z));
    return 0;
}
