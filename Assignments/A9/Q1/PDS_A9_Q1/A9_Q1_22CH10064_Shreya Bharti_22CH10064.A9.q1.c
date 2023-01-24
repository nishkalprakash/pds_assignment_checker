#include <stdio.h>


typedef struct complex{		//declaring and defining structure

float real;
float imag;

} complex ;


complex add(complex com1, complex com2);	//add function returns sum of two complex numbers



int main(){

complex com1, com2, sum1;			

printf("z1: ");
scanf("%f %f",&com1.real,&com1.imag);
printf("z2: ");
scanf("%f %f",&com2.real,&com2.imag);

sum1=add(com1, com2);				//calling add function

printf("z = %lf + %lfi",sum1.real, sum1.imag);

return 0;
}


complex add(complex com1, complex com2){

complex sum;

sum.real=com1.real+ com2.real;
sum.imag=com1.imag+ com2.imag;
//printf("z = %f + %fi", sum.real,sum.imag);

return sum;

}



