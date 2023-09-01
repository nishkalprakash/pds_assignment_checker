#include<stdio.h>
int main()
{  float a, b;
  int c;
  printf("enter a number ");
  scanf("%f\n",&a);
  c = a;
  b = a-c;
  printf("integral part:%d\n",c);
  
  printf(" Fractional:%f\n", b);
  
    return 0;}
