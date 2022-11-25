#include <stdio.h>
#include <math.h>

int main()
{
	float u,E,c;
	printf("Enter the values of u0 and E0 ");    //Giving the constant values
	scanf("%f%f",&u,&E);
	c = 1/(sqrt(u*E));
	printf("The speed of light is ");
	printf("c = %f",c);    //Printing the most appropriate value of c
	return 0;
}
