#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("enter the coordinates of lower part:\n");
  scanf("%d%d",&a,&b);
  printf("enter the coordinates of upper part:\n");
  scanf("%d%d",&c,&d);
  area=(c-a)*(d-b);
  printf("the area is:%d\n",area);
  perim=2*((c-a)+(d-b));
  printf("the perimeter is:%d\n",perim);
  p=(c+a)/2;
  q=(b+d)/2;
  printf("the point of intersection is:(%f,%f)\n",p,q);
  return 0;
}
