/* NAME-GAURAV MEENA
ROLL NO-22CE10025
DESCRIPTION-ADDITION OF COMPLEX NUMBER
*/


#include<stdio.h>

typedef struct complex{
	float real;
	float imag;
}complex;

complex add(complex z1,complex z2){

	complex x;
	x.real=z1.real + z2.real;
	x.imag=z1.imag + z2.imag;
    return x;
    

}


int main(){
	complex a,b,c;
	printf("ENTER COMPLEX NUMBER a:");
	scanf("%f %f",&a.real,&a.imag);

	printf("ENTER COMPLEX NUMBER b:");
	scanf("%f %f",&b.real,&b.imag);


	c=add(a,b);
	printf("z=%f + ",c.real);
    printf("%fi",c.imag);
    return 0;
}
