#include<stdio.h>
#include<math.h>
typedef struct Complex
{
    float real;
    float imag;
}complex;
complex add(complex z1, complex z2)
{
    complex temp;
    temp.real = z1.real+z2.real;
    temp.imag = z1.imag+z2.imag;
    return temp;
}
complex sub(complex z1,complex z2)
{
    complex temp;
    temp.real = z1.real-z2.real;
    temp.imag = z1.imag-z2.imag;
    return temp;
}
complex mul(complex z1,complex z2)
{
    complex temp;
    temp.real = z1.real*z2.real-z1.imag*z2.imag;
    temp.imag = z1.real*z2.imag+z2.real*z1.imag;
    return temp;
}
complex divc(complex z1,complex z2)
{
    complex temp;
    temp.real = (z1.real*z2.real+z1.imag*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
    temp.imag = (-z1.real*z2.imag+z2.real*z1.imag)/(z2.real*z2.real+z2.imag*z2.imag);
    return temp;
}
float modc(complex z1)
{
    float z = (float)sqrt(z1.real*z1.real+z1.imag*z1.imag);
    return z;
}
int main()
{
    complex z1,z2,z3,temp,t;
    printf("Enter the first complex number\n");
    printf("Enter the real part\n");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part\n");
    scanf("%f",&z1.imag);
    printf("Enter the second complex number\n");
    printf("Enter the real part\n");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part\n");
    scanf("%f",&z2.imag);
    printf("Enter the third complex number\n");
    printf("Enter the real part\n");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part\n");
    scanf("%f",&z3.imag);
    complex a,s,m,d,z;float mo1,mo2,moz;
    printf("Complex number 1: %f + %f i\n",z1.real,z1.imag);
    printf("Complex number 2: %f + %f i\n",z2.real,z2.imag);
    a = add(z1,z2);
    s = sub(z1,z2);
    m = mul(z1,z2);
    d = divc(z1,z2);
    mo1 = modc(z1);
    mo2 = modc(z2);
    t = mul(divc(sub(z1,z2),add(z1,z2)),z3);
    temp.real = 4.39;
    temp.imag = 0;
    z = add(t,temp);
    moz = modc(z);
    printf("Addition: %0.2f + %0.2f i\n",a.real,a.imag);
    printf("Subtraction: %0.2f + %0.2f i\n",s.real,s.imag);
    printf("Multiplication: %0.2f + %0.2f i\n",m.real,m.imag);
    printf("Division: %0.2f + %0.2f i\n",d.real,d.imag);
    printf("Modulus of complex number 1: %0.2f\n",mo1);
    printf("Modulus of complex number 2: %f\n",mo2);
    printf("Value of z: %f + %f i\n",z.real,z.imag);
    printf("Modulus of z: %f\n",moz);
}
