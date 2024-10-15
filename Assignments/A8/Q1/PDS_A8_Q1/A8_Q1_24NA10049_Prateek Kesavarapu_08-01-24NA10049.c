// To check whether the given number is a palindrome or not
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>
#include <math.h>

// Recursive function to find the length of the number
int digits(int num, int count){
	if(num / 10 != 0)
		return digits(num / 10, count + 1);
	return count + 1;
}

// Split the number into its constituent digits
void toDigits(int *digs, int num){
	int len = digits(num, 0);
	for(int i = 0; i < len; i++){
		digs[i] = num % 10;
		num /= 10;
	}
}

// Check recursively whether the function is a palindrome or not
int isPalindrome(int num, int current){
	int len = digits(num, 0) - 1;
	int digits[len];
	toDigits(digits, num);
	if(current <= len / 2){
		if(digits[current] == digits[len - current])
			return isPalindrome(num, current + 1);
		else
			return 0;
	}
	return 1;	
}

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(isPalindrome(num, 0))
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
	return 0;
}
