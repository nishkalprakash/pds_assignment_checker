// Roll no - 23AG30019 //
// Name - Khyatish Bhagat //

#include <stdio.h>
int main ()

{
  int a,b ;
  printf ( " Enter the amount to be deposited :%d",a );
  scanf (" %d", &a );
  printf ( " Period of deposit in years :%d" , b );
  scanf ("%d", &b );

  float c;
  c= a + b*a*5/100 ;
  printf ( " Total amount to be processed at the end of deposit:%f",c ) ;
  scanf ( "%f",&c);
  return 0;

}
  
