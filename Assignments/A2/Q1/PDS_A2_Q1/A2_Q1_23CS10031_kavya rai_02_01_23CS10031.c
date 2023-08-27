#include <stdio.h>
int main()
{
  float a,b;
  int c;
  printf("enter a floating no. : ");
  scanf("%f",&a);
   c=a;
  b=a-c;
  printf("\nIntegral part = %d", c);
  printf("\nFractional part = %f/\n", b);
  return 0;
}
  
