//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
int main()
{
  float a,fraction;
  int i;
  printf("Enter a  number:");
  scanf("%f",&a);
  i=a;
  fraction=a-i;
  printf("Integral part=%d \n",i);
  printf("Fractional part=%f \n",fraction);
  return 0;
}