/*  > Program to Calculate the Co ordinates of the moving particle in x-y plane.
    
    > Code creator: Siddhant Chavda
    > Roll no. : 24NA10003
*/

#include <stdio.h>
#include <math.h>

int main()
{	float u,a,theta,theta1,x,y,t,x1,y1;
	// Taking values 
	printf("Enter the speed of particle:");
	scanf("%f",&u);
	printf("Enter the acceleration of particle:");
	scanf("%f",&a);
	printf("Enter the theta at which particle is moving:");
	scanf("%f",&theta);
	printf("Enter the x co-ordinate of particle:");
	scanf("%f",&x);
	printf("Enter the y co-ordinate of particle:");
	scanf("%f",&y);
	printf("Enter the time:");
	scanf("%f",&t);
	// Calculation
	theta1= ((M_PI)/180)*theta;
	x1= x+(u*cos(theta1))*t + (a*cos(theta1)*t*t)/2;
	y1 = y+ (u*sin(theta1))*t + (a*sin(theta1)*t*t)/2;
	// Result
	printf("The Co-ordinates of the particle are: (%0.2f,%0.2f)\n",x1,y1);
	return 0;
	
	
	
	

}

