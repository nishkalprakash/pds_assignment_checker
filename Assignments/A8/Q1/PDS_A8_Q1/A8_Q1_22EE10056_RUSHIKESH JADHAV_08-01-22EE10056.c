#include<stdio.h>
#include<math.h>
typedef struct complex
{
    float real;
    float imag;
}complex;
complex add(complex z1,complex z2)
{
    complex z;
    z.real=z1.real+z2.real;
    z.imag=z1.imag+z2.imag;
    return z;
}
complex sub(complex z1,complex z2)
{
    complex z;
    z.real=z1.real-z2.real;
     z.imag=z1.imag-z2.imag;
     return z;
}
complex mult(complex z1,complex z2)
{
    complex z;
    z.real=z1.real*z2.real-z1.imag*z2.imag;
    z.imag=z1.real*z2.imag+z1.imag*z2.real;
    return z;
}
complex div(complex z1,complex z2)
{
    complex z;
    z.real=(z1.real*z2.real+z1.imag*z2.imag)/((pow(z2.real,2)+pow(z2.imag,2)));
    z.imag=-1*(z1.real*z2.imag-z1.imag*z2.real)/((pow(z2.real,2)+pow(z2.imag,2)));
    return z;
}
int main()
{
    complex z1,z2,z3,z,x1,x2,x3;
    printf("Enter the first complex number:\nEnter real part:");
    scanf("%f",&z1.real);
    printf("Enter imaginary part:");
    scanf("%f",&z1.imag);
    printf("Enter the second complex number:\nEnter real part:");
    scanf("%f",&z2.real);
    printf("Enter imaginary part:");
    scanf("%f",&z2.imag);
    printf("Enter the third complex number:\nEnter real part:");
    scanf("%f",&z3.real);
    printf("Enter imaginary part:");
    scanf("%f",&z3.imag);
    printf("Complex number 1:%0.2f + %0.2fi\n",z1.real,z1.imag);
    printf("Complex number 2:%0.2f + %0.2fi\n",z2.real,z2.imag);
    z=add(z1,z2);
    printf("Addition:%0.2f + %0.2fi\n",z.real,z.imag);
    z=sub(z1,z2);
    printf("Subtraction:%0.2f + %0.2fi\n",z.real,z.imag);
    z=mult(z1,z2);
    printf("Multiplication:%0.2f + %0.2fi\n",z.real,z.imag);
    z=div(z1,z2);
    printf("Division:%f + %0.2fi\n",z.real,z.imag);
    printf("Modulus of complex number 1:%0.2f\n",sqrt(pow(z1.real,2)+pow(z1.imag,2)));
    printf("Modulus of complex number 2:%0.2f\n",sqrt(pow(z2.real,2)+pow(z2.imag,2)));
    z=mult(div(sub(z1,z2),add(z1,z2)),z3);
    printf("value of z=%0.2f + %0.2fi\n",z.real,z.imag);
    z.real=z.real+4.39;
    printf("value of z=%0.2f + %0.2fi\n",z.real,z.imag);
    printf("Modulus of complex number z:%0.2f\n",sqrt(pow(z.real,2)+pow(z.imag,2)));


    return 0;
}
