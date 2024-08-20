#include<stdio.h>

int main()
{
  int a,b,c,d;
  
  printf("Enter four integers = ");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if (a==b || a==c || a==d || b==c || b==d || c==d)
  {
  printf("YES\n");
  }
  else
  {
  printf("NO\n");
  }
  return 0;
  }
  
