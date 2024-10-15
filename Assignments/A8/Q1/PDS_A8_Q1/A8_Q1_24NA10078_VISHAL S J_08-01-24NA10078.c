#include<stdio.h>
#include<math.h>
int digits(int n)
{
	if(n==0) return 0;
	else return 1+digits(n/10);
}

int Ispalindrome(int n, int d)
{
	int i, j;
	if ((d==1)||(d==0)) printf("Palindrome");
	else if (n%10 == n/(int) pow(10, d-1))
	{ 
	i=n%(int)pow(10, d-1);
	j=i/10;
	Ispalindrome(j, d-2);
	}
	else printf("Not Palindrome");
}
	
	 
int main()
{
	int n, d;
	scanf("%d", &n);
	d = digits(n);
	Ispalindrome(n, d);
	return 0;
}
