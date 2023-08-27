//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  int a, b, c, d;
  printf("Enter the coordinates of bottom-left corner: ");
  scanf("%d %d", &a, &b);
  printf("Enter the coordinates of top-right corner: ");
  scanf("%d %d", &c, &d);

  int area = (c-a) * (d-b);
  int perim = 2 * ((c-a) + (d-b));

  printf("The area of the rectangle is %d and the perimeter is %d\n", area, perim);

  // pt of intersection of diagonals is midpt of diagonals in rectangle
  float p = (a+c)/2.0;
  float q = (b+d)/2.0;

  printf("The coordinates of the point of intersection of diagonals (%.1f, %.1f)\n", p, q);

  return 0;
}
