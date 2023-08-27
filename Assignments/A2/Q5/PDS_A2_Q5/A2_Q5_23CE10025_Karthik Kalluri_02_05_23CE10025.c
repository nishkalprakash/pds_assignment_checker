#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("Enter the x and y coordinates of bottom left corner of the rectangle\n");
  scanf("%d%d",&a,&b);
  printf("Enter the x and y coordinates of top right corner of the rectangle\n");
  scanf("%d%d",&c,&d);
  area=((c-a)*(d-b));
  perim=2*((c-a)+(d-b));
  printf("The values of area and perimeter are %d,%d\n",area,perim);
  p=(float)(a+c)/2;
  q=(float)(b+d)/2;
  printf("The point of intersection of diagonals is (p,q) : (%f,%f)",p,q);

  
  return 0;
}
