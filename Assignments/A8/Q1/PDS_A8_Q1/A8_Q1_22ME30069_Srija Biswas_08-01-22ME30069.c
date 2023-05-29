#include<stdio.h>
#include<math.h>
typedef struct Complex
{
    float real;
    float imag;
}complex;
complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mul(complex z1,complex z2);
complex div_c(complex z1,complex z2);
float mod_c(complex z1);
int main()
{
    complex z1,z2,z3,z,g,h,addition,subtraction,multiplication,division;
    float z1_mod,z2_mod,z3_mod,z_mod;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &z1.real, &z1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &z2.real, &z2.imag);
    printf("\nFor 3rd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &z3.real, &z3.imag);
    addition=add(z1,z2);
    subtraction=sub(z1,z2);
    multiplication=mul(z1,z2);
    division=div_c(z1,z2);
    g=div_c(subtraction,addition);
    h=mul(g,z3);
    z.real=h.real+4.39;
    z.imag=h.imag;
    z1_mod=mod_c(z1);
    z2_mod=mod_c(z2);
    z3_mod=mod_c(z3);
    z_mod=mod_c(z);
    printf("Complex number 1=%.2f+%.2fi\n",z1.real,z1.imag);
    printf("Complex number 2=%.2f+%.2fi\n",z2.real,z2.imag);
    printf("Complex number 3=%.2f+%.2fi\n",z3.real,z3.imag);
    printf("Sum=%.2f + %.2fi\n", addition.real, addition.imag);
    printf("Difference=%.2f + %.2fi\n", subtraction.real, subtraction.imag);
    printf("Multiplication=%.2f + %.2fi\n", multiplication.real, multiplication.imag);
    printf("Division=%.2f + %.2fi\n", division.real, division.imag);
    printf("Modulus of Complex number 1=%.2f\n",z1_mod);
    printf("Modulus of Complex number 2=%.2f\n",z2_mod);
    printf("Modulus of Complex number 3=%.2f\n",z3_mod);
    printf("z=%.2f+%.2fi\n",z.real,z.imag);
    printf("Modulus of z=%.2f\n",z_mod);

}
complex add(complex z1, complex z2)
{
    complex addi;
    addi.real = z1.real + z2.real;
    addi.imag = z1.imag + z2.imag;
    return (addi);
}
complex sub(complex z1,complex z2)
{
    complex subt;
    subt.real = z1.real - z2.real;
    subt.imag = z1.imag - z2.imag;
    return (subt);
}
complex mul(complex z1,complex z2)
{
    complex mult;
    mult.real = (z1.real*z2.real)-(z1.imag*z2.imag);
    mult.imag = (z1.real*z2.imag)+(z1.imag*z2.real);
    return (mult);
}
complex div_c(complex z1,complex z2)
{
    complex divi;
    divi.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/((pow(z2.real,2)+pow(z2.imag,2)));
    divi.imag = ((z1.real*z2.imag)-(z1.imag*z2.real))/((pow(z2.real,2)+pow(z2.imag,2)));
    return (divi);
}
float mod_c(complex z1)
{
    float modu;
    modu=sqrt(pow(z1.real,2)+pow(z1.imag,2));
    return modu;

}
