#include <stdio.h>
int main () 
   {
   int a , b ,c ,d , i=0 ;
   printf ("Enter Value for a = ") ;
   scanf ("%d" , &a) ;
   printf ("Enter Value for b = ") ;
   scanf ("%d" , &b) ;
   printf ("Enter Value for c = ") ;
   scanf ("%d" , &c) ;
   printf ("Enter Value for d = ") ;
   scanf ("%d" , &d) ;
   if ( a==b && a!=c && a!=d ) 
   i++ ;
   if ( a==c && a!=b && a!=d )
   i++ ;
   if ( a==d && a!=b && a!=c ) 
   i++ ;
   if ( b==c && b!=d && b!=a ) 
   i++ ;
   if ( b==d && b!=c && b!=a ) 
   i++ ;
   if ( c==d && c!=a && c!=b ) 
   i++ ;
   if ( i== 1 ) 
   printf ("YES"\n) ;
   else if
   (printf ("NO"\n)) ;
   return 0 ;
}
