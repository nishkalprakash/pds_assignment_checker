/*
22ME10034
Hindvee Rajesh Vispute
Section 2
Lab-08
Assignment 1
*/


#include<stdio.h>
#include<math.h>

typedef struct complex
{
    float real;
    float imag;
}complex;

complex add(complex z1, complex z2)
{
    complex t;
    t.real = z1.real + z2.real;
    t.imag = z1.imag + z2.imag;
    return t;

    //printf("\nAddition: %f + %f", t.real, t.imag);
}

complex sub(complex z1, complex z2)
{
    complex t;
    t.real = z1.real - z2.real;
    t.imag = z1.imag - z2.imag;
    return t;

    printf("\nSubtraction: %f + %f i", t.real, t.imag);
}

complex mul(complex z1, complex z2)
{
    complex t;
    t.real = (z1.real)*(z2.real) - (z1.imag)*(z2.imag);
    t.imag = (z1.real)*(z2.imag) + (z2.real)*(z1.imag);
    return t;


}

complex divi(complex z1, complex z2)
{
    complex t;
    t.real = ((z1.real)*(z2.real) + (z1.imag)*(z2.imag))/(pow(z2.real, 2) + pow(z2.imag, 2));
    t.imag = ((z1.real)*(z2.imag) - (z2.real)*(z1.imag))/(pow(z2.real, 2) + pow(z2.imag, 2));

    return t;

}

complex modu(complex z1)
{
    complex t;
    t.real = sqrt(pow(z1.real, 2) + pow(z1.imag, 2));
    t.imag =0;
    return t;
}



int main()
{
    complex a, b, c, sum, diff, prod, dd, z, temp;
    complex m1, m2, y;

    printf("Enter the first complex number: ");
    printf("\nEnter the real part: ");
    scanf("%f", &a.real);



    printf("Enter the imaginary part: ");
    scanf("%f", &a.imag);

    printf("Enter the second complex number: ");
    printf("\nEnter the real part: ");
    scanf("%f", &b.real);

    printf("Enter the imag part: ");
    scanf("%f", &b.imag);

    printf("\nEnter the real part: ");
    scanf("%f", &c.real);

    printf("Enter the imag part: ");
    scanf("%f", &c.imag);


    printf("\nComplex number 1: ");
    printf("%f + %f i", a.real, a.imag);
    printf("\nComplex number 2: ");
    printf("%f + %f i", b.real, b.imag);

    sum = add(a, b);

    printf("\nAddition: %f + %f i", sum.real, sum.imag);



    diff = sub(a,b);

    printf("\nSubtraction: %f + %f i", diff.real, diff.imag);



    prod = mul(a, b);

    printf("\nMultiplication: %f + %f i", prod.real, prod.imag);


    dd = divi(a, b);

    printf("\nDivision: %f + %f i", dd.real, dd.imag);


    //m1.imag = m2.imag =0;

    m1 = modu(a);
    printf("\nModulus of Complex number 1: %f", m1.real);
    m2 = modu(b);
    printf("\nModulus of Complex number 2: %f", m2.real);

    temp.real = 4.39;
    temp.imag = 0;

    y.imag = 0;
    z = add(divi((mul((sub(a,b)),(c))),(add(a,b))),a);
    y = modu(z);
    printf("\nValue of z: %f + %f i", z.real, z.imag);
    printf("\nModulus of z: ", y.real);

    return 0;
}
