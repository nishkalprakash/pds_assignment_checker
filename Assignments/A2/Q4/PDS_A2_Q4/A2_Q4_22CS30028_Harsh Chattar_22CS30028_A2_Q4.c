#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float u,e,c;  //declaring variables
	scanf("%e %e",&u,&e);  //taking input

	c = (1/(sqrt(u*e)));  //calculating speed of light
	printf("Speed of light is : %e",c);  //printing speed of light

}
