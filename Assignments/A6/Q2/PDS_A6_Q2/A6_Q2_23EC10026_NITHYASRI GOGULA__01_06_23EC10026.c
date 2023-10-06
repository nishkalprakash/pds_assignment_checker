#include<stdio.h>
void swapv (int x,int y);
int main ()
{
  int a=20,b=30;
    swapv(a,b);
  printf("a=%d b=%d",a,b);
  return 0;
}
void swapv (int x, int y)
{
  int t;
  t=x;
  x=y;
  y=t;
  printf("x=%d y=%d\n",x,y);
}