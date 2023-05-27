/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 8
* Description : Operations on complex numbers
*/
#include<stdio.h>
#include<math.h>
typedef struct complex{
float real;
float img;
}complex;
complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.img=a.img+b.img;
  printf("Addition : %.2f+%.2fi\n",sum.real,sum.img);
}
complex add1(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.img=a.img+b.img;
  return sum;
}
complex sub(complex a,complex b)
{
  complex sub;
  sub.real=a.real-b.real;
  sub.img=a.img-b.img;
  printf("Subtraction : %.2f+%.2fi\n",sub.real,sub.img);
}
complex sub1(complex a,complex b)
{
  complex sub;
  sub.real=a.real-b.real;
  sub.img=a.img-b.img;
  return sub;
}
complex mul(complex a,complex b)
{
    complex mul;
    mul.real=a.real*b.real-a.img*b.img;
    mul.img=a.real*b.img+a.img*b.real;
    printf("Multiplication : %.2f+%.2fi\n",mul.real,mul.img);
}
complex mul1(complex a,complex b)
{
    complex mul;
    mul.real=a.real*b.real-a.img*b.img;
    mul.img=a.real*b.img+a.img*b.real;
    return mul;
}
complex div(complex a,complex b)
{
    complex div;
    div.real=(a.real*b.real+a.img*b.img)/(b.real*b.real+b.img*b.img);
    div.img=(-a.real*b.img+a.img*b.real)/(b.real*b.real+b.img*b.img);
    printf("Division : %.2f+%.2fi\n",div.real,div.img);
}
complex div1(complex a,complex b)
{
    complex div;
    div.real=(a.real*b.real+a.img*b.img)/(b.real*b.real+b.img*b.img);
    div.img=(-a.real*b.img+a.img*b.real)/(b.real*b.real+b.img*b.img);
    return div;
}
float mod(complex a)
{
    float x=sqrt(a.real*a.real+a.img*a.img);
    return x;

}
int main()
{
    complex z1,z2,z3;
    printf("Enter the first complex number\n");
    printf("Enter the real part\n");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part\n");
    scanf("%f",&z1.img);
    printf("Complex number 1: %.2f+%.2fi\n",z1.real,z1.img);
    printf("Enter the second complex number\n");
    printf("Enter the real part\n");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part\n");
    scanf("%f",&z2.img);
    printf("Complex number 2: %.2f+%.2fi\n",z2.real,z2.img);
    printf("Enter the third complex number\n");
    printf("Enter the real part\n");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part\n");
    scanf("%f",&z3.img);
    printf("Complex number 3: %.2f+%.2fi\n",z3.real,z3.img);
    add(z1,z2);
    sub(z1,z2);
    mul(z1,z2);
    div(z1,z2);
    printf("Value of mod of complex number 1:%.2f\n",mod(z1));
    printf("Value of mod of complex number 2:%.2f\n",mod(z2));
    complex z=mul1(div1(sub1(z1,z2),add1(z1,z2)),z3);
    z.real+=4.39;
    printf("Value of z: %.2f+%.2fi",z.real,z.img);
    printf("Value of mod of complex number z:%.2f",mod(z));
    return 0;
}
