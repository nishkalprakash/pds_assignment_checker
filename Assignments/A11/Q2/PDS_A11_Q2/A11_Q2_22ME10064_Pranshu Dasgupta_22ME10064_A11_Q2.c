/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 11
Description: Recursive function to check if a given number belongs to the fibonacci series*/

#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if (!n || n==1) return n;  //base case returns 0 or 1 if n is 0 or 1
	return fib(n-1) + fib(n-2);
}

int main(){
	int n, i=0;
	printf("Enter the integer you want to check for: ");
	scanf("%d", &n);
	while(n>=fib(i)){  
		if (n==fib(i)) {printf("Yes\n"); return 0;}  //if a match is found then we print 'yes' and exit main.
		i++;
	}
	printf("No\n");
	return 0;
}
