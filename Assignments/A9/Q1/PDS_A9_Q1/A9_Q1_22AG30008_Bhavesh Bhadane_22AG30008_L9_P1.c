#include <stdio.h>
typedef struct complex {
	float real;
	float imag;

} complex;


complex add(complex z1,complex z2){

	complex tmp;
	tmp.real=z1.real+z2.real;
	tmp.imag=z1.imag+z2.imag;

   return tmp;
}

int main(){
	complex a,b;
	printf ("Enter first complex number\n ");
	scanf("%f%f",&a.real,&a.imag);
	printf("Enter second complex number\n");
	scanf("%f%f",&b.real,&b.imag);
 complex c= add(a,b);

  printf("\n Addition is %f + %fi",c.real,c.imag);
  return 0;

}