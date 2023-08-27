#include <stdio.h>
int main()
{
  int a,b,c,d,e,f;
  scanf("%d%d",&a,&b);
  printf("Bottom-left corner coordinates:%d%d\n",a,b);
  scanf("%d%d",&c,&d);
  printf("Top-right corner coordinates:%d%d\n",c,d);
  e=(c-a);
  f=(d-b);
  int area,perim;
  area=e*f;
  perim=2*(e+f);
  printf("Area and perim:%d%d\n",area,perim);
  float p,q;
  p=(c-a)/2.0;
  q=(d-b)/2.0;
  printf("The point of intersection of diagonals:%f%f\n",p,q);
  return 0;
}
