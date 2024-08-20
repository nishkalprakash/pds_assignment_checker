#include <stdio.h> 
int main () 
  {
  int day , month , year    ;
  printf ("Enter today's date in (DD MM YY) "); 
  scanf ("%d %d %d" , &day , &month , &year) ;
  if ( day >= 1 && day <= 31 ) 
  printf ("Valid date \n") ;
  if ( month >= 1 && month <= 12 ) 
  printf ("Valid date \n") ;
  if ( year >= 0 ) 
  printf ("Valid date \n") ;
  else if (printf ("Invalid date \n")) ;
  return 0 ;
}
