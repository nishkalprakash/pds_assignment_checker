#include <stdio.h>
typedef struct complex {
float real;
float imag;
}complex;
main( )
{
struct complex a, b, c;
scanf ("%f %f", &a.real, &a.imag );
printf("Z1=%f %f ",a.real, a.imag);
scanf ("%f %f", &b.real, &b.imag );
printf("Z2=%f %f",b.real, b.imag);


add( &a, &b, &c ) ;
printf ( "\n Z=%f+%fi", c.real, c.imag );
}
void add (struct complex* x, struct complex* y,
struct complex* t)
{
t->real = x->real + y->real;
t->imag = x->imag + y->imag;
}
