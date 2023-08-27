#include<stdio.h>
void main()
{
  float a,fpart;
  int ipart;
  printf("enter the floating number=");
  scanf("%f",&a);
  ipart=(int)a;
  fpart=a-ipart;
  printf("integral part=%d",ipart);
  printf("Fractional part=%f",fpart);
}
