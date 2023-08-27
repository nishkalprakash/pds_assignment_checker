#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  int b;
  int c;
  int d;
  printf("Enter the x,y coordinates of bottom left-corner of the rectangle(a,b) \n");
  scanf("%d%d",&a,&b);
  printf("Enter the x,y coordinates of the top right corner of the rectangle(c,d) \n");
  scanf("%d%d",&c,&d);
  int area;
  area = (d-b)*(c-a);
  int perim;
  perim = 2*((d-b)+(c-a));
  printf("The area of the rectangle is %d \n" , area);
  printf("The perimeter of the rectangle is %d \n" , perim);
}
