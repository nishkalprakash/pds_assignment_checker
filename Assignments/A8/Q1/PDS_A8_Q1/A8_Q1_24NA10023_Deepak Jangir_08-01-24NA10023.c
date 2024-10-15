#include<stdio.h>
#include<math.h>

int digits(int a, int b) // a is a natural number and b is number of digits in a
{
	if(a==0) return b;
	
	return digits(a/10, b+1);
}

int IsPalindrome(int a)
{
	
	if(a/10 == a/(int)pow(10, digits(a)-1) || a==0)
	{	
		printf("The number is Palindrome");
	}	
	else
	{printf("The number is not a Palindrome");}
}

int main()
{
	int n;
	printf("The natural number n is : ");
	scanf("%d", &n);
	
	int count=0;
	
	printf("The number of digits in n is %d", digits(n, count));
	
	return 0;
}
