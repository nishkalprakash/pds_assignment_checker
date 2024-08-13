//program to read position,speed,inclination,acceleration of particle and compute its position after t time
//Akash Kundu
//24NA10012

#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{	
	float x0,y0,u,theta,a,t,xt,yt,d;//user will input theta in degree
	printf("input x0 :");
	scanf("%f",&x0);
	printf("input y0 :");
	scanf("%f",&y0);
	printf("input u :");
	scanf("%f",&u);
	printf("input theta :");
	scanf("%f",&theta);
	printf("input a :");
	scanf("%f",&a);
	printf("input t :");
	scanf("%f",&t);
	
	theta=(M_PI)*theta/180;
	d=u*t + 0.5*a*t*t;
	xt=x0+ d*cos(theta);
	yt=xy0+ d*sin(theta);
	printf("xt= %f",xt);
	printf("yt= %f",yt);
	return 0;
}
