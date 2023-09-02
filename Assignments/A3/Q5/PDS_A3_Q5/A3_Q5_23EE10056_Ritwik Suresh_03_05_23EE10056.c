// Name : Ritwik Suresh
// Roll no. : 23EE10056
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f ;
  printf("Enter co-efficient of x^0:\n");
  scanf("%d",&f);
  printf("Enter co-efficient of x^1:\n");
  scanf("%d",&e);
  printf("Enter co-efficient of x^2:\n");
  scanf("%d",&d);
  printf("Enter co-efficient of x^3:\n");
  scanf("%d",&c);
  printf("Enter co-efficient of x^4:\n");
  scanf("%d",&b);
  printf("Enter co-efficient of x^5:\n");
  scanf("%d",&a);
  printf("Polynomial : %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x^1 + %d*x^0\n",a,b,c,d,e,f);
  printf("Derivative : %d*x^4 + %d*x^3 + %d*x^2 + %d*x^1 + %d\n",(5*a),(4*b),(3*c),(2*d), e);
  return 0;
}
