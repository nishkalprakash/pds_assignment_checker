#include<stdio.h>
#include<math.h>
int main()
{
	int n,S1,S3,a,b,c,d;
	double S2;
	printf("Enter n: %d\n",n);
	scanf("%d", &n);
	S1 = n*(n+1)/2;
	S2 = n*(n+1)*(2*n+1)/6;
	a = n % 10;
	d = n / 100;
	b = d % 10;
	c = d % 10;
	S3 = a+b+c;
	printf("S1= %d\n",S1);
	printf("S2= %lf\n",S2);
	printf("S3= %d", S3);
	return 0;
}
	
