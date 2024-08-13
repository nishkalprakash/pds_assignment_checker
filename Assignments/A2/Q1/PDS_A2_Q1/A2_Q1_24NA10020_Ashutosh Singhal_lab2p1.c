#include <stdio.h>
int main(){
//program to find out sum of first n numbers//

	int n,S1;
	printf("enter the number");
	scanf("%d", &n);
	S1=n*(n+1)/2;
	printf("the sum of first n numbers is %d \n", S1);
	//sum of squares//
	int S2;
	S2= n*(n+1)*(2*n+1)/2;
	printf("the sum of squares is %d \n",S2);
	//sum of digits of a number//
	int a,b,c,S3;
	printf("enter the digits of n \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	S3=a + b + c;
	printf("the sum of digits is %d",S3);
	return 0;
} 
