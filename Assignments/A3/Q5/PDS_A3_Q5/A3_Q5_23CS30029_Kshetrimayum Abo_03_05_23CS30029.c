//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
int main()
{
  int a,b,c,d,e,f;
  //Inputting the coefficients of the polynomial
  printf("Enter coeffcient of x^0 : ");
  scanf("%d",&f);
  printf("Enter coeffcient of x^1 : ");
  scanf("%d",&e); 
  printf("Enter coeffcient of x^2 : ");
  scanf("%d",&d);  
  printf("Enter coeffcient of x^3 : ");
  scanf("%d",&c);
  printf("Enter coeffcient of x^4 : ");
  scanf("%d",&b);
  printf("Enter coeffcient of x^5 : ");
  scanf("%d",&a);
  //Printing the polynomial and it's derivative
  printf("Polynomial : %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n",a,b,c,d,e,f);
  printf("Derivative : %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n",a*5,b*4,c*3,d*2,e);
  
  return 0;
}
