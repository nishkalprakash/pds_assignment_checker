#include<stdio.h>
int main()
{
   int h, n, d;
   scanf("%d %d", &h, &n);
   d=(4*h*(1-(1/4)^n))/3;
   printf("%d\n",n);
   return 0;
}
