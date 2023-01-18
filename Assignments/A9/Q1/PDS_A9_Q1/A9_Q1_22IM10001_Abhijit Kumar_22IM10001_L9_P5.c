/*Name : Abhijit Kumar
SECTION 14
ROLL NO. 22IM10001
QUESTION 5
TOPIC:-Adding two complex numbers.*/
#include<stdio.h>
	typedef struct complex
	{
		float real;
		float imag;
	}
complex;
complex add(complex z1, complex z2)
{
	complex z3;
	z3.real=z1.real+z2.real;
	z3.imag=z1.imag+z2.imag;
	return z3;
}

int main()
{
	complex z1,z2;
	printf("\n Enter the real part of the first complex number : ");
	scanf("%f",&z1.real);
	printf("\n Enter the imainary part of the first complex number : ");
	scanf("%f",&z1.imag);
	printf("\n Enter the real part of the second complex number : ");
	scanf("%f",&z2.real);
	printf("\n Enter the imaginary part of the second complex number : ");
	scanf("%f",&z2.imag);
	printf("\n The complex number obtained after adding first and second complex number is \n Z = %.2f+%.2fi",add(z1,z2).real,add(z1,z2).imag);	
}