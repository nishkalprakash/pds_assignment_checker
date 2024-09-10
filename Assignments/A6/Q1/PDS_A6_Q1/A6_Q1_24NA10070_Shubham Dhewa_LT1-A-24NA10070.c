#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 float Filter[5] ;
 int x, Bin_A[5], Bin_B[5] ;
 
 for(int i=0; i<=4; i++)
 {
  for(int j=0; j<=4; j++) ;
  {
   srand(10) ;
   int x=rand()%100+1 ;
   }
  Filter[i]=x ;
  printf("Filter[%d] = %f\n", i, Filter[i]) ;
  }
  return 0 ;
 }
