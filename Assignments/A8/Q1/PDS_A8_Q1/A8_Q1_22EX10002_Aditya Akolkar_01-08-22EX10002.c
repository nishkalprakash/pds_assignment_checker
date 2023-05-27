#include<stdio.h>
#include<math.h>


typedef struct Complex
{
    float real;
    float imag;
} complex;

complex add(complex z1, complex z2)
{
    complex z;
    z.real = z1.real + z2.real;
    z.imag = z1.imag + z2.imag;
    return (z);
}

complex sub(complex z1, complex z2)
{
    complex z;
    z.real = z1.real - z2.real;
    z.imag = z1.imag - z2.imag;
    return (z);
}

complex mul (complex z1, complex z2)
{
    complex z;
    z.real = z1.real*z2.real - z1.imag*z2.imag;
    z.imag = z1.real*z2.imag + z2.real*z1.imag;
    return z;
}

complex div_c (complex z1, complex z2)
{
    complex z;
    z.real = (z1.real*z2.real + z1.imag*z2.imag)/(pow(z2.real,2)+pow(z2.imag,2));
    z.imag = (-1)*(z1.real*z2.imag - z2.real*z1.imag)/(pow(z2.real,2)+pow(z2.imag,2));
    return z;
}

float fun_m (complex z1)
{
    float mag = sqrt((z1.real*z1.real)+(z1.imag*z1.imag));
    return mag;
}


int main()
{
    complex z1, z2, z3, z;


    printf("Enter first complex number:\n");
    printf("Enter the real part:");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part:");
    scanf("%f", &z1.imag);

    printf("Enter second complex number:\n");
    printf("Enter the real part:");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part:");
    scanf("%f", &z2.imag);

    printf("Enter third complex number:\n");
    printf("Enter the real part:");
    scanf("%f", &z3.real);
    printf("Enter the imaginary part:");
    scanf("%f", &z3.imag);



    printf("Complex number 1: %.2f + %.2fi\n", z1.real,z1.imag);
    printf("Complex number 2: %.2f + %.2fi\n", z2.real,z2.imag);

    printf("Addition: %.2f + %.2fi\n", add(z1,z2).real, add(z1,z2).imag);
    printf("Substraction: %.2f + %.2fi\n", sub(z1,z2).real, sub(z1,z2).imag);
    printf("Multiplication: %.2f + %.2fi\n", mul(z1,z2).real, mul(z1,z2).imag);
    printf("Division: %.2f + %.2fi\n", div_c(z1,z2).real, div_c(z1,z2).imag);

    printf("Modulus of complex number 1: %.2f\n", fun_m(z1));
    printf("Modulus of complex number 2: %.2f\n", fun_m(z2));

    z= mul (div_c(sub(z1,z2), add(z1,z2)), z3); //Problem!!!!!!
    z.real += 4.39;
    printf("Value of z:%.2f+ %.2fi\n", z.real, z.imag);
    printf("Modulus of z : %.2f\n", fun_m(z));
    return 0;
}


