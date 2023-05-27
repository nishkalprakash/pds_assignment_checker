/*Shreya Vadhavkar
22ME10091
Lab 8
Section 2
question 1*/
/*Input is taken according to initial format at the start of the lab*/
#include<stdio.h>
#include<math.h>
typedef struct Complex
{
    float real;
    float imag;
}complex;
complex add(complex,complex);
complex sub(complex,complex);
complex mult(complex,complex);
complex div_c(complex,complex);
float mod_c(complex);
int main()
{
    complex z1,z2,z3;
    printf("Enter the first complex number:\n");
    printf("Enter the real part:");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part:");
    scanf("%f", &z1.imag);
    printf("Enter the second complex number:\n");
    printf("Enter the real part:");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part:");
    scanf("%f", &z2.imag);
    printf("Enter the real part:");
    scanf("%f", &z3.real);
    printf("Enter the imaginary part:");
    scanf("%f", &z3.imag);
    printf("Complex number 1: %.2f + %.2fi\n",z1.real,z1.imag);
    printf("Complex number 2: %.2f + %.2fi\n",z2.real,z2.imag);
    printf("Addition: %.2f + %.2fi\n",(add(z1,z2)).real,(add(z1,z2)).imag);
    printf("Subtraction: %.2f + %.2fi\n",(sub(z1,z2)).real,(sub(z1,z2)).imag);
    printf("Multiplication: %.2f + %.2fi\n",(mult(z1,z2)).real,(mult(z1,z2)).imag);
    printf("Division: %.2f + %.2fi\n",(div_c(z1,z2)).real,(div_c(z1,z2)).imag);
    printf("Modulus of complex number 1: %.2f\n",mod_c(z1));
    printf("Modulus of complex number 2: %.2f\n",mod_c(z2));
    complex t;
    t.real =4.39;
    t.imag=0;
    complex z= add(t, mult(div_c(sub(z1,z2),add(z1,z2)),z3));
    printf("Value of z: %.2f + %.2fi\n",z.real,z.imag);
    printf("Modulus of z:%.2f",mod_c(z));
    return 0;

}
complex add(complex z1,complex z2)
{
    complex za;
    za.real = z1.real +z2.real;
    za.imag = z1.imag + z2.imag;
    return za;
}
complex sub(complex z1, complex z2)
{
    complex zb;
    zb.real = z1.real -z2.real;
    zb.imag = z1.imag -z2.imag;
    return zb;
}
complex mult(complex z1,complex z2)
{
    complex zc;
    zc.real = (z1.real*z2.real)-(z1.imag*z2.imag);
    zc.imag = (z1.real*z2.imag)+(z1.imag*z2.real);
    return zc;
}
complex div_c(complex z1,complex z2)
{
    complex zd;
    zd.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/(mod_c(z2)*mod_c(z2));
    zd.imag = (-(z1.real*z2.imag)+(z1.imag*z2.real))/(mod_c(z2)*mod_c(z2));
    return zd;
}
float mod_c(complex z)
{
    float m;
    m = sqrt((z.real*z.real)+(z.imag*z.imag));
    return m;
}
