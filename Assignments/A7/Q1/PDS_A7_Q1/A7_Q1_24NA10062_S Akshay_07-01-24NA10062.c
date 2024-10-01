/*
program to print sum of series

Name: S.Akshay
Roll No: 24NA10062
*/

#include <stdio.h>

int power(int x, int n){
	int pow=1;
	for(int i=0;i<n;i++) pow*=x;
	return pow;
}

int fact(int n){
	int fac=1;//covers the n=0 case also
	//0! = 1
	for(int i=1;i<=n;i++)fac*=i;
	return fac;
}

void main(){
	int x,n;
	float sum=0;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		sum += (float)power(x,i)/fact(i);
	}
	printf("Sum of the first n terms of series is %.4f\n",sum);
}
