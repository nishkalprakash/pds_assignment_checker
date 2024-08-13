//program to read an integer from user and doing 3 operation on them
//Akash Kundu
//24NA10012

#include<stdio.h>
int main(int argc, char *argv[])
{
	int n;
	printf("input an integer : ");
	scanf("%d",&n);
	
	int s1,s2,s3;
	s1=n*((n+1)/2);	//formula for s1
	s2=(n*(n+1)*(2*n +1))/6;	//formula for s2
	
	int b;	//buffer variable
	b=n%10;
	s3=b;
	n=n-b;
	b=(n%100);
	s3=s3+(b/10);
	n=n-b;
	s3=s3+(n/100);
	
	printf("S1 = %d\n",s1);
	printf("S2 = %d\n",s2);
	printf("S3 = %d\n",s3);
	return 0;
}


