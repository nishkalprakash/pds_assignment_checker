/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 1
Description: Complex number
*/
#include <stdio.h>  //Header files
#include <math.h>
typedef struct complex{   //defining complex data type
    float real;
    float imag;
}complex;

complex add(complex z1,complex z2) //adds 2 complex numbers
{
    complex sum;
    sum.real = z1.real+z2.real;
    sum.imag = z1.imag+z2.imag;
    return sum;
}

complex sub(complex z1,complex z2)  //subtracts 2 complex numbers
{
    complex diff;
    diff.real = z1.real-z2.real;
    diff.imag = z1.imag-z2.imag;
    return diff;
}

complex mul(complex z1,complex z2)  //multiplies 2 complex numbers
{
    complex p;
    p.real = (z1.real*z2.real)-(z1.imag*z2.imag);
    p.imag = (z1.real*z2.imag)+(z1.imag*z2.real);
    return p;
}

complex divc(complex z1,complex z2)  //divides 2 complex numbers
{
    complex q;
    q.real = (z1.real*z2.real+z1.imag*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
    q.imag = (-z1.real*z2.imag+z2.real*z1.imag)/(z2.real*z2.real+z2.imag*z2.imag);
    return q;
}
float modd(complex z1)   //finds the mod of complex number
{
    float m;
    m = (float)sqrt(z1.real*z1.real+z1.imag*z1.imag);
    return m;
}
int main()
{
    complex n1,n2,n3,z;
    printf("Enter the first complex number:\n");   //takes input from user
    printf(" Enter the real part:\n");
    scanf("%f",&n1.real);
    printf(" Enter the imaginary part:\n");
    scanf("%f",&n1.imag);
    printf("Enter the second complex number:\n");
    printf(" Enter the real part:\n");
    scanf("%f",&n2.real);
    printf(" Enter the imaginary part:\n");
    scanf("%f",&n2.imag);
    printf("Enter the third complex number:\n");
    printf(" Enter the real part:\n");
    scanf("%f",&n3.real);
    printf(" Enter the imaginary part:\n");
    scanf("%f",&n3.imag);

    z.real = mul(n3,divc(sub(n1,n2),add(n1,n2))).real+4.39;  //calculates real and imaginary parts of z
    z.imag = mul(n3,divc(sub(n1,n2),add(n1,n2))).imag;

    printf("Complex number 1: (%f)+(%f)i",n1.real,n1.imag);   //prints
    printf("\nComplex number 2: (%f)+(%f)i",n2.real,n2.imag);
    printf("\nAddition: (%f)+(%f)i",add(n1,n2).real,add(n1,n2).imag);
    printf("\nSubtraction: (%f)+(%f)i",sub(n1,n2).real,sub(n1,n2).imag);
    printf("\nMultiplication: (%f)+(%f)i",mul(n1,n2).real,mul(n1,n2).imag);
    printf("\nDivision: (%f)+(%f)i",divc(n1,n2).real,divc(n1,n2).imag);
    printf("\nModulus of complex number 1: %f",modd(n1));
    printf("\nModulus of complex number 2: %f",modd(n2));
    printf("\nValue of z: (%f)+(%f)i",z.real,z.imag);
    printf("\nModulus of z: %f",modd(z));

    return 0;   //end
}
