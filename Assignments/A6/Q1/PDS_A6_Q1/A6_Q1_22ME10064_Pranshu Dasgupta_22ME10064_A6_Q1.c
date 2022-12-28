/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 6
Description : Program to print first k terms fo a sequence*/
#include <stdio.h>

long int print_term(int n){
	if (n==0 || n==1 || n==2) return n;  //t0=0, t1=1, t2=2
	else return (3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1);  //writing general expression for tn
}

int main(){
	int a;
	printf("k=");
	scanf("%d", &a);
	if (a<0){  //for input as a less than 0
		printf("Invalid input\n");
		return 0;
	}
	for (int i=0; i<=a-2; i++) printf("%ld, ",print_term(i));  //t1 is at i=0, t2 is at i=1, ... ta-1 is at i=a-2
	printf("%ld\n", print_term(a-1));  //printing ta which is at i=a-1
//Last term has been printed separately so that no comma appears in the output.
	return 0;
}
