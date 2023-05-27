#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct complex   //structures
{
    float real;
    float imag;
} complex;

complex add(complex z1, complex z2)
{
    complex temp;
    temp.real = z1.real + z2.real;
    temp.imag = z1.imag + z2.imag;
    return (temp);
}

complex sub(complex z1, complex z2)
{
    complex temp;
    temp.real = z1.real - z2.real;
    temp.imag = z1.imag - z2.imag;
    return (temp);
}

complex mul(complex z1, complex z2)
{
    complex temp;
    temp.real = ((z1.real)*(z2.real))-((z1.imag)*(z2.imag));
    temp.imag = ((z1.real)*(z2.imag))+((z2.real)*(z1.imag));
    return (temp);
}

complex divc(complex z1, complex z2)
{
    complex temp;
    temp.real = (((z1.real)*(z2.real))+((z1.imag)*(z2.imag)))/(((z1.real)*(z1.real))+((z2.imag)*(z2.imag)));
    temp.imag = (((z1.real)*(z2.imag))-((z2.real)*(z1.imag)))/(((z1.real)*(z1.real))+((z2.imag)*(z2.imag)));
    return (temp);
}

float modc(complex z1)
{
    float modulus;
    modulus = sqrt((z1.real)*(z1.real) + (z1.imag)*(z1.imag));
    return (modulus);
}




int main()
{
    complex z1, z2, z3, sum, diff, mult, divd;
    float mod;

    printf("Enter the first complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z1.real );
    printf("Enter the imaginary part: ");
    scanf("%f",&z1.imag);
    printf("Complex number 1: %.2f + %.2fi\n", z1.real, z1.imag);

    printf("Enter the second complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &z2.imag);
    printf("Complex number 2: %.2f + %.2fi\n", z2.real, z2.imag);

    printf("Enter the third complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z3.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &z3.imag);

    sum = add(z1,z2);
    printf("Addition: %.2f + %.2fi\n",sum.real, sum.imag);

    diff = sub(z1,z2);
    printf("Subtraction: %.2f + %.2fi\n", diff.real, diff.imag);

    mult = mul(z1,z2);
    printf("Multiplication: %.2f + %.2fi\n",mult.real, mult.imag);

    divd = divc(z1,z2);
    printf("Division: %.2f + %.2fi\n", divd.real, divd.imag);

    mod = modc(z1);
    printf("Modulus of Complex number 1: %.2lf\n", modc(z1));

    mod = modc(z2);
    printf("Modulus of Complex number 2: %.2lf\n", modc(z2));


    return 0;
}

