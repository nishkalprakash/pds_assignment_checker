//Roll no.:23IE10011
//Name : Avik Ghosh
#include <stdio.h>

int main( )
{
  float num,f;
  //num variable is used to store Floating point number and i variable is used to store integral part and f variable is used to fractional part
  int i;
    printf("Enter a floating point number\n");
  scanf("%f",&num);
  i =(( int)num)/1;
  f = num- ((float)i);
  printf("Integral part=%d\n",i);
  printf("Fractional part=%f\n",f);
}
  
