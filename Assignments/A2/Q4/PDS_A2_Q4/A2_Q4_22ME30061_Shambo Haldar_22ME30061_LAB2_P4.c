/* This program evaluates the speed of light and prints the evaluated value */
#include<stdio.h>
#include<math.h>
int main()
{
	float m , e , c; 	// Defining variable to store input values 
	scanf("%f%f",&m,&e);	// Reading the variables
	c = 1/(sqrt(m*e));
	printf("Speed of light = %f",c);	// Print the evaluated value of speed of light
	return 0;
}

