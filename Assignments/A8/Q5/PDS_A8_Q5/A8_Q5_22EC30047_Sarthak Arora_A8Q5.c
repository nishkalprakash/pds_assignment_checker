/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 8
description: printing substrings if they are palindrome
*/ 
# include <stdio.h>

int N=0;

// a void function to print the string if its a palindrome
void palindrome(char str[] , int L , int R ){
	int len = R-L+1 , count = 0 ;
	for ( int i  = 0 ; i<len ; i++ ){
		if(str[R-i]==str[L+i]) count ++;
	}
	if(count == len){
		N++;
		for(; L<=R ;L++) printf("%c",str[L]);
		printf("\n");	
	}
	
	
}





int main()
{
	printf("enter the string:\n");
	char str[100];
	scanf("%s",str);

	for(int L = 0 ; str[L]!='\0' ; L++){                            // a loop that will pass substring to the function 
		for(int R =L+1; str[R]!='\0' ;R++){
		palindrome(str, L, R );
		
		}
	}
	
	if(N==0) printf("No palindrome substrings present");           // if no palindrome found 
	

	return 0;
}
