/*
Program to find the number of digits and check if a number is a palindrome

Name:S.Akshay
Roll No:24NA10062
*/


#include <stdio.h>
#include <math.h>
int digits(int x,int d){
	if(x==0)return d;
	return digits(x/10,d+1);
}

int IsPalindrome(int x, int d){
	if(d<=1)return 1;
	if(x%10 != x/(int)pow(10,d-1)) return 0;
	return IsPalindrome((x%(int)pow(10,d-1))/10,d-2);
}

void main(){
	int n,d;
	printf("Enter a number: ");
	scanf("%d",&n);
	d = digits(n,0);
	if(n==0)d=1;
	printf("Number of digits: %d\n",d);
	if(IsPalindrome(n,d))printf("Palindrome\n");
	else printf("Not Palindrome\n");
}
