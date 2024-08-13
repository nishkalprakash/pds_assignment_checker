#include<stdio.h>
//s1 to get sum of first n natural numbers
//s2 to get sum of square of first n natural numbers
//s3 to get the sum of the digits of the numbers 
//roll no - 24na10046
//creator - piyush dubey



int main ()
 {
	int n,s1,s2,s3;
	printf("Enter n between 100 to 999 \n");
	scanf("%d",&n);
	s1=(n)*(n+1)/2; //this is the formula of the sum of first n numbers 
	printf("s1 = %d\n",s1);
	s2=(n)*(n+1)*(2*n+1)/3; // formula for sum of square of first n natural numbers
	printf("s2 = %d\n",s2);
	int a,b,c,d;
	a=n%10;
	b=n/10;
	c=b%10;
	d=n/100;
	s3=a+c+d;
	printf("s3 = %d",s3);
	
	
	
	return 0;
}
