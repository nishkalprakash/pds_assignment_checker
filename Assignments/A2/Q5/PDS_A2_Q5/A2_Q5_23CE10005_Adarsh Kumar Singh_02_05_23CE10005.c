// Roll No. 23CE10005
// Name - Adarsh Kumar Singh

#include<stdio.h>
int main()
{
  int a, b, c, d, area, perim;
  float p, q;
  printf("\nEnter the co-ordinates of the bottom-left corner of a rectangle: ");
  scanf("%d%d", &a, &b);
  printf("Enter the co-ordinates of the top-right corner of a rectangle: ");
  scanf("%d%d", &c, &d);

  area = (c-a)*(d-b);
  perim = 2*((c-a)+(d-b));
  p = (a+c)/2.0;
  q = (b+d)/2.0;

  printf("\nArea of the rectangle is %d sq. units. \nPerimeter of the rectangle is %d units. \nThe co-ordinates of the point where the diagonals meet is (%.2f,%.2f).", area, perim, p, q);
  printf("\n\nThankyou\n\n");
  return 0;
}
