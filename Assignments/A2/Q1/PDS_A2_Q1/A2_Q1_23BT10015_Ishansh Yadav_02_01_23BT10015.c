#include<stdio.h>

int main()
{float number;
  printf("Enter a number:");
  scanf("%f", &number);
  int integral_part=number;
  float fractional_part= number - integral_part;
  printf("Integral part=%d\n", integral_part);
  printf("Fractional part=%f", fractional_part);
  return 0;
}
  
