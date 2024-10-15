//Program to check if the input number is a palindrome or not
//Program Creator: Pratibha Shakya
//Roll no. : 24NA100050

#include<stdio.h>
#include<math.h>

int digits(int n) {
	if (n==0) return 0;
	return 1+digits(n/10);
}
	
int IsPalindrome(int n){
	int last, first, d;
	d=digits(n);
	last=n%10;
	first=n/(int)pow(10,(d-1));
	
	if(first!=last)
		printf("Not palindrome");
}

int main() {
	int n;
	scanf("%d", &n);
	if(n<0 || n>100000)
		printf("Number out of range");
	
	return 0;

}
	
	

