//Roll No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  unsigned int a,b,c,d,e,f;
  printf("Enter coefficient of x^0: ");
  scanf("%u", &f);
  printf("Enter coefficient of x^1: ");
  scanf("%u", &e);
  printf("Enter coefficient of x^2: ");
  scanf("%u", &d);
  printf("Enter coefficient of x^3: ");
  scanf("%u", &c);
  printf("Enter coefficient of x^4: ");
  scanf("%u", &b);
  printf("Enter coefficient of x^5: ");
  scanf("%u", &a);
  printf("Polynomial: %u*x^5 + %u*x^4 + %u*x^3 + %u*x^2 + %u*x + %u\n",a,b,c,d,e,f);
  printf("Derivative: %u*x^4 + %u*x^3 + %u*x^2 + %u*x + %u\n",a*5,b*4,c*3,d*2,e);
  return 0;
}
