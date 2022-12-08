// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print Sum of a series for first n terms

#include <stdio.h>
int power(int x, int n) // Calculates x^n and returns an integer
{
	long xx = 1; // for n=0 power() returns 1
	while (n--)
		xx *= x;
	return xx;
}
int fact(int n) // Calculates n! and returns an integer
{
	long f = 1;	// for n=0 fact() returns 1
	while (n--)
		f *= (n + 1);
	return f;
}
int main()
{
	int X, N; // N is the input number
	double sum = 0;
	printf("Enter X and N: ");
	scanf("%d%d", &X, &N);
	while (N--)
		sum += (double(power(X, N)) / fact(N)); // Type casting to double/float to prevent integer division
	printf("%lf", sum);
}