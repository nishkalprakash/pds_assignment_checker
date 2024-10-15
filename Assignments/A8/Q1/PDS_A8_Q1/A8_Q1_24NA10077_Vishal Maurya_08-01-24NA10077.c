//Program to check if enterred number is palindrome
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
#include <math.h>

int n;
int digits (int n, int count);
void isPalindrome (int n, int digits);
int main()
{
	printf("Enter N: ");
	scanf("%d",&n);
	
	int Digits = digits(n,0);
	
	isPalindrome(n, Digits);
	return 0;
}

int digits(int n, int count)
{
	n = n/10;
	if(n!=0)
	{
		count++;
		digits(n,count);
	}
	if(n==0)
	{
		count++;
		return count;
	}
}

void isPalindrome (int n, int digits)
{
	if (digits == 1)
	{
		printf("Palindrome");
		return;
	}	
		
	int LD = n%10;
	
	int FD = n;
	for (int i = 1; i<digits; i++)
	{
		FD = FD/10;
	}
	
	int sub = FD;
	
	for(int i = 1; i<digits; i++)
	{
		sub = sub*10;
	}
	
	n = n - sub;
	
	n = n/10;
	
	if (LD == FD)
	{
		if(digits-2 > 1)
		{
			isPalindrome(n, digits-2);
		}
		if(digits-2 <= 1)
		{
			printf("Palindrome");
		}
	}else
	{
		printf("Not Palindrome");
	}
}
