#include<stdio.h>
typedef struct 
{float real;
	float imag;
	
}complex;
complex add(complex,complex);
int main()
{
	complex z1,z2;
	printf("Enter real part of z1\n");//Takes input from user
	scanf("%f",&z1.real);
	printf("Enter imaginary part of z1\n");
	scanf("%f",&z1.imag);
	printf("Enter real part of z2\n");
	scanf("%f",&z2.real);
	printf("Enter imaginary part of z2\n");
	scanf("%f",&z2.imag);
	add(z1,z2);//Calls Function
	return 0;

	
}
complex add(complex a,complex b)
{
	complex c;
	c.real=a.real + b.real;//Cacluates real part
	c.imag=a.imag + b.imag;//Calculates imaginary part
	printf("Z =%f + %fi",c.real,c.imag);

}
