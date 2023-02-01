/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 11
Description : Program to find sum of harmonic series
*/         
#include<stdio.h>
double sm(int n){
	if(n==1) return 1;
	return (1.0/(double)n)+sm(n-1); //recursive call
}
int main(){
	printf("Enter n: ");
	int n; scanf("%d", &n);
	printf("%0.3lf", sm(n));
	return 0;
}