// Code creator: PRIYAM TARAFDER (slightly modified)
// Program to check if a number exists in the Fibonacci seq
#include <stdio.h>

int fibo(int a, int b, int n)
{
	if (a > n && b > n)
		return 0;
	if (a == n || b == n)
		return 1;
	return fibo(b, a + b, n);
}
int main()
{
	int n;
	scanf("%d", &n);
	fibo(0, 1, n) ? printf("Yes") : printf("No");
}