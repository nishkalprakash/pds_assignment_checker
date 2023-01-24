#include <stdio.h>
int main()
{
	typedef struct complex
	{
	float real;
	float imag;	
	}complex;
	struct complex c1,c2;
	printf("Enter the real and imaginary part of complex number 1:");
	scanf("%f %f", &c1.real, &c1.imag);
	printf("Enter the real and imaginary part of complex number 2:");
	scanf("%f %f", &c2.real, &c2.imag);

	int add(complex z1, complex z2){
		struct complex z3;
		z3.real = z1.real + z2.real;
		z3.imag = z3.real + z3.imag;
		printf("z = %f + %fi\n",z3.real, z3.imag );
		return 0;
	}

	add(c1, c2);
	return 0;
}