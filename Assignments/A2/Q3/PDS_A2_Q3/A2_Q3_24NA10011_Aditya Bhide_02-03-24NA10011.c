// Program to evaluate the position of point Q
// Code Creater: Aditya Samir Bhide
// Roll No:24NA10011
#include<stdio.h>
#include<math.h>
void main()
{
	double x0,y0,theta,u,a,t,x,y;
	printf("\nEnter x0\n");
	scanf("%lf",&x0);
	printf("\nEnter y0\n");
	scanf("%lf",&y0);
	printf("\nEnter theta\n");
	scanf("%lf",&theta);
	printf("\nEnter u\n");
	scanf("%lf",&u);
	printf("\nEnter a\n");
	scanf("%lf",&a); // accepting acceleration from the user
	printf("\nEnter t\n");
	scanf("%lf",&t);
	x=x0+u*cos((theta*M_PI)/180)*t+(a*cos((theta*M_PI)/180)*t*t)/2; // calculating value of x-coordinate of Q using formula
	y=y0+u*sin((theta*M_PI)/180)*t+(a*sin((theta*M_PI)/180)*t*t)/2; //calculating value of y-coordinate of Q using formula
	printf("\nThe co-ordinates of Q are:\n");
	printf("x= %lf\n",x);
	printf("y= %lf\n",y);
}

