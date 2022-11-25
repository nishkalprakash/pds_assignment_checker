#include <stdio.h>

#include <math.h>

int main ()

{

     int p,q,r ;

     float m,n ;

     printf ( "Enter the coefficients of a given quadratic equation \n") ;

    scanf ("%d %d %d", &p,&q,&r) ;

   m= (-q+ sqrt(q*q - 4*p*r)) / (2*p);

   n = (-q - sqrt(q*q - 4*p*r)) / (2*p);

   printf ("%f%f" , m,n) ;

   return 0 ;

}
