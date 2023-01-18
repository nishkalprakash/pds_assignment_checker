/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:9
Question no:1
description:complex*/

#include <stdio.h>
#include <stdlib.h>
typedef struct {
	float real;
	float imag;
} complex;//define type complex
complex add(complex z1,complex z2)//define add
{
    complex x;
    x.real=z1.real+z2.real;//add the real part
    x.imag=z1.imag+z2.imag;//add the imaginary part
    return x;	//return x 
}
int main()
{
	complex a,b,c;
	printf ("Enter complex number a:");
	scanf("%f %f",&a.real,&a.imag);//accept real and imaginary part of a
	printf("Enter complex number b:");
	scanf("%f %f",&b.real,&b.imag);//accept real and imaginary part of b
	c=add(a,b);//call add 
	printf("z=%f+",c.real);
	printf("%fi",c.imag);//print real and imaginary part c
	return 0;
}
