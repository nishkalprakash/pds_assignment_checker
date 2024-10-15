#include <stdio.h>
#include <math.h>
int k=0;		
//Dec. a global variable k for digit() counter.
int digit(int);		
//function prototypes.
int IsPalindrome(int, int);
int main()
{
	int n,d,flag;
	printf("\nPlease input the value of a natural number n:");
	scanf("%d", &n);
	if(n<0 || n>100000) printf("\nn is out of the range.\nPlease input n between 0 and 1,00,000.\n");	
	//n should be in the given domain.
	d=digit(n);		
	//calling recursive functions.
	flag=IsPalindrome(n, d);
	if(flag==1) printf("\nThe number %d is a palindrome.\n", n);	
	//printing the output.
	else printf("\nThe number %d is not a palindrome.\n", n);
	return 0;
}
int digit(int a)
{	
	if(a/10==0) k=1;	
	//for 1 digit numbers(base case)
	else 
	{
		digit(a/10);	
		//recursive call.
		k++;		
		//counter.
	}
	return k;	
}
int IsPalindrome(int b, int c)
{
	if(c==1) return 1;	
	//base cases.
	if(b%10==b/(int)(pow(10,c-1))) 	
	//checking the first and last digit.
	{
		b=b-(b/(int)(pow(10,c-1)) + b%10);
		//eliminating the first and the last digits.
		IsPalindrome(b, c-2);
		//calling recursively for inner digits.
		return 1;
	}
	else return 0;
}
