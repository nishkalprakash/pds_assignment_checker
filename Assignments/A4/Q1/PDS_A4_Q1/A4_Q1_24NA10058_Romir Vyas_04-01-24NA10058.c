#include <stdio.h> 
int main () 
{
  int n , a = 1 , b = -1 , term ;
  printf ("Enter a positive number = \n" ) ;
  scanf ("%d" , &n) ;
  if (n <= 0) 
  printf ("N is invalid \n") ;
  for ( int x=0 ; x < n ; x++ ) {
  printf ("%d " , a) ;
  term = a - b ;
  a = b ;
  b = term ;
  }
  printf ("\n") ;
  
  return 0 ;
}  
  
 
