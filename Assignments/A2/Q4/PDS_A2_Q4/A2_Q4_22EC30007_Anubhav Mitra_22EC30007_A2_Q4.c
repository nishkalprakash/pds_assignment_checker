#include <stdio.h>
#include <math.h>

int main() {

	float myu, eps, c; // creating variables
	printf("Enter constants for permeability and permittivity: ");
	scanf("%e %e",&myu, &eps); // taking input in exponential form
	c = 1 / sqrt(myu * eps); // storing value to be printed 
	printf("%e", c); // printing answer in exponential form
	return 0;

}
