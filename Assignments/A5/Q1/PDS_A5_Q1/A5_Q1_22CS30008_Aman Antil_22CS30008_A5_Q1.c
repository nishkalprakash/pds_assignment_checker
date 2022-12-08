/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 5
Description : Program to calculate sum of series
*/
#include<stdio.h>
int power(int x, int n){//function to calculate x to power n
	int prod=1;
	for(int i=1;i<=n;i++){
		prod=prod*x;
	}
	return prod;
}
int fact(int n){//function to calculate x factorial
	int fac=1;
	for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;
}
int main(){
	int x,n;
	float sum=1.0;
	printf("Enter number and number of terms : ");
	scanf("%d %d", &x, &n);
	for(int i=1;i<n;i++){
		sum=sum+((float)power(x,i))/fact(i);//calculating sum
	}
	printf("%f", sum);
	return 0;

}