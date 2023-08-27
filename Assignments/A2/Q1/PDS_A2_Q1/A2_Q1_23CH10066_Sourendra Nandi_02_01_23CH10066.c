//Roll no : 23CH10066
//Name : Sourendra Nandi
#include <stdio.h>
int main()
{
  float num,frac;
  int i;
  printf("Enter the float number:\n");
  scanf("%f",&num);
  i=(int)num;
  frac=num-i;
  printf("Integral part = %d\n",i);
  printf("Fractional part = %f\n",frac);
  return 0;
}
