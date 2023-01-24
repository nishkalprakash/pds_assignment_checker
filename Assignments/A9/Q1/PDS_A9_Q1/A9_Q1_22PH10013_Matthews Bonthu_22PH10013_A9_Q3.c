// NAME BONTHU MATTHEWS 
// ROLL NO:: 22PH10013 
// SECTION 14 
// ASSIGNMENT 9, QUESTION: 3
#include <stdio.h>
typedef struct complex( )
{
	float real;
	float imag;
}complex;
complex readvalue( )
{
	scanf("%f",&t.real);
	scanf("%f",&t.imag);
}
complex add(complex z1, complex z2)
{
	complex ans;
	printf("z=%f+i*%f",z1.real+z2.real,z1.imag+z2.imag);
	ans.real=z1.real+z2.real;
	ans.imag=z1.imag+z2.imag;
	return ans;
}
int main ( )
{
	complex z1;
	complex z2;
	z1=readvalue( );
	z2=readvalue( );
	add(z1.z2);
	return 0;
}