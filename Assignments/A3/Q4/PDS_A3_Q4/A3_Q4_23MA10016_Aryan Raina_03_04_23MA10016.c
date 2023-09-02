//Name: Aryan Raina
//Roll No.: 23MA10016

#include <stdio.h>

int main() {
  int a, b, c, d;
  printf("Enter the coordinates of bottom-left corner: ");
  scanf("%d %d", &a, &b);
  printf("Enter the coordinates of top-right corner: ");
  scanf("%d %d", &c, &d);
  
  if (a >= c || b >= d) {
    printf("Ill formed rectangle\n");
    return 0;
  }

  int x, y;
  printf("Enter the coordinates of point p: ");
  scanf("%d %d", &x, &y);

  if (x < a || x > c || y < b || y > d) {
    printf("p = (%d, %d) lies outside the rectangle\n", x, y);
  } else {
    if (x == a && y == b) printf("p = (%d, %d) lies on the bottom-left corner of the rectangle\n", x, y);
    else if (x == a && y == d) printf("p = (%d, %d) lies on the top-left corner of the rectangle\n", x, y);
    else if (x == c && y == b) printf("p = (%d, %d) lies on the bottom-right corner of the rectangle\n", x, y);
    else if (x == c && y == d) printf("p = (%d, %d) lies on the top-right corner of the rectangle\n", x, y);
    else if (x == a) printf("p = (%d, %d) lies on the left side of the rectangle\n", x, y);
    else if (x == c) printf("p = (%d, %d) lies on the right side of the rectangle\n", x, y);
    else if (y == b) printf("p = (%d, %d) lies on the bottom side of the rectangle\n", x, y);
    else if (y == d) printf("p = (%d, %d) lies on the top side of the rectangle\n", x, y);
    else printf("p = (%d, %d) lies inside the rectangle\n", x, y);
  }
  
  return 0;
}
