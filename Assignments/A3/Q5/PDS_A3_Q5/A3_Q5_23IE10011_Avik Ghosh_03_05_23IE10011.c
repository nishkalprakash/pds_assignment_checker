//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int a,b,c,d,e,f;
  printf("Enter coefficient of x^0:");
  scanf("%d",&f);
   printf("Enter coefficient of x^1:");
  scanf("%d",&e);
   printf("Enter coefficient of x^2:");
  scanf("%d",&d);
   printf("Enter coefficient of x^3:");
  scanf("%d",&c);
   printf("Enter coefficient of x^4:");
  scanf("%d",&b);
  printf("Enter coefficient of x^5:");
  scanf("%d",&a);
  printf("Polynomial: %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n",a,b,c,d,e,f);
  printf("Derivative: %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n",a*5,b*4,c*3,d*2,e*1);
  return 0;
}
  
  
