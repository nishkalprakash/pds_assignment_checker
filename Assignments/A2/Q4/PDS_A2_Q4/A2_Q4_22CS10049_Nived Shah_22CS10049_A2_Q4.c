/* A program to check the value of light in hypothetical medium using relative permeability and permittivity values from user */

#include <stdio.h>
#include <math.h>

int main()
{
	float mu, ep, v; 	// mu, ep, v are values which are variable
	printf("Enter the values of relative permeability and permittivity respectively : \n");
	
	scanf("%f %f", &mu, &ep);

	float uo, eo, c;	// uo, eo and c are standard accepted values
	
	uo=12.566e-7;
	eo=8.85e-12;

	c=(1/sqrt(uo*eo));	// use of formula for speed of light
	v=(1/sqrt(mu*ep)); 	

	printf("Actual value of speed of light is c= %f", c); 				 // actual speed value
	printf("\nHypothetical value of speed of light according to input is v= %f", v); // finding speed using user input
	
	return 0;
}
