//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("enter the coefficient of x^5:  ");
  scanf("%d" ,&a );
  printf("enter the coefficient of x^4:  ");
  scanf("%d" ,&b );
  printf("enter the coefficient of x^3:  ");
  scanf("%d" ,&c );
  printf("enter the coefficient of x^2:  ");
  scanf("%d" ,&d );
  printf("enter the coefficient of x^1:  ");
  scanf("%d" ,&e );
  printf("enter the coefficient of x^0:  ");
  scanf("%d" ,&f );

  printf("polynomial:%d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n" , a,b,c,d,e,f);
  int g,h,i,j;
  g=5*a;
  h=4*b;
  i=3*c;
  j=2*d;
  printf("derivative:%d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n", g,h,i,j,e);
}
  
