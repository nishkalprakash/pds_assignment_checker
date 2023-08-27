#include<stdio.h>
int main()
{ float x,z;
  int y;
  printf("Enter your number:\n");
  scanf("%f",&x);
  y = x;
  printf("Integral part is = %d\n",y);
  z=x-y;
  printf("Fractional part is = %f",z);
  return 0;
}