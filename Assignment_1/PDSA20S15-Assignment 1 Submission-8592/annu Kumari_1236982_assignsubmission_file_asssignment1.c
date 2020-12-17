#include <stdio.h>
int main()

{

  int a,b;
  scanf("%d%d", &a ,&b);
  int c,d;
  scanf("%d%d", &c ,&d);
  int e,f;
  e = a;
  f = d;
  int g,h;
  g=c;
  h=b;
  printf("the four coordinates of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,c,d,e,f,g,h);
  int p,q;
  scanf("%d%d", &p ,&q);
  if(p>a && p<c && q>b && q<d)
    printf("(%d,%d) lie in the rectangle\n",p,q);
  else printf("the point is not inside the rectangle\n");
}
