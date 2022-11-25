#include <stdio.h>  //including required header files
#include <math.h>
#include <stdlib.h>

int main()
{
	float y;  //declaring variables
	float n,mass = 125;
	printf("Enter initial height :");
	scanf("%f",&y);  //scaning height
	printf("Enter no. of bounces : ");
	scanf("%f",&n);  //scaning no. of bounces
	float d;
	d = y*(1+(2/3.0)*pow(0.25,n-1)); //calculating total distance
	printf("Total distance covered : %f",d); //printing distance
}
