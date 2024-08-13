/*
Program to calculate sum of first n integers (s1), sum of squares of first n integers (s2) and sum of digits of n
n is accepted from user and is a three digit number

Name: S.Akshay
Roll No.: 24NA10062
*/


#include <stdio.h>
void main(){

	int n, s1,s3;
	long int s2;
	scanf("%d",&n);
	//sum of first n integers = n(n+1)/2
	s1 = (n*(n+1))/2;
	//sum of squares of first n intgers = n(n+1)(2n+1)/6
	s2 = (n*(n+1)*(2*n+1))/6;
	// n/100 gives hundredths digit
	// (n%100)/10 gives tens digit
	// n%10 gives units digit
	s3 = n/100 + (n%100)/10+(n%10);
	printf("S1 = %d\n",s1);
	printf("S2 = %ld\n",s2);
	printf("S3 = %d\n",s3);
}

