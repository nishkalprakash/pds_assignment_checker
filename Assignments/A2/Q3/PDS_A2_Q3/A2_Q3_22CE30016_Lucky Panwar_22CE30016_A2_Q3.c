#include<stdio.h>
#include<math.h>

int main()
{
  int a, b, c;
  float f1, f2;
  scanf("%d %d %d", &a, &b, &c);
  f1 = (-b + sqrt(b*b - 4*a*c))/2*a;
  f2 = (-b - sqrt(b*b - 4*a*c))/2*a;
  printf("%f %f", f1, f2);
  return 0;
}
