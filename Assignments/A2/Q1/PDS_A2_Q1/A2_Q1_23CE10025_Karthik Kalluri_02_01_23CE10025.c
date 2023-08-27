#include <stdio.h>
int main()
{
  float x,y,a;
  int z;
  printf("Enter the value of number : ");
  scanf("%f",&x);
  y=x;
  z=(int)y;
  printf("Integral part=%d",z);
  a=x-z;
  printf("Fractional part=%f",a);
  return 0;
}
