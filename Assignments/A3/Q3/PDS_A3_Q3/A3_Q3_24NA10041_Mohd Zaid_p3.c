#include<stdio.h>
int main()
{
      int a,b,c,d;
      scanf("%d%d%d%d",&a,&b,&c,&d);
      if(a==b && b!=c && b!=d && c!=d && a!=c && a!=d)
      printf("yes");
      else if (a!=b && b==c && b!=d && c!=d && a!=c && a!=d)
      printf("yes");
      else if (a!=b && b!=c && b==d && c!=d && a!=c && a!=d)
      printf("yes");
      else  if (a!=b && b!=c && b!=d && c==d && a!=c && a!=d)
      printf("yes");
      else  if (a!=b && b!=c && b!=d && c!=d && a==c && a!=d)
      printf("yes");
      else  if (a!=b && b!=c && b!=d && c!=d && a!=c && a==d)
      printf("yes");
      else
      printf("No");
      return 0;
}
