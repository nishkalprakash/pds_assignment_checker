/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 11
Question number : 1
Description : Sum of harmonic series
*/

#include<stdio.h>
#include<stdlib.h>

float func(int n){							//Creating a function to calculate the sum
	float sum=0;
	if(n==1)return(1);
	return(1.0/n+func(n-1));
}

int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Result = %f\n",func(n));		//Printing the result
	return 0;
}