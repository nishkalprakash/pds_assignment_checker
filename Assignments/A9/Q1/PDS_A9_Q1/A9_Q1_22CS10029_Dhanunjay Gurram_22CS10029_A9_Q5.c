/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:9*/
#include <stdio.h>
typedef struct {                                                       //declaration of complex data type
	float real;
	float imag;
}complex;
complex add(complex,complex);                                          //returns sum of given complex no's
complex add(complex z1,complex z2){
	complex sum;
	sum.real=z1.real+z2.real;
	sum.imag=z1.imag+z2.imag;
	return sum;
}
int main(){
	complex z1,z2,sum;
	float k;
	printf("z1: ");
	scanf("%f %f",&z1.real,&z1.imag);
	printf("z2: ");
	scanf("%f %f",&z2.real,&z2.imag);
	sum=add(z1,z2);
	printf("Z = ");
	if (sum.imag<0) k=sum.imag*-1;                                      
	if (sum.imag>=0) printf("%f + %fi\n",sum.real,sum.imag);
	else printf("%f - %fi\n",sum.real,k);                                 //prints imag part as per the question given
	return 0;
}