#include<stdio.h>
#include<math.h>
typedef struct complex_no{
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
complex mul(complex z1,complex z2)
{
    complex z;
    z.real=((z1.real*z2.real)-(z1.imag*z2.imag));
    z.imag=(z1.real*z2.imag+z2.real*z1.imag);
    return z;
}
complex div(complex z1,complex z2)
{   complex z;
    z.real=(z1.real*z2.real+z1.imag*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
    z.imag=(z2.real*z1.imag-z1.real*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
    return z;
}
float modulus(complex z1)
{
    return pow((z1.real*z1.real+z1.imag*z1.imag),0.5);
}

int main()
{
    complex z1,z2,z3,z,z4;
    printf("enter the first complex number\n");
    printf("enter the real part\n");
    scanf("%f",&z1.real);
    printf("enter the imaginary part\n");
    scanf("%f",&z1.imag);
    printf("enter the second complex number\n");
    printf("enter the real part\n");
    scanf("%f",&z2.real);
    printf("enter the imaginary part\n");
    scanf("%f",&z2.imag);
    printf("enter the third complex number\n");
    printf("enter the real part\n");
    scanf("%f",&z3.real);
    printf("enter the imaginary part\n");
    scanf("%f",&z3.imag);

    z = add(z1,z2);
    printf("complex number 1:%0.2f+%0.2f*i\n",z1.real,z1.imag);
    printf("complex number 2:%0.2f+%0.2f*i\n",z2.real,z2.imag);
    printf("Addition:%0.2lf+%0.2lfi\n",z.real,z.imag);
    z=sub(z1,z2);
    printf("subtraction:%0.2lf+%0.2lfi\n",z.real,z.imag);
    z=mul(z1,z2);
    printf("multiplication:%0.2lf+%0.2lfi\n",z.real,z.imag);
    z=div(z1,z2);
    printf("division:%0.2lf+%0.2lfi\n",z.real,z.imag);
    printf("modulus of complex number 1:%0.2f\n",modulus(z1));
    printf("modulus of complex number 2:%0.2f\n",modulus(z2));
    z4.real=4.39;
    z4.imag=0;
    z=add(mul(div(sub(z1,z2),add(z1,z2)),z3),z4);
    printf("value of z:%0.2lf+%0.2lfi\n",z.real,z.imag);
    printf("modulus of z:%0.2f\n",modulus(z));
    return 0;
}
