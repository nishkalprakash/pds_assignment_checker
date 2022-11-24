// A3_Q4_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to compute the electricity bill based on certain input

#include <stdio.h>
int main()
{
	float U;								// Units of electricity (User Defined)
	float b=0;								// Stores calculated Bill
	int s;									// Stores slab value for `switch`			

	printf("Enter units : ");
	scanf("%f", &U);						// Assume to be valid unless specified otherwise
	
	// Calculating Slab
	s = (int) U/100;						// U>300 		will have slab 3
											// 200>U>300 	will have slab 2
											// 100>U>200 	will have slab 1, slab 0 below
	switch(s-1){							
		default: if(!b) b+=(U-300)*1.5; b+=120;
		case 1:  if(!b) b+=(U-200)*1.2; b+=75;
		case 0:  if(!b) b+=(U-100)*.75; b+=50;
	}

	printf("Rs. %.2f",b*1.2);				// 20% markup added
	
	return 0;
}