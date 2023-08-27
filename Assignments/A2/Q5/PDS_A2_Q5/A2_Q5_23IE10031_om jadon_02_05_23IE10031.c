#include <stdio.h>
// Roll no. 23IE10031
// Name - Om singh Jadon

int main()
{
  int a,b,c,d;
  printf("give (a,b) coordinates of bottom-left corner with space between the two: ");
  scanf("%d %d", &a, &b);
  printf("give (c,d) coordinates of top_right corner with space between the two: ");
  scanf("%d %d", &c, &d);
  int length = c-a;
  int breadth = d-b;
  int perim = 2*(length + breadth);
  int area = length*breadth;
  printf("The Perimeter of the Rectangle is %d\nThe Area of the Rectangle is %d\n", perim, area);
  float p = (a+c)/2.0;
  float q = (b+d)/2.0;
  printf("The coordinates of the point of intersection of the diagonals is (%f,%f)\n", p,q );
  
}
