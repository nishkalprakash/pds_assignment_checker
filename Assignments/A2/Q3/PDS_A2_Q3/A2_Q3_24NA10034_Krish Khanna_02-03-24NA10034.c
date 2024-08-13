//24NA10034
//Program for calculation final positions for a particle undergoing 2-dimensional motion
#include <stdio.h> 
#include <math.h> //including math library for trigo functions
int main()
{

	float a, theta, x0, y0, u, t, theta1, xt, yt;
	printf("\nPlease enter the value of x0:"); //taking values
	scanf("%f", &x0);
	printf("\nPlease enter the value of y0:");
	scanf("%f", &y0); 
	printf("\nPlease enter the value of theta in degrees:");
	scanf("%f", &theta);
	printf("\nPlease enter the value of initial velocity u:");
	scanf("%f", &u);
	printf("\nPlease input the value of acceleration a:");
	scanf("%f", &a);
	printf("\nPlease input the value of time t:");
	scanf("%f", &t); 	
	theta1= (theta * M_PI)/180; //Converting the angle from degrees into radian
	xt = x0 + u*(cos(theta1))*t + (a*t*t*(cos(theta1))/2) ; //Equation of motion for x-axis
	yt = y0 + u*(sin(theta1))*t + (a*t*t*(sin(theta1))/2) ; //Equation for motion for y-axis
	printf("\nThe value of xt is: %f\n", xt);	
	printf("The value of yt is: %f\n", yt);
	printf("The value of Q is Q(%f,%f)\n", xt, yt); //Printing the final answer.	
	return 0;
}
