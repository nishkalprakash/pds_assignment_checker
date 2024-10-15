#include<stdio.h>
#include<math.h>
//function to read no of digits
int digit(int n,int count)
{
	if(n/10==0)
		return count;
	else{
	count++;
	digit(n/10,count);
	}
}
//function to calculate reverse number

void isPalindrome(int n)
{
	if(n/(int)pow(10,digit(n,1)-1)!=n%10)
		printf("\nthis is not a palindrome");
	else if ((n/10)==0)
		printf("\nthis is a palindrome");
	
	else 
		{n=n-((n/(int)pow(10,digit(n,1)-1)*pow(10,digit(n,1)-1)));
		n=n/10;
		isPalindrome(n);
	}
}
int main()
{
	//Reads a natural number n
	int n,digits;
	scanf("%d",&n);
	
	//reads no of digits
	digits=digit(n,1);
	printf("no of digits are:%d",digits);
	
	//check if it is palindrome
	isPalindrome(n);
	
	
	return 0;
}
