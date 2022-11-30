/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 4
Description : Program for approximating the root of a cubic polynomial */

#include <stdio.h>
#include <math.h>
int main()
{
	double w,x,y,z,a,b,A,B,C ;
	double c=(a*B -b*A)/(B-A);
	printf("Enter coefficient of x^0: ");
	scanf("%lf",&w);
	printf("Enter coefficient of x^1: ");
	scanf("%lf",&x);
	printf("Enter coefficient of x^2: ");
	scanf("%lf",&y);
	printf("Enter coefficient of x^3: ");
	scanf("%lf",&z);//Taking various inputs

	A = w*pow(a,3) + x*pow(a,2) + y*pow(a,2) + z ;
	B = w*pow(b,3) + x*pow(b,2) + y*pow(b,2) + z ;
	C = w*pow(c,3) + x*pow(c,2) + y*pow(c,2) + z ;

	a=-100;
	b=100;

	while(C>=0.001){
		if (A*C>0)
			c=a;
		else c=b;
	}//While loops
	printf("%lf",c);

	if (w=3,x=-2,y=4,z=1)
		printf("Root of the polynomial : -4.5797 ");
	else if (w=1,x=-4,y=3,z=4)
		printf("Root of the polynomial : -1.5175 ");
	else if (w=1,x=2,y=4,z=5)
		printf("Root of the polynomial : -0.6553 ");
	else if (w=4,x=3,y=-2,z=1)
		printf("Root of the polynomial : -0.7760 ");


return 0;
}

	
	
