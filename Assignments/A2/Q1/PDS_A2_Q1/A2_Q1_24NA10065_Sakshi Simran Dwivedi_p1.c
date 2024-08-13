 
 
#include <stdio.h>


int main()

{ 
  int S1, S2, S3 ,x, p, q, r, s;
  
  printf ("Enter a number, \n");
  scanf ("%d", &x) ;
  

   
  S1= (x*(x+1))/2 ;
  
  printf (" The sum of integers upto entered no. is : %d, \n" , S1) ;
  
  S2= (x*(x+1)*(2*x+1))/6 ;
  
  printf (" The sum of square of the numbers upto the entered no. is: %d, \n" , S2) ;
  
  p=x%10;
  q=(x-p)/10;
  r=q%10;
  s=(q-r)/10;
  
  S3=p+r+s;
  
  printf (" The sum of digits of the number entered is : %d, \n" , S3) ;
  
  
  return 0;
  
  }
