/*
Name-Modi Meet
Roll no-22ME10053
lAB QUES-08-01
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Complex{
    float real;
    float imag;
}complex;

complex add(complex a,complex b){
    complex temp;
    temp.real=a.real + b.real;
    temp.imag= a.imag + b.imag;
    return temp;
}

complex subtract(complex a,complex b){
    complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;
    return temp;
}

complex mult(complex a,complex b){
    complex temp;
    temp.real = (a.real)*(b.real) - (a.imag)*(b.imag);
    temp.imag = (a.real)*(b.imag) + (a.imag)*(b.real);
    return temp;
}

float modz(complex a){
    float c = sqrt((a.real)*(a.real) + (a.imag)*(a.imag));
    return c;
}

complex division(complex a,complex b){
    complex temp;
    temp.real = ((a.real)*(b.real) + (a.imag)*(b.imag)) / (modz(b)*modz(b));
    temp.imag = ((a.real)*(b.imag)- (a.imag)*(b.real)) / (modz(b)*modz(b));
    return temp;
}

int main(){
    complex a,b,c;

    printf("Enter a complex number 1:\n");
    printf("Enter the real part :");
    scanf("%f",&a.real);
    printf("\nEnter the imaginary part :");
    scanf("%f",&a.imag);

    printf("Enter a complex number 2:\n");
    printf("Enter the real part :");
    scanf("%f",&b.real);
    printf("\nEnter the imaginary part :");
    scanf("%f",&b.imag);

    printf("\nEnter a complex number 3:\n");
    printf("Enter the real part :");
    scanf("%f",&c.real);
    printf("\nEnter the imaginary part :");
    scanf("%f",&c.imag);

    printf("\nThe complex number 1 is %f + i (%f) \n",a.real,a.imag);
    printf("The complex number 2 is %f + i (%f) \n",b.real,b.imag);
    printf("The complex number 3 is %f + i (%f) \n",c.real,c.imag);

    complex m = add(a,b);
    printf("The addition of first and second number is %f + i(%f).\n",m.real,m.imag);
    complex n = subtract(a,b);
    printf("The subtraction of first and second number is %f + i(%f).\n",n.real,n.imag);
    complex p = mult(a,b);
    printf("The multiplication of first and second number is %f + i(%f).\n",p.real,p.imag);
    complex o = division(a,b);
    printf("The division of first and second number is %f + i(%f).\n",o.real,o.imag);

    printf("Modulus of complex no 1 : %f \n",modz(a));
    printf("Modulus of complex no 2 : %f \n",modz(b));
    printf("Modulus of complex no 3 : %f \n",modz(c));

    complex q = subtract(a,b);
    complex r = add(a,b);
    complex s = division(q,r);
    complex t = mult(s,c);
    complex w;
    w.real = 4.39;
    w.imag =0;
    complex z = add(t,w);
    printf("The value of part C equation z is %f + i(%f) \n",z.real,z.imag);
    printf("Modulus of complex z : %f \n",modz(z));

    return 0;
}
