#include <stdio.h>
int  main()
{
  int a,b,c;
  float x;
  printf("enter the deposite amount");
  scanf("%d\n",&a);
  printf("time period in years");
  scanf("%d\n",&b);
  printf("rate interest");
  scanf("%d\n",&c);
  x = a+(a*b*c/100);
  printf("%f\n", x);
  return 0;
}