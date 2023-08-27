#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("enter 4 digits");
  scanf("%d%d",&a,&b);
  scanf("%d%d",&c,&d);
  area=(d-b)*(c-a);
  printf("area=%d\n",area);
  perim=2*((d-b)+(c-a));
  printf("perimeter=%d\n",perim);
  printf("the area of the reactangle is %d",area,"the perimeter of the reactangle is %d",perim);
  p=(a+c)/2.0;
  printf("the x coordinate of point of intersection of diagonals=%f\n",p);
  q=(b+d)/2.0;
  printf("the y coordinate of point of intersection of diagonals=%f\n",q);
}
  
  
