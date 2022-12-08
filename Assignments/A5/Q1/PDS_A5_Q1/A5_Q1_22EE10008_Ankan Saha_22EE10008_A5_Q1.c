/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 5
Description : Program to calculate sum of a series
*/

#include <stdio.h>											// Includes the standard IO header file

int power(int x, int n) {									// function to calculate power
	int pow = 1;
	for (int i = 1; i<=n; i++) {							
		pow *= x;											// multiply x n times with x
	}
	return pow;
}

int fact(int n) {											// function to calculate factorial
	int fac = 1;
	for (int i = 1; i<=n; i++) {						
		fac *= i;											// multiplying numbers till n
	}
	return fac;
}

int main() {
	
	int x, n;	
	float sum=0.0;											// Declaring variables
	printf("Enter x and n(number of terms) : ");
	scanf("%d%d", &x, &n);									// taking input
	for (int i = 0;i<n;i++) {								// as series starts from 1, i goes from 0 to (n-1)
		sum += ((float)power(x,i))/fact(i);					// each term(i) is equal to (x^i/i!)
	}
	printf("%f\n", sum);									// printing the sum, with a \n to keep the terminal clean
	return 0;
}