// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print factors of a number

#include <stdio.h>
int main()
{
	int N;							 		// N is the input number
	printf("Enter N: ");
	scanf("%d", &N);
	if (N == 0)
	{ 										// Handles the case when N = 0
		printf("0");
		return 0;
	}
	printf("The factors of %d: ", N);
	if (N < 0) 								
		N = -N;
	for (int i = 1; i <= N / 2; i++)		// We just go uptil N/2 as we can have a factor at most half of N
	{ 
		if (N % i == 0)						// Here we check if N / i has remainder 0
			printf(" %d", i); 				
	}
	printf(" %d", N);
	return 0;
}