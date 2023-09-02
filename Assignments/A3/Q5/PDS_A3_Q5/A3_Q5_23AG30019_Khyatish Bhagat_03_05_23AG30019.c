#include <stdio.h>
int main ()

{
  signed int a,b ,c ,d ,e, f;

  printf ( " Enter the coeffecient of x^0-\n ");
  scanf ( "%d", &f);
  printf ( " Enter the coeffecient of x^1-\n ");
  scanf ( "%d", &e);  
  printf ( " Enter the coeffecient of x^2-\n ");
  scanf ( "%d", &d);
  printf ( " Enter the coeffecient of x^3-\n ");
  scanf ( "%d", &c);
    printf ( " Enter the coeffecient of x^4-\n ");
  scanf ( "%d", &b);
  printf ( " Enter the coeffecient of x^5-\n ");
  scanf ( "%d", &a);

  printf ( " Polynomial - %dx^5 + %dx^4 + %dx^3 + %dx^2 + %dx + %d\n ",a ,b ,c,d ,e ,f );

  printf ( " Derivative - %dx^4 + %dx^4 + %dx^2 + %dx + %d\n ",a*5,b*4 ,c*3 ,d*2 , e );
   



   return 0 ;
}
