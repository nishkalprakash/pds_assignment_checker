#include<stdio.h>
#include<math.h>
struct complex
    {
        float real;
        float imag;
    };
struct complex add(struct complex,struct complex);
struct complex sub(struct complex,struct complex);
struct complex mul(struct complex,struct complex);
struct complex div(struct complex,struct complex);
float mod(struct complex);

int main()
{

    struct complex z1,z2,z3,b,m,s,d,z,y;
    float m1,m2,m3;
    printf("Enter the first Complex number:\nEnter the real part: ");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part: ");
     scanf("%f",&z1.imag);
      printf("Enter the second Complex number:\nEnter the real part: ");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part: ");
     scanf("%f",&z2.imag);
     printf("Enter the third Complex number:\nEnter the real part: ");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part: ");
     scanf("%f",&z3.imag);
     printf("\ncomplex number 1: %.2f + %.2fi",z1.real,z1.imag);
     printf("\ncomplex number 2: %.2f + %.2fi",z2.real,z2.imag);
     printf("\ncomplex number 3: %.2f + %.2fi",z3.real,z3.imag);

     b=add(z1,z2);
     s=sub(z1,z2);
     m=mul(z1,z2);
     d=div(z1,z2);
     m1=mod(z1);
     m2=mod(z2);
     printf("\nAddition: %.2f + %.2fi",b.real,b.imag);
     printf("\nSubtraction: %.2f + %.2fi",s.real,s.imag);
     printf("\nMultiplication: %.2f + %.2fi",m.real,m.imag);
     printf("\ndivision: %.2f + %.2fi",d.real,d.imag);
     printf("\nModulas of complex number 1: %.2f",m1);
     printf("\nModulas of complex number 2: %.2f",m2);
     /*question c*/
     y=div(s,b);
     z=mul(y,z3);
     z.real+=4.39;
     m3=mod(z);
     printf("\nvalue of z: %.2f + %.2fi\nModulas of z: %.2f",z.real,z.imag,m3);
     return 0;

}
struct complex add(struct complex z1,struct complex z2)
{
    struct complex a;
    a.real=z1.real+z2.real;
    a.imag=z1.imag+z2.imag;
    return a;
}
struct complex sub(struct complex z1,struct complex z2)
{
    struct complex p;
    p.real=z1.real-z2.real;
    p.imag=z1.imag-z2.imag;
    return p;
}
struct complex mul(struct complex z1,struct complex z2)
{
    struct complex q;
    q.real=z1.real*z2.real-z1.imag*z2.imag;
    q.imag=z1.real*z2.imag+z1.imag*z2.real;
    return q;
}
struct complex div(struct complex z1,struct complex z2)
{
    struct complex r;
    double r1=z2.imag*z2.imag+z2.real*z2.real;
    r.real=(z1.real*z2.real+z1.imag*z2.imag)/r1;
    r.imag=(0-(z1.real*z2.imag-z1.imag*z2.real))/r1;
    return r;
}
float mod(struct complex z)
{
    float e,f=(z.real*z.real+z.imag*z.imag);
    e=pow (f,0.5);
    return e;
}
