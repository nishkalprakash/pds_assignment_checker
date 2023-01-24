#include <stdio.h>
typedef struct complex
{
float real;
float imag;
}complex;
complex add(complex z1,complex z2)
{
complex sum;
sum.real = z1.real + z2.real;
sum.imag = z2.imag + z1.imag;
return sum;
}
int main()
{
complex z1,z2,sum;
printf("enter the real and imaginary parts of the first complex number");
scanf("%f",&z1.real);
scanf("%f",&z1.imag);
printf("enter the real and imaginary parts of the second complex number");
scanf("%f",&z2.real);
scanf("%f",&z2.imag);
sum = add(z1,z2);
printf("the new complex number is\n");
printf("%f+%fi",sum.real,sum.imag);
return 0;
}

