/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 11
Description : Program to check if number appears in fibonachi series
*/         
#include<stdio.h>
long long int fib(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
	printf("Enter number: ");
	int n; scanf("%d", &n);
	for(int i=0;;++i){
		if(fib(i)>n){
			printf("No\n"); //if fib of number is greater than n then n is not a fib number 
			return 0;
		}
		if(fib(i)==n){
			printf("Yes\n");
			return 0;
		}
	}
	return 0;
}