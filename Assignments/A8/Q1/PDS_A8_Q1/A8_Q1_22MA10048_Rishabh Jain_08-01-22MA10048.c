#include <stdio.h>
#include <math.h>

typedef struct Complex {
float real;
float imag;
}complex;

complex add ( complex a, complex b )
{
complex tmp;
tmp.real = a.real + b.real;
tmp.imag = a.imag + b.imag;
return tmp;
}

complex sub ( complex a, complex b )
{
complex tmp;
tmp.real = a.real - b.real;
tmp.imag = a.imag - b.imag;
return tmp;
}

complex mul ( complex a, complex b )
{
complex tmp;
tmp.real = (a.real*b.real) - (a.imag*b.imag);
tmp.imag = (a.real*b.imag) + (a.imag*b.real);
return tmp;
}

float mod(complex z)
{
    float tmp;
    tmp= pow((pow(z.real,2)+pow(z.imag,2)),0.5);
    return tmp;
}

complex divc(complex a ,complex b)
{
    complex tmp;
    tmp.real=((a.real*b.real) + (a.imag*b.imag))/pow(mod(b),2);
    tmp.imag=((b.real*a.imag) - (a.real*b.imag))/pow(mod(b),2);
    return tmp;
}

int main( )
{
    complex a, b, c;
    printf("Enter the first complex number:\n");
    printf("Enter the real part: ");
    scanf ("%f", &a.real);
    printf("Enter the imaginary part: ");
    scanf ("%f", &a.imag);

    printf("\nEnter the second complex number:\n");
    printf("Enter the real part: ");
    scanf ("%f", &b.real);
    printf("Enter the imaginary part: ");
    scanf ("%f", &b.imag);

    printf("\nEnter the third complex number:\n");
    printf("Enter the real part: ");
    scanf ("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf ("%f", &c.imag);

    printf ("\nComplex Number 1 = %f + %f i\n", a.real, a.imag);
    printf ("Complex Number 2 = %f + %f i\n", b.real, b.imag);

    complex z_add,z_sub,z_mul,z_div,z;
    float z1_mod,z2_mod,z_mod;
    z_add = add(a, b);
    printf ("Addition: %0.2f + %0.2fi \n",z_add.real, z_add.imag);
    z_sub = sub(a, b);
    printf ("Subtraction: %0.2f + %0.2fi \n",z_sub.real, z_sub.imag);
    z_mul = mul(a, b);
    printf ("Multiplication: %0.2f + %0.2fi \n",z_mul.real, z_mul.imag);
    z_div = divc(a, b);
    printf ("Division: %0.2f + %0.2fi \n",z_div.real, z_div.imag);
    z1_mod = mod(a);
    printf ("Modulus of complex number 1: %0.2f \n",z1_mod);
    z2_mod = mod(b);
    printf ("Modulus of complex number 2: %0.2f \n",z2_mod);

    z=mul(divc(sub(a,b),add(a,b)),c);
    z.real+=4.39;
    printf ("Complex Number z = %0.2f + %0.2f i\n", z.real, z.imag);
    z_mod=mod(z);
    printf ("Modulus of complex number z: %0.2f \n",z_mod);

}
