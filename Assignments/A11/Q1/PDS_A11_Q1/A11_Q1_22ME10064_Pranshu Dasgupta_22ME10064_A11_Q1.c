/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 11
Description: Recursive function to find the sum of the harmonic series*/

#include <stdio.h>
#include <stdlib.h>

//Recursive function
float harmonic(int n){
	if (n==1) return 1;  //basecase
	return (1.0/n) + harmonic(n-1);
}

int main(){
	int n;
	printf("Enter the number of terms in the harmonic series: ");
	scanf("%d", &n);
	if (n>=1){
		printf("%.3f\n", harmonic(n));
	}
	else printf("INVALID INPUT FOR VALUE OF n\n");
	return 0;
}
