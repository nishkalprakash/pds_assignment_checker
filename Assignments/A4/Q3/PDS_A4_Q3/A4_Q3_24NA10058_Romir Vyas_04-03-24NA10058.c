#include <stdio.h> 
int main ()
{
  int height , row , col , n ;
  printf ("Enter number of rows = ") ;
  scanf ("%d" , &height) ;
  for ( row = 0 ; row < height ; row ++ ) {
   for( col = height - row - 1 ; col > 0 ; col -- ) 
   printf (" ") ;
   }
  for ( col = 0 ; col <= row ; col ++ ) 
  {
   n = col % 10 ;
   printf ("%d" , n) ;
   }
   printf ("\n") ;
  return 0 ;
}
