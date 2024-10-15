// Program to recursively find palindrome 
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
#include <math.h>
int digits(int n)
{
	if(n<10)
	return 1; //base case
	return 1+digits(n/10);
}
int isPalindrome(int n)
{
	int digit=digits(n);
	if(digit==1) return 1; //base case
	if((n/(int)(pow(10,digit-1)))==(n%10))
	return isPalindrome((int)(n/pow(10,digit-1))%10);	
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(isPalindrome(n)==1)
	printf("Palindrome\n");
	else
	printf("Not palindrome\n");
}


