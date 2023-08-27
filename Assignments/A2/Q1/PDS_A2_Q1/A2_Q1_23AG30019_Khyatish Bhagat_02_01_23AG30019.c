// Roll No :23A 02G30019 //
// Name : Khyatish Bhagat //

#include <stdio.h>
int main ()
{
  float a;
  printf ("Enter the number:");
  scanf ("%f",&a );

  int b ;
  b= ( int ) a ;

  float c;
  c= a - b ;

  printf (" Integral part:%d",b);
  printf (" Fractional part:%f",c);
  return 0;
}
