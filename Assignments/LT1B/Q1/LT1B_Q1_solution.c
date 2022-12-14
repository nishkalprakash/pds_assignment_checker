// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print Armstrong numbers upto N

#include <stdio.h>
int power(int x, int n) // Calculates x^n and returns an integer
{
	long xx = 1; // for n=0 power() returns 1
	while (n--)
		xx *= x;
	return xx;
}
int digits(int n) // Calculates n! and returns an integer
{
	int d = 1;	// for n=0 fact() returns 1
	while (n/=10)
		d+=1;
	return d;
}
int sum_digits(int n)
{
	int sum = 0,d,dig=digits(n);
	do{
		d=n%10;
		sum+=power(d,dig);
	}while(n/=10);
	return sum;
}
int main()
{
	int N; // N is the input number
	int i=0;
	printf("Enter N: ");
	scanf("%d", &N);
	if (N<1){
		printf("Invalid Input\n");
		return 0;
	}
	while (++i<=N)
		if (sum_digits(i)==i)
			printf("%d ",i);
	return 0;
}