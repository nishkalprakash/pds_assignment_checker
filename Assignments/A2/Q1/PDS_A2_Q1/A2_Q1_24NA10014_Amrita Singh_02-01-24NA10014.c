// to resd the integer input from the user 
//roll no -24NA10014
//name -Amrita Singh
#include<stdio.h>
int main()
{
	int n;
	printf("enter the integer value:");
	scanf("%d",&n);
	printf("the value of the variable n=%d",n);
	


//computing the sum of the series of addition of integer till n
	int S1,a;
	a=n*(n+1);
	S1=a/2;

//computing sum of the squares

	int S2,b;
	b=n*(n+1)*(2*n+1);
	S2=b/6;
	

//computing the sum of digits of n

	int S3,x,y,z,m;
	x=n/100;
	y=n%100;
	z=y/10;
	m=y%10;
	S3=x+z+m;
	printf("\nthe values of S1=%d \n,S2=%d \n,S3=%d",S1,S2,S3);
	return 0;
}
	
	
	
	




