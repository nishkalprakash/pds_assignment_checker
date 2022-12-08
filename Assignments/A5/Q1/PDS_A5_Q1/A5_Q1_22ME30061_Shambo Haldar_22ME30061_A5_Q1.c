/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 5
Description : Program to find the sum of the first n terms of the series 1 + x + x^2/2! +...
*/

#include<stdio.h>

int power(int x,int n)
{
	int power = 1,i;
	for(i = 1;i <= n;i++){
		power = power * x;
	}
	return power;
}


int fact(int n)
{
	int prod = 1,i;
	for(i = 1;i <= n;i++){
		prod = prod * i;
	}
	return prod;
}

int main()
{
	int i,x,n;
	float sum = 0;
	printf("Enter x of the expression 1 + x + x^2/2! + ... and the number of terms:\n");
	scanf("%d %d",&x,&n);
	for(i = 0;i < n;i++){
		sum = sum + power(x,i)/fact(i);
	}
	printf("Sum of the series is:\n%f",sum);
	return 0;
}





