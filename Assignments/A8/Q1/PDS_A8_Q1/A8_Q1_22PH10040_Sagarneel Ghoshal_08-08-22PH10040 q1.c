/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-8
*Description- Complex Number
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Complex{
    float real;
    float imag;
}complex;

complex add(complex z1,complex z2){
    complex z3;
    z3.real=z1.real+z2.real;
    z3.imag=z1.imag+z2.imag;
    return z3;

}

complex sub(complex z1,complex z2){
    complex z3;
    z3.real=z1.real-z2.real;
    z3.imag=z1.imag-z2.imag;
    return z3;
}

complex mul(complex z1,complex z2){
    complex z3;
    z3.real=(z1.real*z2.real-z2.imag*z1.imag);
    z3.imag=(z1.real*z2.imag+z2.real*z1.imag);
    return z3;
}

float modulus(complex z){
    float modulus;
    modulus=pow(pow(z.real,2)+pow(z.imag,2),0.5);
    return modulus;

}

complex divc(complex z1,complex z2){
    complex z3;
    float denom=pow(modulus(z2),2);
    z3.real=(z1.real*z2.real+z2.imag*z1.imag)/denom;
    z3.imag=-((z1.real*z2.imag-z2.real*z1.imag)/denom);
    return z3;
}


int main(){
    complex z1,z2,z3,z4,z;
    printf("Enter the first complex number:");
    printf("\nEnter the real part: ");
    scanf("%f",&z1.real);
    printf("\nEnter the complex part: ");
    scanf("%f",&z1.imag);

    printf("\nEnter the second complex number:");
    printf("\nEnter the real part: ");
    scanf("%f",&z2.real);
    printf("\nEnter the complex part: ");
    scanf("%f",&z2.imag);

    printf("\nEnter the third complex number:");
    printf("\nEnter the real part: ");
    scanf("%f",&z3.real);
    printf("\nEnter the complex part: ");
    scanf("%f",&z3.imag);

    printf("\nComplex number 1: %f + %fi",z1.real,z1.imag);
    printf("\nComplex number 2: %f + %fi",z2.real,z2.imag);

    z4=add(z1,z2);
    printf("\nAddition: %f + %fi",z4.real,z4.imag);

    z4=sub(z1,z2);
    printf("\nSubtraction: %f + %fi",z4.real,z4.imag);

    z4=mul(z1,z2);
    printf("\nMultiplication: %f + %fi",z4.real,z4.imag);

    z4=divc(z1,z2);
    printf("\nDivision: %f + %fi",z4.real,z4.imag);

    printf("\nModulus of complex number 1: %f",modulus(z1));
    printf("\nModulus of complex number 1: %f",modulus(z2));

    printf("\n\n");
    z=mul(divc(sub(z1,z2),add(z1,z2)),z3);
    z.real+=4.39;
    printf("Value of z : %f + %fi",z.real,z.imag);
    printf("\nModulus of z: %f",modulus(z));





    return 0;

}

