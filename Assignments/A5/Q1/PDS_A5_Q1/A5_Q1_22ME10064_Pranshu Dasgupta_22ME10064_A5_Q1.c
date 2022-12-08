/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 5
Description : Program to find the sum of e power x expansion to n terms*/

#include <stdio.h>

int power(int x, int n);
int fact(int n);

int main(){
	int x, n, i;
	float sum=1; //Initialising sum to 1 for case when 0 terms of x are required
	printf("Enter the values of x and n: ");
	scanf("%d %d", &x, &n);
	if (n>=0){  //Input value of n should not be negative
		for (i=1; i<n; i++){  //If we want to find sum to n terms, then only n-1 terms of powers of x exist. First term (x^0/0!) is excluded since sum is initialised to 1 already.
			sum+=((float)power(x,i)/fact(i)); //Getting value of x^i/i!
		}
		printf("%.4f", sum);
	}
	else printf("Invalid Input");  //If input n is negative
	return 0;
}

int power(int x, int n){
	int i, term=1;
	for (i=1; i<=n; i++){
		term*=x;  //Multiplying x, n times
	}
	return term;
}

int fact(int n){
	int i, prod=1;
	for (i=1; i<=n; i++){  //Finding factorial of n
		prod*=i;
	}
	return prod;
}
