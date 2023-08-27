#include<stdio.h>
int main()
{
  float a;
  int b;
  float c;
  printf("Enter the desired number \n");
  scanf("%f",&a);
  b=(int)a;
  c=a-(float)b;
  printf("The integral part of the entered number is i=%d\n",b);
  printf("And the fractional part of the entered number is f=%f\n",c);
  return 0;
}
