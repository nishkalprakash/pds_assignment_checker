//This program is to check if a given number is palimdrome or not
//Code Creator : Aditya Chakraborty
//Roll No: 24NA10010
#include <stdio.h>
#include <math.h>
int digits(int n){
	if (n/10==0){
		return 1;             //this recursive function is to check the no of digits in this number
	}
	return 1 + digits (n/10);
	}
int IsPalindrome(int n){
	int t,first_digit,last_digit,a,b;
	if (digits(n)==1){
		return 1;
	}
	last_digit = n%10;
	first_digit = n/(pow(10,digits(n)-1));
	if (last_digit!=first_digit){
	    return -1;
	   }
	if (last_digit==first_digit){
		t=1;                       //this recursive function is to check if the given number is a palimdrome or not
		}
	a = n/10;
	b=a% (int)(pow (10,digits(n-1)-1));
	IsPalindrome(b);
	return t;
}
int main (){
	int n,d;
	printf ("Enter the number:");
	scanf ("%d",&n);
	d = digits(n);
	printf ("%d",d);
	int f = IsPalindrome(n);
	if (f==1){
		printf ("Palindrome");
	}
	else{
		printf ("Not Palindrome");       //the main body here will call the ispalindrome function to check whther the given number is a palimdrome or not
	}
	return 0;
}
