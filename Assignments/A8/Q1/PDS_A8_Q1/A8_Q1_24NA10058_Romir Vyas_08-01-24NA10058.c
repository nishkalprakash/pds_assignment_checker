#include <stdio.h>


int digits (int n) 
{
	int num , x ;
	if ( num = 0 ) 
	return 0 ;
	x = num / 10 ;
	if ( x > 0 ) 
	x++ ;				// x shows the number of digits 
	return digits ( x ) ;

}

void isPalindrome (int n) 
{
	if ( digits (n) == 1 ) ;
	printf ("Is a palindrome") ; 

					// if the first digit = last digit , continue 

}
int main () 
{
	int n ; 
	printf ("Enter N = ") ;
	scanf ("%d" , &n ) ;
	
	
	
	return 0 ;


}
