#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter a,b,c values\n");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
{
  printf("repeated roots");
  }
  else
  if (d>0)
  {
  printf("both roots real");
  }
  else
  {
  printf("both roots imaginary");
  }

   return 0;
}
