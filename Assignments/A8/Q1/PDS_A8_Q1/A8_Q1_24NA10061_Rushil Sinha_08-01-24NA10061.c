//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to Check whether a number is a pallindrome or not
#include <stdio.h>
#include<math.h>

int num_digit = 0;
int state;

int IsPallindrome(int num, int numDigits) {	//returns 1 or 0 whether num is pallindrome or not
	if (numDigits <= 1){		//Base Case
		return 1;
	}
	
	int First_digit = num / pow(10, numDigits -1);
	int Last_digit = num % 10;
	if (First_digit == Last_digit) {
		num = num % (int)pow(10, numDigits - 1);		//alters the number, remves first and last digit
		num = num / 10;
		return IsPallindrome(num, numDigits -2);
		
	}
	else{
	return 0;
	}	
}

int digits(int num){			//function to count the number of digits
	if (num < 10) {
		return 1;
	}
	return 1 + digits(num/10);
}

int main() {

int n;
scanf("%d", &n);
int d = digits(n);
if (IsPallindrome(n, d) == 1) {			
	printf("Palindrome\n");
}
else {
	printf("Not Palindrome\n");
}
return 0;
}
