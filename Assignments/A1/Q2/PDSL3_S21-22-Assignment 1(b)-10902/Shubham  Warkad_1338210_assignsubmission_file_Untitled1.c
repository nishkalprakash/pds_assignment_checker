
#include <stdio.h>

int main()
{
  int f,c,s,t,r,n;
  printf("Enter a three digit number:");
  scanf("%d",&n);
  t=n/100;
  c=n%100;
  s=c/10;
  f=n%10;
  r=(f*100+s*10+t);
  printf("The reverse number is %d",r);
  return 0;
}
