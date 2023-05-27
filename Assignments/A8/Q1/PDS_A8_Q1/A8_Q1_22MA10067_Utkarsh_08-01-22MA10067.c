
/*
* Section 2
* Roll No : 22MA10067
* Name : Your Name
* Assignment No : 8
* Description : Program to read complex numbers and various operations
*/
#include <stdio.h>
#include <math.h>


typedef struct Complex {
    float real;
    float imag;
}complex;
    complex add(complex z1,complex z2){
        complex z;
        z.real=z1.real + z2.real;
        z.imag=z1.imag + z2.imag;
        return z;
    }

     complex sub(complex z1,complex z2){
        complex z;
        z.real=z1.real - z2.real;
        z.imag=z1.imag - z2.imag;
        return z;
    }

     complex mul(complex z1,complex z2){
        complex z;
        z.real=z1.real*z2.real-z1.imag*z2.imag;
        z.imag=z1.real*z2.imag+z2.real*z1.imag;
        return z;
    }

     complex divc(complex z1,complex z2){
        complex z;
        z.real=(z1.real*z2.real+z1.imag*z2.imag)/(pow(z2.real,2)+pow(z2.imag,2));
        z.imag=((-z1.real*z2.imag+z2.real*z1.imag)/(pow(z2.real,2)+pow(z2.imag,2)));
        return z;
    }

    float modc(complex z1){
        float z;
        z=sqrt(pow(z1.real,2)+pow(z1.imag,2));
        return z;
    }


int main()
{
    complex z1, z2, z3,zsum,zsub,zmul,zdiv,z,zdivc,zmultc;
    printf("Enter the first complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z1.imag);

    printf("Enter the second complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z2.imag);

    printf("Enter the third complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z3.imag);

    zsum=add(z1,z2); zsub=sub(z1,z2); zmul=mul(z1,z2); zdiv=divc(z1,z2);
    zdivc=divc(zsub,zsum); zmultc=mul(zdivc,z3); z.real=zmultc.real+4.39;
    z.imag=zmultc.imag;


    printf("Complex number 1: %0.2f + %0.2fi\n",z1.real,z1.imag);
    printf("Complex number 2: %0.2f + %0.2fi\n",z2.real,z2.imag);
    printf("Addition: %0.2f + %0.2fi\n",zsum.real,zsum.imag);
    printf("Subtraction: %0.2f + %0.2fi\n",zsub.real,zsub.imag);
    printf("Multiplication: %0.2f + %0.2fi\n",zmul.real,zmul.imag);
    printf("Division: %0.2f + %0.2fi\n",zdiv.real,zdiv.imag);
    printf("Modulus of complex number 1: %0.2f\n",modc(z1));
    printf("Modulus of complex number 2: %0.2f\n",modc(z2));
    printf("Value of z: %0.2f + %0.2fi\n",z.real,z.imag);
    printf("Modulus of z: %0.2f\n",modc(z));
    return 0;

}

