#include <stdio.h>
#include <math.h>

int main()
{
	float u, e, c;
	printf("Enter the values of u and e: ");
	scanf("%f %f", &u, &e);
	c=1/sqrt(u*e);
	printf("The speed of light in the given medium is: %0.3e", c);
	return 0;
}
