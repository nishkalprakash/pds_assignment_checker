# include <stdio.h>
int main()
{
  int a;
  float b,c;
  printf("Enter a floating number\n");
  scanf("%f",&b);
  a=b;
  c=(b-a);
  printf("The integral part is:%d\n",a);
  printf("The fractional part is:%3f\n",c);
  return 0;
}
