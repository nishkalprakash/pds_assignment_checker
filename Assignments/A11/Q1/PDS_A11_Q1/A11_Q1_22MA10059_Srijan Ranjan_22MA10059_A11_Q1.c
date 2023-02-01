/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:11
Description: This program takes input of a number and returns its harmonic sum using recursion.
*/
#include<stdio.h>
#include<stdlib.h>
float sum(int n){								//Recursive function to calculate harmonic sum.
	if(n==1){									//Base Condition.
		return 1;
	}
	else{
		return sum(n-1)+1.0/n;
	}
}
int main(){
	int n;										//Declaration of variables.
	scanf("%d",&n);
	printf("%f",sum(n));
	return 0;
}