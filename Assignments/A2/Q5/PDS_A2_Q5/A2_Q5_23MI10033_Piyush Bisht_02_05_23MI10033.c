//Roll No.: 23MI10033
//Name: Piyush Bisht

#include <stdio.h>
int main()
{
  int a, b, c, d, area, perim;
  float p, q;
  printf("Enter the coordinates of the bottom left corner of the rectangle");
  scanf("%d %d", &a, &b);
  printf("\nEnter the coordinates of the top right corner of the rectangle");
  getchar();
  scanf("%d %d", &c, &d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  printf("\nArea of the rectangle = %d \nPerimeter of the rectangle = %d", area, perim);
  p=(c+a)/2.0;
  q=(d+b)/2.0;
  printf("\nThe coordinates of point of intersection of diagonals is %f,%f", p, q);
  return 0;
}
