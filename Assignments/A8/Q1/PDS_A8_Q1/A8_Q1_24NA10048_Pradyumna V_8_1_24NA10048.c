//Pradyumna 24NA10048
#include <stdio.h>
#include <math.h>
int digits(int x,int count)	//recrsive function to find number of digits
{
	if (x<10)
		{return count;}
	else
		{digits(x/10,count+1);}				
}
void ispalindrome(int x)	//recursive function to identify if it ia palindrome
{
	if (x<10)
		{printf("palindrome, ");	
		return;}
	int b= digits(x,1);	//calling digit function 
	int c=pow(10,b-1);
	if ((x/c)==(x%10))
		{ispalindrome((x%c)/10);}	//using logic of cutting first and last digit
	else {printf("not a palindrome, ");}			
}
int main()
{
int n,b;
printf("enter your number lesser than 10^5: ");
scanf("%d",&n);		//user input
b=digits(n,1);		//calling both recursive functions
ispalindrome(n);	
printf("%d",b);
}
