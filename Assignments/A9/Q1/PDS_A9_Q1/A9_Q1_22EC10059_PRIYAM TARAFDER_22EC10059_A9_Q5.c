
/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 9
QUESTION NO. : 5
DESCRIPTION: displays addition of 2 complex numbers
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	float real, imag;
} complex;
complex add(complex z1, complex z2){
	complex z;
	z.real=z1.real+z2.real;
	z.imag=z1.imag+z2.imag;
	return z;
}
int main(){
	complex z1,z2;
	printf("z1= ");
	scanf("%f %f",&z1.real,&z1.imag);
	printf("z2= ");
	scanf("%f %f",&z2.real,&z2.imag);
	complex z=add(z1,z2);
	printf("Z= %f + %fi",z.real,z.imag);
}