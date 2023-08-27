//Roll no: 23HS10010
//Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int integer;
  double number;
  double frac;
  printf("Enter the Floating point number:\n");
  scanf("%lf",&number);
  integer = number;
  frac = number - integer;
  printf("The integral part of the floating number is: %d\n",integer);
  printf("The fractional part of the floating number is:%f\n",frac);
  return 0;
}
