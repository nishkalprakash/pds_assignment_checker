#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  typedef struct Complex { // defining stucture

    float real;
    float img;

} complex ; // declaring variables for mutiple complex number

 complex add(complex z1, complex z2); // defining function for addition of complex
 complex sub(complex z1, complex z2); // defining function for subtraction of complex
 complex mult(complex z1, complex z2);// defining function for multiplication of complex
 complex divi(complex z1, complex z2);// defining function for division of complex
 complex mod(complex z1);// defining function for modulus of complex


int main(){

    complex z;
    complex z1;
    complex z2;
    complex z3;

    printf("Enter the first complex number\n");

    printf("Enter the real part of complex number 1 \n");
    scanf("%f", &z1.real); // taking input for real part of z1

    printf("Enter the imaginary part of complex number 2 \n");
    scanf("%f", &z1.img);// taking input for img part of z1

    printf("Complex number 1 : %.2f + %.2fi", z1.real, z1.img); // printing the first complex number

    printf("Enter the second complex number \n");

    printf("Enter the real part of complex number 2 \n");
    scanf("%f", &z2.real);// taking input for real part of z2

    printf("Enter the imaginary part of complex number 2 \n");
    scanf("%f", &z2.img);// taking input for img part of z2

    printf("Complex number 2 : %.2f + %.2fi", z2.real, z2.img);// printing the second complex number

    complex add(z1,z2); // calling function for addition
    complex sub(z1,z2); // calling function for subtraction
    complex mult(z1,z2); // calling function for multiplication
    complex divi(z1,z2); // calling function for division

    printf("Enter the third complex number \n");

    printf("Enter the real part of complex number 3 \n");
    scanf("%f", &z3.real);// taking input for real part of z3

    printf("Enter the imaginary part of complex number 3 \n");
    scanf("%f", &z3.img);// taking input for img part of z3

    printf("Complex number 3 : %.2f + %.2fi", z3.real, z3.img);// printing the third complex number

    //z = ((z1-z2)/(z1+z2))*z3 + 4.39;

    //printf("Modulus of z : %d", z); // printing modulus of |z|

    return 0;
}

    complex add(complex z1, complex z2){

    complex sum;

    sum.real = z1.real + z2.real;
    sum.img = z1.img + z2.img;

    printf("Addition = %.2f + %.2fi", sum.real, sum.img); // printing sum of z1 and z2

    }

    complex sub(complex z1, complex z2){

        complex diff;

        diff.real = z1.real - z2.real;
        diff.img = z1.img - z2.img;

        printf("Subtraction = %.2f + %.2fi", diff.real, diff.img);// printing sub of z1 and z2

    }

     complex mult(complex z1, complex z2){

        complex prod;

        prod.real = z1.real * z2.real;
        prod.img = z1.img * z2.img;

        printf("Multiplication = %.2f + %.2fi", prod.real, prod.img);// printing mult of z1 and z2

    }

     complex divi(complex z1, complex z2){

        complex division;

        division = ((z1.real*z2.real + z1.img*z2.img) - (z1.real*z2.img - z2.real*z1.img))/(z2.real*z2.real + z2.img*z2.img);

        printf("Division = %.2f + %.2fi", division.real, division.img);// printing divi of z1 and z2

    }

    complex mod(complex z1){

        complex modulo;

        modulo = sqrt(z1.real*z1.real + z1.img*z1.img);

        printf("Modulus of complex number 1 : %.2f + %.2fi", modulo.real, modulo.img);// printing mod of z1

    }

