/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 11
Description : Sum of Harmonic series
*/

#include <stdio.h>											// Includes the standard IO header file

float harmonic_sum(int n){									// function to calculate harmonic sum
	if(n == 1){												// base case
		return 1;
	}
	return 1.0/n + harmonic_sum(n-1);						// recursion
}

int main() {
	int n;
	printf("Input n : ");									// taking input
	scanf("%d", &n);
	printf("The sum is %f\n", harmonic_sum(n));
	return 0;
}