//Code Creator: Arjun Agarwal
//Roll No: 24NA10018
#include <stdio.h>

int digits(int x) ;			//Introducing digit function 
void IsPalindrome(int x) ;		//Introducing palindrome function

int main(){
int n ;
	scanf("%d",&n) ;		//Read a natural number n from the user				
	IsPalindrome(n) ;
return 0;
}

int digits(int x){
int Ndigits, ct=1 ;
	
while(Ndigits != 0)
	Ndigits = digits(x/10) ;
	ct++;
return ct ;
}

void IsPalindrome(int x){
int a=0, n ;
	n = digits(x) ;
for(int i = 0; i < n; i++)
	a = a + (x%(i*10))*(n-i)*10 ;
if(a == x)
	printf("Palindrome") ;
else printf("Not palindrome") ;
}

