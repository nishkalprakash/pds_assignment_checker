//Roll No.:<23GG10041>
//Name:<Samriddhi>
#include <stdio.h>
int main()
{
  int integer;
  double number, frac;
  printf("enter any number=\n");
  scanf("%lf",&number);
  integer = number;
  frac = number - integer;
  printf("integral part =%d\n",integer);
  printf("fractional part =%lf\n" ,frac);
  return 0;
    }
