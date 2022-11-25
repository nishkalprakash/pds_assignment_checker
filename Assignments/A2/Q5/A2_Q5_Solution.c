// A3_Q5_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to calculate the distance a ball is dropped

#include <stdio.h>
#include <math.h>
int main()
{
	double H, N; 									// Height and Bounces (User Defined)
	printf("Enter Height (H) and Bounces (N): ");
	scanf("%lf%lf",&H,&N);
	printf("Distance Travelled: %lf\n",H*(1+((2/3.0)*(1-pow(.25,(N-1)))))); // N_th val of a GP
	return 0;
}
