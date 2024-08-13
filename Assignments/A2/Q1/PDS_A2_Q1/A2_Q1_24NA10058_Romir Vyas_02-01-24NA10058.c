#include <stdio.h>
int main ()
{
   int n , s1 , s2 , s3 ;
   printf (" Enter n ") ;
   scanf ("%d" , &n ) ;
   s1 =  (n * (n + 1)) / 2 ;
   printf (" Sum of n numbers is %d \n" , s1 ) ;
   printf ("Enter n ") ;
   scanf ("%d" , &n ) ;
   s2 = (n * (n + 1) * (2 * n + 1)) / 6 ;
   printf (" Sum of squares is = %d  \n ", s2) ;
return 0 ; 
}   
