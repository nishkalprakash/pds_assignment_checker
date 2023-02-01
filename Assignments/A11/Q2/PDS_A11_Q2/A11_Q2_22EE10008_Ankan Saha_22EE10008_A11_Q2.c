/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 11
Description : Check if a number belongs to the fibonacci sequence
*/

#include <stdio.h>											// Includes the standard IO header file

int fib(int n){			// fibonacci function, gives the nth number of fib. seq.
	if(n<2){
		return n;
	}
	return fib(n-1) + fib(n-2);
}

void check(int n){			// checks if n is a fib number
	int s;
	for(int i=1;;i++){
		s = (fib(i)-n)*(fib(i-1)-n);		// 0 if it matches, -ve if its between 2 fib numbers 
		if(s < 0){
			printf("No\n");
			break;
		}
		if(s == 0){
			printf("Yes\n");
			break;
		}
	}
}

int main() {
	int n;
	printf("Enter n : ");			// taking input
	scanf("%d", &n);
	check(n);
	return 0;
}