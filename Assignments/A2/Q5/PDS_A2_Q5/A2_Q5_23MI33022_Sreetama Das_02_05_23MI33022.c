#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim,x,y;
  float p,q;
  printf("Enter the coordinates of the bottom left corner of the rectangle=");
  scanf("%d%d",&a, &b);
  printf("Enter the coordinates of the top right corner of the rectangle=");
  scanf("%d%d",&c, &d);
  x= c-a;
  y= d-b;
  area= x*y;
  perim=2*(x+y);
  printf("The area is %d and the perimeter is %d\n", area, perim );
  p=(float)((a+c)/2.0);
  q=(float)((b+d)/2.0);
  printf("The coordinates of the point of intersection of the two diagonals of the rectangle are= %f %f\n", p,q); 
  return 0;
}
