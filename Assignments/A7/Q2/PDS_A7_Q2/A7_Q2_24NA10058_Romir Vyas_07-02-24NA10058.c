#include <stdio.h> 
int gcd ( int a , int b ) // computing gcd of two numbers 
{
    int temp ;
    while ( b != 0 ) {
    temp = b  ;
    b = a % b ;
    a = temp ;
    }
    return a ; // a becomes the gcd 
}
void pair (int a[]) // to check for co prime numbers 
{
    for ( int k = 0 ; k < 4 ; k++ ) { 
      for ( int l = k + 1 ; l < 5 ; l++ ) {
       if ( gcd ( a[k] , a[l] ) == 1 ) {
        printf ("%d and %d are CoPrimes \n", a[k] , a[l] ) ;
    } } } 
    return ; // void returns null value
}
  int main () // runing main code 
{
	int n[5]  ;
	for ( int i = 0 ; i < 5 ; i++ ) 
		scanf ("%d" , &n[i] ) ;
	pair(n);
	return 0;
}

    

