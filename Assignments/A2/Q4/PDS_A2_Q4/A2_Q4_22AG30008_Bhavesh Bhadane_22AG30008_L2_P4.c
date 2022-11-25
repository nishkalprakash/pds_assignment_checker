#include <stdio.h>
#include <math.h>
int main ()

{

    float i,j,k ;

   printf("Enter the value of i,j to get speed of light(k) \n ") ;

   scanf("%f%f", &i,&j) ;

   k = ( 1/ sqrt ( i*j)) ;

   printf("%f" , k ) ;

   return 0 ;

}

  
