/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 4
Description : Program to print digits of number in reverse order
*/
#include<stdio.h>
int main(){
	long n, m;
	printf("Enter number : ");
	scanf("%ld", &n);
	if (n==0) printf("Zero");
	while(n!=0){//looping until all digits gone
		m=n%10;//extracting last digit
		switch(m){//printing digit in words
	case 0 : printf("Zero ");
		break;
	case 1 : printf("One ");
		break;
	case 2 : printf("Two ");
		break;
	case 3 : printf("Three ");
		break;
	case 4 : printf("Four ");
		break;
	case 5 : printf("Five ");
		break;
	case 6 : printf("Six ");
		break;
	case 7 : printf("Seven ");
		break;
	case 8 : printf("Eight ");
		break;
	case 9 : printf("Nine ");
		break;
	}
		n=n/10;//removing last digit
	}
return 0;
}
