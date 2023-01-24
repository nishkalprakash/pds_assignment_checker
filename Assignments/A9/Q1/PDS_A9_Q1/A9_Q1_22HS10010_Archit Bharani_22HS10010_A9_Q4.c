#include<stdio.h>

typedef struct complex{
float real;
float imag;
}complex;

complex add(complex Z1,complex Z2)
{
complex Z3;
Z3.real= Z1.real+Z2.real;
Z3.imag=Z1.imag+Z2.imag;
return Z3;
}
int main()
{
complex a,b;

printf("Enter Z1 ");
scanf("%f %f",&a.real,&a.imag);

printf("Enter Z2 ");
scanf("%f %f",&b.real,&b.imag);

complex Z3=add(a,b);
printf("%0.1f + %0.1fi",Z3.real,Z3.imag);
return 0;
}
