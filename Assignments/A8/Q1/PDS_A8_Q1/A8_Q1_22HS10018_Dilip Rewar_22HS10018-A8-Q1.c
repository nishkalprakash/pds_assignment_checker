#include <stdio.h>
#include <math.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 8
Description: Algebric opration on complex numbers
*/
typedef struct complex{
    float real;
    float imag;
}complex;

complex addition(complex a,complex b){
    complex add;
    add.real = a.real+b.real;
    add.imag = a.imag+b.imag;
    return add;
}

complex minus(complex a,complex b){
    complex sub;
    sub.real = a.real-b.real;
    sub.imag = a.imag-b.imag;
    return sub;
}

complex mult(complex a,complex b){
    complex mult;
    mult.real = a.real*b.real - a.imag*b.imag;
    mult.imag = a.imag*b.real + a.real*b.imag;
    return mult;
}

complex divd(complex a, complex b){
    complex divd;
    divd.real = (a.real*b.real + a.imag*b.imag)/(b.imag*b.imag + b.imag*b.imag);
    divd.imag = (-a.real*b.imag + a.imag*b.real)/(b.imag*b.imag + b.imag*b.imag);
    return divd;
}

float mod(complex a){
    float modulus;
    modulus = sqrt((a.real*a.real + a.imag*a.imag));
    return modulus;
}

int main(){
    complex z1,z2;
    printf("Enter real part then imaginery part of first complex number: ");
    scanf("%f %f",&z1.real,&z1.imag);
    printf("\nEnter real part then imaginery part second complex number: ");
    scanf("%f %f",&z2.real,&z2.imag);

    printf("\nComplex number 1 = %.2f + i %.2f",z1.real,z1.imag);
    printf("\nComplex number 2 = %.2f + i %.2f",z2.real,z2.imag);

    complex add = addition(z1,z2);
    printf("\nAddition: %.2f+ i %.2f",add.real,add.imag);

    complex sub = minus(z1,z2);
    printf("\nSubtraction: %.2f+ i %.2f",sub.real,sub.imag);

    complex multiplication = mult(z1,z2);
    printf("\nMultiplication: %.2f+ i %.2f",multiplication.real,multiplication.imag);

    complex division = divd(z1,z2);
    printf("\nDivison: %.2f + i %.2f",division.real,division.imag);

    float mod_z1 = mod(z1);
    float mod_z2 = mod(z2);
    printf("\nModulus of Complex number 1 is: %.2f",mod_z1);
    printf("\nModulus of Complex number 2 is: %.2f",mod_z2);

    complex z,z3;
    printf("\nEnter real part then imaginery part third complex number: ");
    scanf("%f %f",&z3.real,&z3.imag);

    printf("\nComplex number 3 = %.2f + i %.2f",z3.real,z3.imag);


    z = mult(divd(minus(z1,z2),addition(z1,z2)),z3);
    z.real+=4.39;
    printf("\nz= %f + i %f",z.real,z.imag);
    float mod_z = mod(z);
    printf("\nModulus of z= %.2lf",mod_z);


    return 0;
}
