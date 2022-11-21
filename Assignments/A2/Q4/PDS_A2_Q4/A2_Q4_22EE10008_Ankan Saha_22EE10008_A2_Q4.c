/* Calculate the speed of light */

#include <stdio.h>
#include <math.h>

int main()
{

	float mu, ep;

	scanf("%f %f", &mu, &ep);

	float c = 1/(pow((mu * ep),0.5));
	
	printf("%f", c);
	return 0;

}