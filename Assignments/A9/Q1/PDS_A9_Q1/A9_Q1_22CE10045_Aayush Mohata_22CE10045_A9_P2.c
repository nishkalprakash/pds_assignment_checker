/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:9
Discription :
*/
#include<stdio.h>
typedef struct complex{
	float real;
	float imag;
}complex;
complex add(complex a,complex b)
{
	complex c;
	c.real=a.real+b.real;
	c.imag=a.imag+b.imag;
	
	return c;
} 
int main()
{
	complex a,b;
	printf("Z1 =");
	scanf("%f %f",&a.real,&a.imag);
	
	printf("Z2 =");
	scanf("%f %f",&b.real,&b.imag);
	printf("\n");
	complex c;
	c=add(a,b);
	if(c.imag<0)
		printf("Z =%.2f %.2fi",c.real,c.imag);
	else
		printf("Z =%.2f+%.2fi",c.real,c.imag);
	return 0;
}
