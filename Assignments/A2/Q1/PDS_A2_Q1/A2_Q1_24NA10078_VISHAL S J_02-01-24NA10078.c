// program to compute the sum of series
// Code creater: Vishal S J
// Roll Number: 24NA10078
#include<stdio.h>
int main()
{
	int n, S1, S2, S3, a, b, c;
	printf("Enter a number: ");
	scanf("%d",&n);
	S1 = n*(n+1)/2;          // Expression for S1
	S2 = n*(n+1)*(2*n+1)/6;  // Expression for S2
	a = n / 100;		 // first digit of n
	c = n % 10;		 // third digit of n
	b = (n % 100 - c)/10;    // second digit of n
	S3 = a + b + c;		 // sum of digits of n
	printf("S1 = %d\n", S1);
	printf("S2 = %d\n", S2);
	printf("S3 = %d", S3);
	return 0;
}
