#include <stdio.h>
int main()
{
  float a;
  scanf("%f",&a);
  int b=a/1;
  printf("Integral part is= %d\n",b);
  double c;
  c=a-b;
  printf("Fractional part is= %lf\n",c);
  return 0;
}
