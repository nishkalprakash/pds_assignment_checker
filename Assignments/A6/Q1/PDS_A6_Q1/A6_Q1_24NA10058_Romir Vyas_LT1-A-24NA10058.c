#include <stdio.h> 
#include <math.h>
#include <time.h> 
#include <stdlib.h>
#define PI 3.14159 
#define N 4
#define A 2
#define B 3
int main () 
{
  // srand (42) ; 
  int randomNumber = rand() % 100 + 1 ;
  printf ("Random Number : %d \n" , randomNumber) ; 
  
  int x , k , arrFilter[N-1]  ;
  float arrBin_A[A-1] , arrBin_B[B-1] , y , degree ;
  
  while ( (arrBin_A[x-1] == 2) || (arrBin_B[x-1] == 2)) {
  
   for ( k = 1 ; k <= x ; k++ ) {
   	
   	y = (pow( -1 , k + 1 ) * k * k) / (2 * k + 1) ;  
   }
  degree = x * PI / 180 ; 
  y = y + cos( degree / 2 ) ; 
  	if ( y > arrFilter[N-1] ) {
  	 x = arrBin_A[A-1] ;
  	}
  	else if ( y < arrFilter[N-1] ) {
  	 x = arrBin_B[B-1] ; 
  	}
    }	
    printf ("%f \n" , arrBin_A[x-1]) ;
    printf ("%f \n" , arrBin_B[x-1]) ;
    printf ("%d \n" , arrFilter[x-1]) ;
  
 return 0 ;
}
