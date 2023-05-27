/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 8
Description : Complex numbers with structures
*/

#include<stdio.h>
#include<math.h>

typedef struct Complex {
    float real;
    float imag;
} complex;

//Defining functions

//Addition
complex addn(complex z1, complex z2)
{
    complex z;
    z.real = z1.real + z2.real;
    z.imag = z1.imag + z2.imag;

    return z;
}

//Subtraction
complex subn(complex z1, complex z2)
{
    complex z;
    z.real = z1.real - z2.real;
    z.imag = z1.imag - z2.imag;

    return z;
}

//Multiplication
complex muln(complex z1, complex z2)
{
    complex z;
    z.real = (z1.real * z2.real) - (z1.imag * z2.imag);
    z.imag = (z1.real * z2.imag) + (z1.imag * z2.real);

    return z;
}

//Division
complex divn(complex z1, complex z2)
{
    complex z;
    z.real = ((z1.real * z2.real) + (z1.imag * z2.imag))/(pow(z2.real, 2) + pow(z2.imag, 2));
    z.imag = (-1)*((z1.real * z2.imag) - (z1.imag * z2.real))/(pow(z2.real, 2) + pow(z2.imag, 2));

    return z;
}

//Modulus
float mods(complex z1)
{
    float modz;
    modz = sqrt(pow(z1.real, 2) + pow(z1.imag, 2));
    return modz;
}

int main()
{
    //Defining variables
    complex z_1, z_2, z_3, z_add, z_sub, z_mul, z_div;


    //First Number
    printf("Enter the first complex number : \n");
    //Real part
    printf("Enter the real part : ");
    scanf("%f", &z_1.real);
    //Imaginary part
    printf("Enter the imaginary part : ");
    scanf("%f", &z_1.imag);


    //Second Number
    printf("Enter the second complex number : \n");
    //Real part
    printf("Enter the real part : ");
    scanf("%f", &z_2.real);
    //Imaginary part
    printf("Enter the imaginary part : ");
    scanf("%f", &z_2.imag);


    //Third Number
    printf("Enter the third complex number : \n");
    //Real part
    printf("Enter the real part : ");
    scanf("%f", &z_3.real);
    //Imaginary part
    printf("Enter the imaginary part : ");
    scanf("%f", &z_3.imag);


    //Calling functions

    //Add
    printf("Addition : ");
    z_add = addn(z_1, z_2);
    printf("%.2f + %.2f i", z_add.real, z_add.imag);
    printf("\n");

    //Sub
    printf("Subtraction : ");
    z_sub = subn(z_1, z_2);
    printf("%.2f + %.2f i", z_sub.real, z_sub.imag);
    printf("\n");

    //Multiply
    printf("Multiplication : ");
    z_mul = muln(z_1, z_2);
    printf("%.2f + %.2f i", z_mul.real, z_mul.imag);
    printf("\n");

    //Division
    printf("Division : ");
    z_div = divn(z_1, z_2);
    printf("%.2f + %.2f i", z_div.real, z_div.imag);
    printf("\n");

    //Modulus
    printf("Mod of complex number 1 : %.2f", mods(z_1));
    printf("\n");

    printf("Mod of complex number 2 : %.2f", mods(z_2));
    printf("\n");


    //Calculating final Z
    complex z, z_exp;
    z_exp = muln(divn(subn(z_1, z_2), addn(z_1, z_2)), z_3);
    z.real = z_exp.real + 4.39;
    z.imag = z_exp.imag;

    //Printing Z
    printf("Value of z : ");
    printf("%.2f + %.2f i", z.real, z.imag);
    printf("\n");
    printf("Mod of z : %.2f", mods(z));
    printf("\n");

    return 0;
}


