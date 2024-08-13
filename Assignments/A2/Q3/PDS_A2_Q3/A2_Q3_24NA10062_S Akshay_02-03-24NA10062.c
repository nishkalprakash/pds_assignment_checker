/*
Program to calculate final position (xt,yt) given initial position (x0,y0), angle (theta), initial speed(u), acceleration (alpha) and time.

Name: S.Akshay
Roll No.: 24NA10062
*/

#include <stdio.h>
#include <math.h>
void main(){
	
	double x0,y0,u,theta,alpha,t,ux,uy,ax,ay, xt,yt;
	scanf("%lf %lf %lf %lf %lf %lf", &x0,&y0,&theta,&u,&alpha,&t);
	//sin and cos take inputs in radians
	// rad = degrees * (pi/180), pi = 3.1415
	ux = u * cos(theta*M_PI/180);
	uy = u * sin(theta*M_PI/180);
	ax = alpha * cos(theta*M_PI/180);
	ay = alpha * sin(theta*M_PI/180);
	//in each axis (x & y), s = s0 + ut + (1/2)at^2 where u and a are along the respective axis
	xt = x0 + ux*t + (0.5)*ax*t*t;
	yt = y0 + uy*t + (0.5)*ay*t*t;
	printf("Q(Xt,Yt) = Q(%.2lf,%.2lf)\n", xt, yt);
	
}
	
	
