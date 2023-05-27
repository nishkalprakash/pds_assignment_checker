/*Jaydeep parmar
22AG30016
PROBLEM 1*/


#include <stdio.h>
#include<math.h>
typedef struct complex
{
    float real;
    float imag;
} complex;
complex add(complex h1, complex h2);
complex sub(complex h1, complex h2);
complex mul(complex h1, complex h2);
complex div(complex h1, complex h2);
float mood(complex z1);
int main()
{
    complex k1, k2, answer,answer1,answer2,answer3,k3,k4,k5;
    float answer4,answer5,answer6;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &k1.real, &k1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &k2.real, &k2.imag);
    answer = add(k1, k2);
    answer1 = sub(k1,k2);
    answer2 =mul(k1,k2);
    answer3=div(k1,k2);
    answer4=mood(k1);
    answer5=mood(k2);
    k4=div(answer1,answer);
    printf("complex number 1: %.2f + %.2f i\n",k1.real,k1.imag);
    printf("complex number 1: %.2f + %.2f i\n",k2.real,k2.imag);
    printf("Sum = %.2f + %.2fi\n", answer.real, answer.imag);
    printf("difference: %.2f + %.2fi\n", answer1.real, answer1.imag);
    printf("product: %.2f + %.2fi\n", answer2.real, answer2.imag);
    printf("division: %.2f + %.2fi\n", answer3.real, answer3.imag);
    printf("modulus of complex number 1: %.2f\n",answer4);
    printf("modulus of complex number 2: %.2f\n",answer5);
    printf("\n");
    printf("For 3rd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &k3.real, &k3.imag);
    k5=mul(k4,k3);
    k5.real=k5.real+4.39;
    printf("value of z: %.2f + %.2f i\n",k5.real,k5.imag);
    answer6=mood(k5);
    printf("modulus of z: %.2f\n",answer6);
    return 0;
}
complex add(complex k1, complex k2)
{
    complex tans;
    tans.real = k1.real + k2.real;
    tans.imag = k1.imag + k2.imag;
    return (tans);
}
complex sub(complex k1, complex k2)
{
    complex sans;
    sans.real = k1.real - k2.real;
    sans.imag = k1.imag - k2.imag;
    return (sans);
}
complex mul(complex k1, complex k2)
{
    complex kans;
    kans.real = ((k1.real*k2.real)-(k1.imag*k2.imag));
    kans.imag =((k1.real*k2.imag)+(k2.real*k1.imag));
    return (kans);
}
complex div(complex k1, complex k2)
{
    complex cans;
    cans.real = ((k1.real)*(k2.real)+(k1.imag)*(k2.imag))/((k2.real*k2.real)+(k2.imag*k2.imag));
    cans.imag = (-(k1.real)*(k2.imag)+(k1.imag)*(k2.real))/((k2.real*k2.real)+(k2.imag*k2.imag));
    return (cans);
}
float mood(complex z1)
{
    float t;
    t=sqrt(((z1.real)*(z1.real))+((z1.imag)*(z1.imag)));
    return t;
}

