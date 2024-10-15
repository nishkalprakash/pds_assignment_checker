#include<stdio.h>
#include<math.h>

//Write a recurssive function to find digits of a number n
//Write a recursive function to check if number is palindrome

int digits(int n,int count){
	//Base Case
	if (n==0) return count;
	
	count++ ;
	//Recurssive Call 
	digits(n/10,count);
}

void isPalindrome(int n,int len){
	int dig = len ;		//Length of the number
	
	//Base case
	if (n/10 == 0){
		printf("It is Palindrome. \n");
		return ;
	}
	
	int l_dig = n%10 ;		//Last digit of n
	int f_dig = (int)n/(pow(10,dig-1));			//First digit of n
	
	//Condition for Palindrome
	if(l_dig == f_dig){
		n = (int)((n/pow(10,dig-1) - f_dig)*10)  ; //Changing n 
		
		isPalindrome(n, dig);		//Recurrsive Call
	}
	//Counter statement
	else {
		printf("Not a Palindrome. \n");
		return ;
	}
}

int main(){
	int n, count=0, dig;			//Declaration of variables
	printf("Enter a number n : ");
	scanf("%d", &n);
	
	//Calling dig to obtain number of digits
	dig = digits(n,count);	
	
	//Calling isPalindrome for Palindrome check
	isPalindrome(n,dig);		
}
