/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 6
Description : Program to print terms
*/
#include<stdio.h>
int print_term(int n){
	int t;
	if(n==0) return 0; //specifying base condition for recursive function
	if(n==1) return 1;
	if(n==2) return 2;
	t=3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;//recursion
	return t;
}

int main(){
	int n;
	printf("enter number of terms: ");
	scanf("%d", &n);
	if(n<1){
	 printf("Invalid input");//condition for invalid input
	 return 0;
	}
	for(int i=0;i<n-1;i++) printf("%d, ", print_term(i));
	printf("%d\n", print_term(n-1));
	return 0;
}