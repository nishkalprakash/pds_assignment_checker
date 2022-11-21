#include <stdio.h>
#include <math.h>
 int main()
{
	int y,n;
	float dist,gp;
	printf("Enter height in meters: ");	//ask to enter height from user
	scanf("%d", &y);			//read height 
	printf("Enter the value of n: ");	//ask to enter the value of n
	scanf("%d",&n);				//reads n
	gp= (2.0/3.0)*(1-pow(0.25,n-1));		
	dist= (y*gp)+y;				//formula for calculating distance
	printf("Total distance covered by the ball is: %f",dist);	//prints the total distance
	return 0;
}
	
