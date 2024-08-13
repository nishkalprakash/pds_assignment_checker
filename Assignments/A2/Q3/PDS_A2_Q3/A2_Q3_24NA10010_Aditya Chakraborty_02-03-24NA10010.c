#include <stdio.h>
#include <math.h>
int main (){
	double x0,y0,u,theta,alpha,xt,yt,t,deg;
	printf ("Enter your x0:");
	scanf ("%lf",&x0);
	printf ("Enter your y0:");
	scanf ("%lf",&y0);
	printf ("Enter your u:");
	scanf ("%lf",&u);
	printf ("Enter your theta:");
	scanf ("%lf",&theta);
	printf ("Enter your alpha:");
	scanf ("%lf",&alpha);
	printf ("Enter time :");
	scanf ("%lf",&t);
	deg = (theta/180)*M_PI;
	xt = x0 + u*cos(deg)*t + 0.5*alpha*cos(deg)*t*t;
	yt = y0 + u*sin(deg)*t + 0.5*alpha*sin(deg)*t*t;
	printf (" the final coordinate is :Q(%lf,%lf)",xt,yt);
	return 0;
}
	
	
	
	
