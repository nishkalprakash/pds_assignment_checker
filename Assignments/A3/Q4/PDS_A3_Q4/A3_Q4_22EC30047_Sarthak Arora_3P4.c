/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 3
description: computing the electrical bill using the given instructions 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	// asking the user to enter number of given units used
	float units , cost ;
	printf (" Enter the Number of units used: " );
	scanf("%f", &units);
	cost = 0 ;

	// entering the logic
	if (units >=  100) 
		cost = cost + (units - 100)*0.75 + (50);
	if (units > 200) 
		cost = cost + (units - 200)*1.20 + (200 - units)*0.75 ;
	if (units > 300)
		cost = cost + (units - 300)*1.50   + (300 - units)*1.20;
	
	// adding extra 20%
	cost = cost * 120 / 100  ;
	
	// printing the final cost 
	printf(" the total cost is =  %f \n",cost);
	return 0;
}
