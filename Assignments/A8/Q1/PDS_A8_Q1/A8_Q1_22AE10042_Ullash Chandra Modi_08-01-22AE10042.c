/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description-simple structure and its application
*/
#include <stdio.h>
#include <math.h>

typedef struct Complex{
    float real;
    float imag;
    }complex;

complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mul(complex z1,complex z2);
complex div(complex z1,complex z2);
float mod(complex z1);


int main()
{

    complex z1,z2,z3;

    printf("enter the first complex :\n");
    printf("enter the real part :");
    scanf("%f",&z1.real);
    printf("enter the imaginary part :");
    scanf("%f",&z1.imag);
    printf("\n");

    printf("enter the second complex :\n");
    printf("enter the real part :");
    scanf("%f",&z2.real);
    printf("enter the imaginary part :");
    scanf("%f",&z2.imag);
    printf("\n");

    printf("enter the third complex :\n");
    printf("enter the real part :");
    scanf("%f",&z3.real);
    printf("enter the imaginary part :");
    scanf("%f",&z3.imag);
    printf("\n");

    printf("complex number 1 : %.2f + %.2f i\n",z1.real,z1.imag);
    printf("complex number 2 : %.2f + %.2f i\n",z2.real,z2.imag);
    printf("addition : %.2f + %.2f i\n",add(z1,z2).real,add(z1,z2).imag);
    printf("subtraction : %.2f + %.2f i\n",sub(z1,z2).real,sub(z1,z2).imag);
    printf("multiplication : %.2f + %.2f i\n",mul(z1,z2).real,mul(z1,z2).imag);
    printf("division : %.2f + %.2f i\n",div(z1,z2).real,div(z1,z2).imag);
    printf("modulus of complex number 1 : %.2f\n",mod(z1));
    printf("modulus of complex number 2 : %.2f\n",mod(z2));

    complex z;
    z.real=4.39;
    z.imag=0;
    printf("\ncomplex number z : %.2f + %.2fi\n",mul(div(sub(z1,z2),add(z1,z2)),z3).real+4.39,mul(div(sub(z1,z2),add(z1,z2)),z3).imag);
    printf("modulus of complex number z : %.2f\n",mod(add(mul(div(sub(z1,z2),add(z1,z2)),z3),z)));

    return 0;
}

complex add(complex z1,complex z2)
{
    complex z;
    z.real=z1.real+z2.real;
    z.imag=z1.imag+z2.imag;
    return z;
}

complex sub(complex z1,complex z2)
{
    complex z;
    z.real=z1.real-z2.real;
    z.imag=z1.imag-z2.imag;
    return z;
}

complex mul(complex z1,complex z2)
{
    complex z;
    z.real=(z1.real*z2.real)-(z1.imag*z2.imag);
    z.imag=(z1.real*z2.imag)+(z2.real*z1.imag);
    return z;
}

complex div(complex z1,complex z2)
{
    complex z;
    z.real=((z1.real*z2.real)+(z1.imag*z2.imag))/((pow(z2.real,2)+pow(z2.imag,2)));
    z.imag=-((z1.real*z2.imag)-(z2.real*z1.imag))/((pow(z2.real,2)+pow(z2.imag,2)));
    return z;
}

float mod(complex z1)
{
    return sqrt(pow(z1.real,2)+pow(z1.imag,2));
}
