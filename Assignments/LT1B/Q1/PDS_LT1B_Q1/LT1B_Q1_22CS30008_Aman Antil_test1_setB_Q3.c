/*
Section 14
Roll no : 22CS30008
Name : Aman
Test : 1
Description : Program to find armstrong numbers
*/
#include <stdio.h>
//power function
int powr(int a, int b){
	int prod=1;
	for(int i=1;i<=b;i++) prod=prod*a;
	return prod; 
}
//function to calculate number of digits
int nod(int x){
	int counter=0;
	while(x){
		x=x/10;
		counter++;
	}
	return counter;
}
//function to calculate sum of (digits)^(number of digits)
int arm_no(int x){
	int s_pow=0;
	int d=nod(x);
	while(x){
		s_pow=s_pow+powr((x%10), d);
		x=x/10;
	}
	return s_pow;
}
int main(){
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	if (n<1) printf("Invalid input");
	//condition for checking armstrong number
	for(int i=1; i<=n;i++) if (arm_no(i)==i) printf("%d ", i);
	return 0;
}
