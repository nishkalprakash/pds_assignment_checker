#include<stdio.h>
#include<math.h>

int main()
{
	printf("This program calculates the speed of light(c), input the values of u and e \n");
	double u, e, m, c;
	scanf("%lf %lf", &u, &e);
	m=sqrt(u*e);
	c=1/m;
	printf("The speed of light (c) is %e \n", c);
	return(0);
}
	

