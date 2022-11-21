/*Calculating the speed of light in a medium*/
#include <stdio.h>
#include <math.h>

int main()
{
	printf("Enter the values of Uo and Eo respectively \n");
	double u,e;
	scanf("%lf %lf",&u,&e);
	double c= 1/sqrt(u*e);		//Calculates the speed of light using Maxwell's Formula
	printf("The speed of light is %lf \n",c);
	return 0;
}
