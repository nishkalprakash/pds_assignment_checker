#include <stdio.h>
int main()
{
  float x;
  printf("Enter a floating point number=");
  scanf("%f", &x);
  int y=x/1;
  printf("The integral part is= %d\n", y);
  double z;
  z=x-y;
  printf("The fractional part is= %lf\n", z);
  return 0;
}
