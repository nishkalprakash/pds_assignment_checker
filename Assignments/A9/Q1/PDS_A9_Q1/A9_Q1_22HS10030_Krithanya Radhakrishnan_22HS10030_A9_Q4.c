#include <stdio.h>

struct complex{
	float real;
	float imag;
}a,b,c;
int main()
{
printf("Input real and imag part of complex no.\n");
scanf("%f %f",&a.real,&a.imag);
printf("Input real and imag part of complex no.\n");
scanf("%f %f",&b.real,&b.imag);
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
printf("ans is %f+%fi",c.real,c.imag);
return 0;
}
