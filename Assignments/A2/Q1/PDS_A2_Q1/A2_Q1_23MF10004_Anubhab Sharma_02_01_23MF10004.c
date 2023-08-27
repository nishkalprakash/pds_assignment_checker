#include <stdio.h>
#include <math.h>

int main()
{
  float a;
  printf("Enter value of a: ");
  scanf("%f",&a);
  int q;
  q = (int)a;
  printf("The integral part of a is %d \n", q);
  printf("The floating point part of a is %f \n", a-q);

    }
    
