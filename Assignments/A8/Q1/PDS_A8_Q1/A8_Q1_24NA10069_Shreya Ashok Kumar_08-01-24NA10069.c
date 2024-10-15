#include <stdio.h>
#include <math.h>
int digits(int n)
{
	int f(int n){
	if(n==0) return 0;
	return 1+f(n/10);
}}
void IsPalindrome(int n)
{	int f;
	f=digits(n);
	if (f<=1)
	{printf("Palindrome");
	return;
	}
	else { int c,first_dig,last_dig,s,a;
		
		first_dig=n/(int)pow(10,(f-1));
		last_dig=n%10;
		if (first_dig=last_dig)
		{
			s=n%(int)pow(10,(f-1));
			a=s/10;
			IsPalindrome(a);
		}
		else printf("Not Palindrome");}}

int main()
{
	int N,b;
	scanf("%d",&N);
	IsPalindrome(N);
	return 0;
}	

