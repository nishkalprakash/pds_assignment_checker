#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct Complex{
    float real;
    float imag;
}complex;

complex add(complex z1,complex z2)
{
    complex z3;
    z3.real = z1.real + z2.real;
    z3.imag = z1.imag + z2.imag;

    return z3;
}

complex sub(complex z1,complex z2)
{
    complex z3;
    z3.real = z1.real - z2.real;
    z3.imag = z1.imag - z2.imag;

    return z3;
}

complex mul(complex z1,complex z2)
{
    complex z3;
    z3.real = (z1.real*z2.real)-(z1.imag*z2.imag);
    z3.imag = (z1.real*z2.imag)+(z1.imag*z2.real);

    return z3;
}

complex div_c(complex z1,complex z2)
{
    complex z3;
    z2.imag*=(-1);
    z3 = mul (z1,z2);
    z3.real/= (z2.real*z2.real + z2.imag*z2.imag );
    z3.imag/= (z2.real*z2.real + z2.imag*z2.imag );
    return z3;
}

float mod(complex z1)
{
    float x;
    x= (float)pow((z1.real*z1.real) + (z1.imag*z1.imag),0.5);
    return x;
}

int main()
{
    complex a,b,c,sum,min,multi,divi,z;
    float f,g,h;
    printf("enter the first complex number :\n");
    printf("enter the real part : ");
    scanf("%f",&a.real);
    printf("enter the imaginary part : ");
    scanf("%f",&a.imag);
    printf("enter the second complex number :\n");
    printf("enter the real part : ");
    scanf("%f",&b.real);
    printf("enter the imaginary part : ");
    scanf("%f",&b.imag);
    printf("enter the third complex number :\n");
    printf("enter the real part : ");
    scanf("%f",&c.real);
    printf("enter the imaginary part : ");
    scanf("%f",&c.imag);
    printf("\nComplex number 1 : %.2f + %.2fi",a.real,a.imag);
    printf("\nComplex number 2 : %.2f + %.2fi\n",b.real,b.imag);

    sum=add(a,b);
    printf("Addittion : %.2f + %.2fi\n",sum.real,sum.imag);

    min=sub(a,b);
    printf("subtraction : %.2f + %.2fi\n",min.real,min.imag);

    multi=mul(a,b);
    printf("multiplication : %.2f + %.2fi\n",multi.real,multi.imag);

    divi=div_c(a,b);
    printf("division : %.2f + %.2fi\n",divi.real,divi.imag);

    f=mod(a);
    g=mod(b);

    printf("Modulus of complex number 1 : %.2f\n",f);
    printf("Modulus of complex number 2 : %.2f\n",g);

    z=mul((div_c(sub(a,b),add(a,b))),c);
    z.real+= 4.39;
    printf("value of z : %.2f + %.2fi\n",z.real,z.imag);
    h=mod(z);
    printf("Modulus of z : %.2f\n",h);


}
