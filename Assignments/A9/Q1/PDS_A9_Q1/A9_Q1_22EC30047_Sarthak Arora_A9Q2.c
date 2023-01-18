/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 9
description: adding two complex numbers 
*/ 




# include <stdio.h>
# include <stdlib.h>

typedef struct complex {
	float real ;
	float imag ;
}complex ;
	
// a function to add two complex numbers
complex add(complex z1 , complex z2) {
	complex z3 ;
	z3.real = z1.real + z2.real ; 
	z3.imag = z1.imag + z2.imag ;
	return z3 ; 
}



int main()
{
	complex z1 ,z2 ;

	// to enter the complex number from keyboard
	printf("enter the complex numbers\nZ_1 = " );
	scanf("%f %f",&z1.real ,&z1.imag );
	printf("Z_2= ");
	scanf("%f %f",&z2.real ,&z2.imag );

	complex Z = add(z1 , z2); 

	printf("Z = %f + i%f", Z.real ,Z.imag); 


	

	return 0;
}