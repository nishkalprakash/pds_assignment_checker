/*
* Section 2
* Roll No.: 22EC10007
* Name : Akash Kumar
* Assignment : 8
* Question : 1
* Description : Operation in complex numbers
*/



#include <stdio.h>
#include <math.h>

typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex, complex);
complex sub(complex, complex);
complex mult(complex, complex);
complex divide(complex, complex);
float modulus(complex);

int main()
{
    complex x1, x2, x3;

    printf("Enter the first complex number\n");
    printf("Enter the real part : ");
    scanf("%f", &x1.real);
    printf("Enter the imaginary part : ");
    scanf("%f", &x1.imag);
    printf("complex number 1, x1 = %.2f + %.2fi\n", x1.real, x1.imag);
    printf("\n");


    printf("Enter the second complex number\n");
    printf("Enter the real part : ");
    scanf("%f", &x2.real);
    printf("Enter the imaginary part : ");
    scanf("%f", &x2.imag);
    printf("complex number 2, x2 = %.2f + %.2fi\n", x2.real, x2.imag);
    printf("\n");

    printf("Enter the third complex number\n");
    printf("Enter the real part : ");
    scanf("%f", &x3.real);
    printf("Enter the imaginary part : ");
    scanf("%f", &x3.imag);
    printf("\n");


    complex added = add(x1, x2);
    complex subtracted = sub(x1, x2);
    complex multiplied = mult(x1, x2);
    complex divided = divide(x1, x2);
    float modulus1 = modulus(x1);
    float modulus2 = modulus(x2);

    printf("complex number 1, x1 = %.2f + %.2fi\n", x1.real, x1.imag);
    printf("complex number 2, x2 = %.2f + %.2fi\n", x2.real, x2.imag);
    printf("Addition: %.2f + %.2fi\n", added.real, added.imag);
    printf("Subtraction : %.2f + %.2f\n", subtracted.real, subtracted.imag);
    printf("Multiplication : %.2f + %.2fi\n", multiplied.real, multiplied.imag);
    printf("Division : %.2f + %.2fi\n", divided.real, divided.imag);
    printf("Modulus of complex number 1 : %.2f\n", modulus1);
    printf("Modulus of complex number 2 : %.2f\n", modulus2);

    complex z1 = sub(x1, x2);
    complex z2 = add(x1, x2);
    complex z3 = mult(z1, x3);

    complex z = divide(z3, z2);
    z.real += 4.39;
    float modz = modulus(z);

    printf("Value of z : %.2f + %.2fi\n", z.real, z.imag);
    printf("Modulus of z: %.2f\n", modz);
}

complex add(complex x1, complex x2)
{
    complex x;
    x.real = x1.real + x2.real;
    x.imag = x1.imag + x2.imag;
    return x;
}

complex sub(complex x1, complex x2)
{
    complex x;
    x.real = x1.real - x2.real;
    x.imag = x1.imag - x2.imag;
    return x;
}

complex mult(complex x1, complex x2)
{
    complex x;
    x.real = (x1.real)*(x2.real) - (x1.imag) * (x2.imag);
    x.imag = (x1.real)*(x2.imag) + (x1.imag) * (x2.real);
    return x;
}

complex divide(complex x1, complex x2)
{
    complex x;
    x.real = ((x1.real*x2.real) + (x1.imag*x2.imag)) / (x2.real * x2.real + x2.imag*x2.imag);
    x.imag = ((x2.real*x1.imag) - (x1.real*x2.imag)) / (x2.real * x2.real + x2.imag*x2.imag);
    return x;
}

float modulus(complex x3)
{
    float mod = sqrt((x3.real)*(x3.real) + (x3.imag) * (x3.imag));
    return mod;
}


