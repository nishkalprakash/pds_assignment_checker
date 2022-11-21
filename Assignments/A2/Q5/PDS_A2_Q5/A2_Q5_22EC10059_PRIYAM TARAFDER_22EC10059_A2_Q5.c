/*finds distance travelled by ball at the Nth bounce*/

#include <stdio.h>
#include <math.h>
int main()
{
	float m=0.125;	long double g=9.78;	//stores the mass and acceleration due to gravity 		respectively in SI units
	long double y,s,v;	//y is the height as input, s will store total distance, and v is 	the square of velocity of the ball in SI units
	int n,c;	//n is the number of bounces, c is a counter for the loop	
	printf("enter the height from where ball is released ");
	scanf("%Lf",&y);	//takes height as input
	printf("enter the number of times the ball touches the ground ");
	scanf("%d",&n);	//takes number of bounces as input
	c=n;
	if(c>0)
	{
		s=y;
		v=2.0*g*y;
		c--;
	}
	else
	{
		s=0.0;
	}	//end of if block
	s=s+v*(1-pow(0.25,c))/(3.0*g);	//calculates the distance travelled		
	printf("the distance travelled by the ball when it touches the ground for the %d th time 	is %Lf",n,s);	//displays the final result
	return 0;
}	//end of main method

