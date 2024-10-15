#include<stdio.h>
#include<math.h>
int digits(int n)
{
	if(n==0) return 0;
	return 1+digits(n/10);
}

int ispalindrome(int n , int dig)
{
	if(n<10) return 1 ;
	int first_digit , last_digit ;
	last_digit = n%10;
	first_digit = (int)n/(pow(10, (dig-1)));
	n = n-(first_digit*(pow(10,(dig-1))));
	n = (int)n/10;
	dig = dig-2;
	if(first_digit == last_digit && ispalindrome(n , dig))
	return 1 ;
	else return 0;
}


int main()
{	int n, dig;
	scanf("%d", &n);
	dig = digits(n);
	if(ispalindrome(n , dig))
	{printf("Palindrome");}
	else{printf("Not Palindrome");}
	return 0;
}
