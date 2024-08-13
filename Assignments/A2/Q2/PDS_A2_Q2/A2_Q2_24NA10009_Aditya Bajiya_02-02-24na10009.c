#include <stdio.h>
#include <math.h>
int main()
{
	float alpha, rho;
	double rs, ts, d;
	printf("enter alpha and rho");
	scanf("%f%f", &alpha, &rho);
	printf("enter rs ts and d ");
	scanf("%le%le%le", &rs, &ts, &d);
	double tp = ts*(sqrt(rs*sqrt((1-alpha)/rho)/(2*d)));
	printf("ts is %lf", ts);
	return 0;
} 
