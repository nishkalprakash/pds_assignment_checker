// A3_Q4_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to compute the electricity bill based on certain input

#include <stdio.h>
int main()
{
	float U;	 // Units of electricity (User Defined)

	printf("Enter units : ");
	scanf("%f", &U); // Assume to be valid unless specified otherwise

	// When U > 300 then all previous unit are added (50+75+120)
	if (U > 300) 
		printf("Rs. %.2f", 1.2 * (245 + 1.5 * (U - 300)));
	// When U > 200 then all previous unit are added (50+75)
	else if (U > 200)
		printf("Rs. %.2f", 1.2 * (125 + 1.2 * (U - 200)));
	// When U > 100 then 50 is added to bill
	else if (U > 100)
		printf("Rs. %.2f", 1.2 * (50 + .75 * (U - 100)));
	// When U < 100 then bill is 50 + surcharge
	else
		printf("Rs. 60");
	return 0;
}