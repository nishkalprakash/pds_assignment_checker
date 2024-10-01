#include <stdio.h> 
int power (int x , int n) // computing x power n 
{
	int k = 1 ;
	for ( k = 1 ; k <= n ; k++ ) {
	k = k * x ;
	} 
	return k ;
}

int fact ( int n ) // computing factorial of a number
{
    int product = 1 , i ;
    for ( i = 1 ; i <= n ; i++ ) {
    product = product * i ; 
    }
    return product ;
}

int main () // main code
{
   int x , n ;
   printf ("Enter X = ") ;
   scanf ("%d", &x ) ;
   printf ("Enter N = ") ;
   scanf ("%d" , &n) ;
   float exp = 0 ;
   for ( int j = 1 ; j < n ; j++ ) {
   exp = exp + (float)power ( x , j ) / fact ( j ) ;  // given tests are failing this stage 
   }
   printf ("Ans = %lf \n" , exp) ;
   return 0 ;
}
   
