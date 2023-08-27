#include<stdio.h>
int main ()
{
  float a,c;
  printf("enter the number\n");
  scanf("%f",&a);
  int b;
  b=a;
  c=a-b;
  printf("int part=%d and frac part=%f",b,c);
  return 0 ;
  
}
