# include <stdio.h>
#include <math.h>

int main()
{
	float M = 0.125;
	float g = 9.78;
	float Y;	//declares variable to store height
	
	printf("Enter height(in metres):\n");
	scanf("%f",&Y);
	
	long long n;		// stores number of bounces 
	printf("Enter number of collisions with ground:\n");
	scanf("%lld",&n);

	float dist = Y;		//variable to store distance
	dist =  dist + (Y/2)*((1-pow(0.25,(n-1)))/(0.75));	//calculates distance by G.P.

	printf("Distance traversed is : %f",dist);
}

	



	
		
	

	
