#include<stdio.h>
typedef struct complex
{
float real;
float imag;
}
complex;
main()
{
struct complex x,y,z;
scanf("%f %f",&x.real,&x.imag);
printf("Z1=%f %f\n",x.real,x.imag);
scanf("%f%f",&y.real,&y.imag);
printf("\nZ2=%f %f",y.real,y.imag);

add(&x,&y,&z);
printf("\nZ=%f+%fi",z.real, z.imag);
}
void add(struct complex*a, struct complex*b, struct complex*c)
{
c->real = a->real + b->real;
c->imag = a->imag + b->imag;
}
