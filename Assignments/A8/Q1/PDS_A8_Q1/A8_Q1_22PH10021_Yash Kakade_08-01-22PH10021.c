
/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 8
* Description : To calculate various mathematical operations of complex numbers
*/




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Complex{
    float real;
    float imag;
} complex;

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
     z3.real=z1.real*z2.real-z1.imag*z2.imag;
     z3.imag=z1.real*z2.imag+z2.real*z1.imag;

     return z3;
 }

 complex divc(complex z1,complex z2){
     complex z3;
     float deno;
     deno=(pow(z2.real,2)+pow(z2.imag,2));

     z3.real=(z1.real*z2.real + z1.imag*z2.imag)/deno;
     z3.imag=(z1.real*z2.imag - z2.real*z1.imag)/deno;

     return z3;
 }

 float modc(complex z1){
     float z;
      z=sqrt(pow(z1.real,2)+pow(z1.imag,2));

     return z;

 }




int main(){
    complex z1,z2,z3,z4,z5,z6,z7,z8;

    printf("\nEnter the first complex number ");
    printf("\nEnter real part of the number: ");
    scanf("%f",&z1.real);
    printf("\nEnter imagenary part of the number: ");
    scanf("%f",&z1.imag);

    printf("\nEnter the second complex number: ");
    printf("\nEnter real part of the number: ");
    scanf("%f",&z2.real);
    printf("\nEnter imagenary part of the number: ");
    scanf("%f",&z2.imag);

    printf("\nEnter the third complex number: ");
    printf("\nEnter real part of the number: ");
    scanf("%f",&z3.real);
    printf("\nEnter imagenary part of the number: ");
    scanf("%f",&z3.imag);

    printf("\nComplex number 1: %f + i%f",z1.real,z1.imag);
    printf("\nComplex number 2: %f + i%f",z2.real,z2.imag);

    z4=add(z1,z2);
    printf("\nAddition: %f + %f i",z4.real,z4.imag);

    z5=sub(z1,z2);
    printf("\nSubstraction: %f + %f i",z5.real,z5.imag);


    z6=mul(z1,z2);
    printf("\nMultiplication: %f + %f i",z6.real,z6.imag);

    z7=divc(z1,z2);
    printf("\nDivision: %f + %f i",z7.real,z7.imag);

    z8=mul(divc(sub(z1,z2),add(z1,z2)),z3);
    z8.real=z8.real+4.39;

    printf("\nValue of z: %f + %f i",z8.real,z8.imag);

    float z9=modc(z8);
    printf("\nModulus of z: %f",z9);














return 0;


}
