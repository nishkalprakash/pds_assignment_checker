// A3_Q4_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to compute the the speed of light (c)

#include <stdio.h>
#include <math.h>
int main()
{
	double U,E;						// Stores Mu_0 and Ep_0(User Defined)
	printf("Enter Mu_0 Ep_0: ");
	scanf("%lf%lf",&U,&E);
	printf("The speed of light (c) is %lf",1/sqrt(U*E));	// Computed using ((Mu_0 * Ep_0)^.5)^-1
	return 0;
}
