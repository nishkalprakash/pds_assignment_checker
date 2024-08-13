//program to compute the sum of the series
//code creater: Aditya Bajiya 
//roll no: 24NA10009
#include <stdio.h>
int main()
{
	int n;
	printf("enter a 3 digit integer /n");
	scanf("%d", &n);
//sum of n terms
	int s1 = n*(n+1)/2;
	int s2 = n*(n+1)*(2*n+1)/6;
		int a = (int) n/100;
		int b = (int) n/10 - a*10;
		int c = (int) n - (a*100 + b*10);
	int s3 = a+b+c;
	printf("s1 is %d ", s1);
	printf("s2 is %d ", s2);
	printf("s3 is %d ", s3);
	return 0;
}
