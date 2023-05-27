#include<stdio.h>
#include<math.h>
typedef struct Complex {
float real ;
float imag ;
} complex ;
complex add(complex c1,complex c2);
complex sub(complex c1,complex c2);
complex mul(complex c1,complex c2);
complex div(complex c1,complex c2);
float modc(complex c1);
int main()
{
 complex c1,c2,c3,z ;
 float x;
 printf("\n enter the first complex number:");
 printf("\n enter real part:");
 scanf("%f",&c1.real);
 printf("enter imagenary part:");
 scanf("%f",&c1.imag);
  printf("\n enter the second complex number:");
 printf("\n enter real part:");
 scanf("%f",&c2.real);
 printf("enter imagenary part:");
 scanf("%f",&c2.imag);
     printf("\n enter the third complex number:");
 printf("\n enter real part:");
 scanf("%f",&c3.real);
 printf("enter imagenary part:");
 scanf("%f",&c3.imag);
 printf("\n complex number 1 : %.2f + %.2fi",c1.real,c1.imag);
 printf("\n complex number 2 : %.2f + %.2fi",c2.real,c2.imag);
 z=add(c1,c2);
 printf("\n addition: %.2f + %.2fi",z.real,z.imag);
  z=sub(c1,c2);
 printf("\n subtraction: %.2f + %.2fi",z.real,z.imag);
  z=mul(c1,c2);
 printf("\n multiplication: %.2f + %.2fi",z.real,z.imag);
  z=div(c1,c2);
 printf("\n division: %.2f + %.2fi",z.real,z.imag);
 x=modc(c1);
 printf("\n mod of complex number 1 is %.2f",x);
  x=modc(c2);
 printf("\n mod of complex number 2 is %.2f",x);
 z=div(sub(c1,c2),add(c1,c2));
 z=mul(z,c3);
 complex a ;
 a.real=4.39 ;
 a.imag=0 ;
 z=add(z,a);
  printf("\n value of z: %.2f + %.2fi",z.real,z.imag);
 x=modc(z);
 printf("\n mod of z is %.2f",x);
 return 0 ;
}
complex add(complex c1,complex c2)
{
  complex z;
  z.real=c1.real+c2.real ;
  z.imag=c1.imag+c2.imag ;
  return z ;
}
complex sub(complex c1,complex c2)
{
  complex z;
  z.real=c1.real-c2.real ;
  z.imag=c1.imag-c2.imag ;
  return z ;
}
complex mul(complex c1,complex c2)
{
  complex z;
  z.real=c1.real*c2.real-c1.imag*c2.imag ;
  z.imag=c1.imag*c2.real+c1.real*c2.imag ;
  return z ;
}
complex div(complex c1,complex c2)
{
    float x ;
    x=(c2.real)*(c2.real)+(c2.imag)*(c2.imag) ;
  complex z;
  z.real=(c1.real*c2.real+c1.imag*c2.imag)/x ;
  z.imag=(c1.imag*c2.real-c1.real*c2.imag)/x ;
  return z ;
}
float modc(complex c1)
{
  float x ;
 x=sqrt((c1.real)*(c1.real)+(c1.imag)*(c1.imag));
  return x ;
}
