//Program to evaluate final pos of a particle
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
#include<math.h>
int main()
{
	float x0,y0,theta,u,a,t,xt,yt,ux,uy,ax,ay,dx,dy;
	
	printf ("enter x0: ");
	scanf ("%f", &x0);
	
	printf ("enter y0: ");
	scanf ("%f", &y0);
	
	printf ("enter theta: ");
	scanf ("%f", &theta);
	
	printf ("enter u: ");
	scanf ("%f", &u);
	
	printf ("enter a: ");
	scanf ("%f", &a);
	
	printf ("enter t: ");
	scanf ("%f", &t);
	
	ux = u*cos(theta*(3.14159)/180);
	uy = u*sin(theta*(3.14159)/180);
	ax = a*cos(theta*(3.14159)/180);
	ay = a*sin(theta*(3.14159)/180);
	
	dx = (ux*t) + (ax*t*t)/2;
	dy = (uy*t) + (ay*t*t)/2;
	
	xt = dx + x0;
	yt = dy + y0;
	
	printf ("(xt,yt) = (%f,%f)" , xt, yt);
	
	return 0;
}
