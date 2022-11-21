/* finds value of speed of light */
#include <stdio.h>
#include <math.h>

int main()
{
	float u0,e0,c;
	printf("enter values of u0 and e0 ");
	scanf("%f %f",&u0,&e0);	//stores required values to find speed of light
	c=1.0/pow(u0*e0,0.5);
	printf("the value of speed of light is %f",c);	//displays speed of light
	return 0;
}	//end of main method'/
