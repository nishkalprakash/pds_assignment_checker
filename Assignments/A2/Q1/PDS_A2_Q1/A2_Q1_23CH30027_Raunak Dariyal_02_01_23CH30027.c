#include <stdio.h>
int main()
{
  float num,fractional_part;
  int  integer_part;
  printf ("enter the number");
  scanf ("%f",&num);
  printf("Integral part %d\n",(int)num);
  printf("Fractional part %f", num - (int)num);
  return 0;
}
