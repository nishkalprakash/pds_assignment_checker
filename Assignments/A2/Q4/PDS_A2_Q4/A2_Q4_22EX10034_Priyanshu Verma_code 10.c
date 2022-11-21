/* This program is to evaluate the speed of light */
#include <stdio.h>
#include <math.h>
int main()
{  int C ; 
   float U = 12.566e-7, E = 8.85e-12 ;

   printf("value of U = %f\n" , U);
   printf("value of E = %f\n" , E);
 
   C = 1/sqrt(U*E) ;

   printf("C = %d\n" , C );

return 0;
}
