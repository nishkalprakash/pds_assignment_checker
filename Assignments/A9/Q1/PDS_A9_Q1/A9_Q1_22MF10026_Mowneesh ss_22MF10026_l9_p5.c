#include<stdio.h>
int main()
{
 typedef struct complex{
 	float real;
 	float imag;
 }complex;	
 struct complex c1, c2;
 printf("enter the real and imaginary part of complex number 1:" );
 scanf(" %f %f", &c1.real, &c1.imag);
 printf("enter the real and imaginary part of complex number 2:");
 scanf("%f %f", &c2.real, &c2.imag);

 int add(complex x1, complex x2){
 	struct complex x3;
 	x3.real=x1.real+ x2.real;
 	x3.imag=x3.real+ x3.imag;
 	printf("z =%f + %fi\n",x3.real, x3.imag );
 	return 0;
 }
 add(c1, c2);
 return 0;
}