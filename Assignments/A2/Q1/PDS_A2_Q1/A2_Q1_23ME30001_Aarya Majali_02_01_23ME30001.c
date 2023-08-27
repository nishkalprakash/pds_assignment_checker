#include <stdio.h>
int main()
{
  float x;
  printf("enter a floating point number");
  scanf("%f",&x);
  int a;
  a=x;
  printf("integral part=%d\n",a);
  printf("fractonal part=%0.3f",x-a);
      }
    
