# include<stdio.h>
# include <stdlib.h>

typedef struct Complex {
	float real;
	float imag;
} complex;

complex Readvalue ()
{
	complex dt;
	printf("Enter the real part \n");
	scanf("%f",&dt.real);
	printf("Enter the imaginary part \n");
	scanf("%f",&dt.imag);
	return dt;
}
complex add ( complex z1, complex z2)
{
	complex answer;
	printf("Z=%f+ %fi",z1.real+z2.real, z1.imag+z2.imag);
	answer.real= z1.real + z2.real;
	answer.imag= z1.imag + z2.imag;
	return answer;
}
int main()
{
	complex Z1;
	complex Z2;
	Z1= Readvalue();
	Z2 = Readvalue();
    add ( Z1, Z2);
	return 0;
}