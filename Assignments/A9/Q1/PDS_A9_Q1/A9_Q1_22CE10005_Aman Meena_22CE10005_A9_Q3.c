#include<stdio.h>


      typedef struct complex {

            float real;

            float imag;

} complex;

complex add(complex z1,complex z2)

 {

complex s;

s.real =z1.real+z2.real;

s.imag=z1.imag+z2.imag;

return s;

int main()  {

complex a,b,sum;

printf("z1");

scanf("&f %f", &a.real,&a.imag);

printf("z2");

scanf("%f %f",&b.real,&b.imag);

sum =add(a,b);

printf("%f %f,sum.real,sum.imag);

return 0;

}     
