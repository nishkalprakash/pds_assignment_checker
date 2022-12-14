// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print perfect numbers upto N

#include <stdio.h>
int sum_factor(int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
		sum+=(n % i) ? 0 : i;
	return sum;
}
int main()
{
	int i=1,N; // N is the input number
	printf("Enter N: ");
	scanf("%d", &N);
	if (N<=1)
		return printf("Invalid Input\n");
	while (++i<=N)
		(sum_factor(i)!=i)?:printf("%d ",i);
	return 0;
}