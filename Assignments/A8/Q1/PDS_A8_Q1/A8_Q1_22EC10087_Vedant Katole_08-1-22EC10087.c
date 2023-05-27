/*Name- Vedant Katole
Roll no-22EC10087
section 2
lab no - 8
problem no - 1*/

#include<stdio.h>
#include<math.h>

typedef struct Complex{
    float real;
    float imag;
} complex;

complex add(complex z1, complex z2)
{
   complex sum;
   sum.real = z1.real + z2.real;
   sum.imag = z1.imag + z2.imag;
   return sum;
}

complex sub(complex z1, complex z2)
{
    complex diff;
    diff.real = z1.real - z2.real;
    diff.imag = z1.imag - z2.imag;
    return diff;
}

complex mul(complex z1, complex z2)
{
    complex prod;
    prod.real = z1.real*z2.real - z1.imag*z2.imag;
    prod.imag = z1.real*z2.imag + z1.imag*z2.real;
    return prod;
}

complex divC(complex z1, complex z2)
{
    complex q, z3;
    float deno;
    deno = z2.real*z2.real + z2.imag*z2.imag;
    q.real = (z1.real*z2.real + z1.imag*z2.imag)/deno;
    q.imag = -1 *(z1.real*z2.imag - z2.real*z1.imag)/deno;
    return q;
}

float modu(complex z1)
{
    float modulus;
    modulus = pow(z1.real*z1.real + z1.imag*z1.imag , 0.5);
    return modulus;
}


int main(){
    complex z1, z2, z3;
    //taking 1st complex no input
    printf("Enter 1st complex no:\n");
    printf("Enter real part:");
    scanf("%f", &z1.real);
    printf("Enter complex part:");
    scanf("%f", &z1.imag);
    printf("\n");
    //taking 2nd complex number input
    printf("Enter 2nd complex no:\n");
    printf("Enter real part:");
    scanf("%f", &z2.real);
    printf("Enter complex part:");
    scanf("%f", &z2.imag);
    printf("\n");
    //taking 3rd complex number as input
    printf("Enter 3rd complex no:\n");
    printf("Enter real part:");
    scanf("%f", &z3.real);
    printf("Enter complex part:");
    scanf("%f", &z3.imag);
    printf("\n");
    //printing the complex numbers
    printf("The 1st complex number is:%.2f + i%.2f", z1.real, z1.imag);
    printf("\nThe 2nd complex number is:%.2f + i%.2f", z2.real, z2.imag);
    printf("\nThe 3rd complex number is:%.2f + i%.2f", z3.real, z3.imag);
    printf("\nAddition:%.2f + i%.2f", add(z1,z2).real, add(z1,z2).imag);
    printf("\nSubtraction:%.2f + i%.2f", sub(z1,z2).real, sub(z1,z2).imag);
    printf("\nmultiplication:%.2f + i%.2f", mul(z1,z2).real, mul(z1,z2).imag);
    printf("\nDivision:%.2f + i%.2f", divC(z1,z2).real, divC(z1,z2).imag);
    printf("\nModulus of complex number 1: %.2f", modu(z1));
    printf("\nModulus of complex number 2: %.2f", modu(z2));
    complex z, num, deno, z4 , z5, z6;
    num.real = sub(z1,z2).real;
    num.imag = sub(z1,z2).imag;
    deno.real = add(z1,z2).real;
    deno.imag = add(z1,z2).imag;
    z4.real = divC(num,deno).real;
    z4.imag = divC(num,deno).imag;
    z.real = mul(z4,z3).real;
    z.imag = mul(z4,z3).imag;
    printf("\nThe value of z is: %.2f + i%.2f", z.real + 4.39, z.imag);
    printf("\nModulus of complex number z: %.2f", modu(z));
    return 0;
}
