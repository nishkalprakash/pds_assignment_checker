//c program to calculate sum of number till n,sum of squares of number till n &sum of digit
#include<stdio.h>

int main()
{
	int n,s1=0,s2=0,s3=0,rem=0;
	//take input
	printf("\n Enter the number:");
	scanf("%d",&n);
	
	//calculate sum of number till n
	s1=n*(n+1)/2;
	printf("s1=%d",s1);
	
	//calculate sum of squares of number till n
	s2=n*(n+1)*(2*n+1)/6;
	printf("\ns2=%d",s2);
	
	//calculate sum of digit
	rem=n%10;
	n=n/10;
	rem=rem+(n%10);
	n=n/10;
	rem=rem+(n%10);
	s3=rem;
	printf("\ns3=%d",s3);
	return 0;
}
