#include <stdio.h>
#include <math.h>
typedef struct Complex{
    float real;
    float imag;
    }complex;

complex add(complex z1,complex z2)      //sum
{
    complex sum;
    sum.real=z1.real+z2.real;
    sum.imag=z1.imag+z2.imag;
    return sum;
}

complex sub(complex z1,complex z2)      //sub
{
    complex sub;
    sub.real=z1.real-z2.real;
    sub.imag=z1.imag-z2.imag;
    return sub;
}

complex mul(complex z1,complex z2)      //multiply
{
    complex m;
    float x1,y1,x2,y2;
    x1=z1.real;
    x2=z2.real;
    y1=z1.imag;
    y2=z2.imag;
    m.real=(x1*x2 - y1*y2);
    m.imag=(x1*y2 + x2*y1);
    return m;
}

complex divc(complex z1,complex z2)     //divide
{
    complex d;
    float x1,y1,x2,y2,m;
    x1=z1.real;
    x2=z2.real;
    y1=z1.imag;
    y2=z2.imag;
    m=x2*x2 +y2*y2;
    d.real=(x1*x2 + y1*y2)/m;
    d.imag=(x1*y2 - x2*y1)/m;
    return d;
}

float modc(complex z1)      //modulus
{
    float m,x2,y2;
    x2=z1.real;
    y2=z1.imag;
    m=sqrt(x2*x2 + y2*y2);
    return m;
}

void main()
{
    complex z,z1,z2,z3,sum,min,m,d;
    float z1_mod,z2_mod,z3_mod,z_mod;
    printf("Enter real and imaginary part of z1: \n");
    scanf("%f %f",&z1.real,&z1.imag);
    printf("Enter real and imaginary part of z2: \n");
    scanf("%f %f",&z2.real,&z2.imag);
    printf("Enter real and imaginary part of z3: \n");
    scanf("%f %f",&z3.real,&z3.imag);
    sum=add(z1,z2);
    min=sub(z1,z2);
    m=mul(z1,z2);
    d=divc(z1,z2);
    z1_mod=modc(z1);
    z2_mod=modc(z2);
    z3_mod=modc(z3);
    z_mod=modc(z);
    z=mul(divc(min,sum),z3);
    z.real=z.real+4.39;
    z_mod=modc(z);
    printf("\n z1: %f + i (%f)",z1.real,z1.imag);
    printf("\n z2: %f + i (%f)",z2.real,z2.imag);
    printf("\n z3: %f + i (%f)",z3.real,z3.imag);
    printf("\n addition: %f +i (%f)",sum.real,sum.imag);
    printf("\n substration: %f + i (%f)",min.real,min.imag);
    printf("\n multiplication: %f +i (%f)",m.real,m.imag);
    printf("\n division: %f + i (%f)",d.real,d.imag);
    printf("\n modulus of z1: %f ",z1_mod);
    printf("\n modulus of z2: %f ",z2_mod);
    printf("\n modulus of z3: %f ",z3_mod);
    printf("\n modulus of z: %f ",z_mod);
    printf("\n z: %f + i (%f)",z.real,z.imag);
}
