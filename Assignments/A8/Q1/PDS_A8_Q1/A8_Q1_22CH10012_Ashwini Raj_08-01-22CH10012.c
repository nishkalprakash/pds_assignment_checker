
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//calling complex number
typedef struct Complex
{
    float real;
    float imag;
} complex;
//declared function
void prntcomplex(complex z)
{
    printf("%0.2f ", z.real);
    if (z.imag < 0)
    {
        printf("%0.2fi\n", z.imag);
    }
    else
    {
        printf("+%0.2fi\n", z.imag);
    }
}
//calculated modulus
float modu(complex x)
{
    float z = sqrt((x.real * x.real) + (x.imag * x.imag));
    return z;
}
//computed addition
complex add(complex x, complex y)
{
    complex z;
    z.real = x.real + y.real;
    z.imag = x.imag + y.imag;
    return z;
}
//computed subtraction

complex sub(complex x, complex y)
{
    complex z;
    z.real = x.real - y.real;
    z.imag = x.imag - y.imag;
    return z;
}
//computed multiplication
complex mult(complex x, complex y)
{
    complex z;
    z.real = (x.real * y.real) - (x.imag * y.imag);
    z.imag = (x.real * y.imag) + (x.imag * y.real);
    return z;
}
//computed division
complex divi(complex x, complex y)
{
    complex z;
    z.real = ((x.real * y.real) + (x.imag * y.imag)) / (modu(y) * modu(y));
    z.imag = ((x.real * y.imag) - (x.imag * y.real)) / (modu(y) * modu(y));
    return z;
}

int main()
{
    complex x, y;
    //printing first complex number
    printf("Enter the first complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &x.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &x.imag);
    //printing second complex number
    printf("Enter the second complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &y.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &y.imag);
    //ALL THE OUTPUTS AS MENTIONED ARE PRINTED
    printf("Complex no. 1: ");
    prntcomplex(x);
    printf("Complex no. 2: ");
    prntcomplex(y);
    printf("Addition: ");
    prntcomplex(add(x, y));
    printf("Subtraction: ");
    prntcomplex(sub(x, y));
    printf("Multiplication: ");
    prntcomplex(mult(x, y));
    printf("Division: ");
    prntcomplex(divi(x, y));
    printf("Mod of Complex no. 1: ");
    printf("%0.2f\n", modu(x));
    printf("Mod of Complex no. 2: ");
    printf("%0.2f\n", modu(y));
}

































































