#include <stdio.h>
int main()
{
  float num,fr;
  printf("Enter a floating point number");
  scanf("%f", &num);
  fr = (float)num - (int)num;
  printf("\nIntegral part = %d\n",(int)num);
  printf("\nFractional part = %f\n", fr);
  return 0;
}
