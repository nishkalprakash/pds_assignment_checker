#include<stdio.h>
int main()
{
  float a;
  int b;  
  printf(" enter the number ");
  scanf("%f",&a);
  b=a;
  printf(" the integral part of number is %d\n",b);
  printf(" the fractional part of number is %f\n", a-b);
  return 0;
}
    
