/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 4
Description :  printing digit names from right ot left.
*/




#include <stdio.h>  //including the header file

int main(){
	int temp,digit,check;    //declaring required variables
	long n;
	printf("Enter a number : ");  //taking input
	scanf("%ld",&n);
	temp = n;  
	
	while(temp != 0)
	{
		digit = temp%10;  //extracting digits one by one  
		if(digit == 1) printf("One");          //checking and printing the extracted digit
		else if(digit == 2) printf("Two ");
		else if(digit == 3) printf("Three ");
		else if(digit == 4) printf("Four ");
		else if(digit == 5) printf("Five ");
		else if(digit == 6) printf("Six ");
		else if(digit == 7) printf("Seven ");
		else if(digit == 8) printf("Eight ");
		else if(digit == 9) printf("Nine ");
		else if(digit == 0) printf("Zero ");

		temp = temp/10;  //truncating a digit off the given number after each iteration
	}
	

	return 0;
}
