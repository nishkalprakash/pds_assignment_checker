// Name : Swarup Jayaram Dhanavade
// Roll no: 23MI10052

#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf (" Enter the values of coefficients of  polynomial(ax^5 + bx^4 + cx^3 + dx^2 + ex + f):");
  scanf("%d %d %d %d %d %d", &a ,&b, &c, &d, &e,&f);
  printf( "your polynomoial is:%d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x +%d \n",a ,b,c,d,e,f);
  printf(" First Derivative is :%d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d \n ",5*a,4*b,3*c,2*d,e);
  return 0;
}
