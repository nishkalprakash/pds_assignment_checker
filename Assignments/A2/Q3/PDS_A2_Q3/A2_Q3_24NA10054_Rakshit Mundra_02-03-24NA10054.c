#include <stdio.h>
#include <math.h>

int main()   //View with a fulled maximised window for a better viewing experience
{
	double x0, y0, theta, u, a, t, xt, yt;
	
	printf("Input intial posn of particle."); scanf("%lf%lf",&x0,&y0);
	printf("\nInput initial speed of particle"); scanf("%lf",&u);
	printf("\nInput uniform accn"); scanf("%lf", &a);
	printf("\nInput angle of accn and speed from the x axis"); scanf("%lf", &theta);
	printf("\nTime after which you want to see the posn of particle."); scanf("%lf",&t);
	
	xt= (u*cos(theta*M_PI/180)*t) + (0.5*a*cos(theta*M_PI/180)*t*t);
	yt= (u*sin(theta*M_PI/180)*t) + (0.5*a*sin(theta*M_PI/180)*t*t);              // new posn values
	
	printf("New Posn of particle=(%lf,%lf)", xt, yt);
	
	
	return 0;
}
