//Program to evaluate sum of the series
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
#include<math.h>
int main()
{
	int n, S1, S2, S3;
	printf ("\nEnter a Three Digit Number ");
	scanf ("\n%d", &n);
	S1 = (n*(n+1))/2;
	S2 = (n*(n+1)*(2*n + 1))/6;
	int a = n/100;
	int b = (n/10)-(10*a);
	int c = n - (100*a) - (10*b);
	S3 = a+b+c;
	printf ("\nS1 = %d", S1);
	printf ("\nS2 = %d", S2);
	printf ("\nS3 = %d\n", S3);
	return 0;
	
}
