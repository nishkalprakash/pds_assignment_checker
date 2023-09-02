//Name: Aryan Raina
//Roll No.: 23MA10016

#include <stdio.h>

int main() {
  int x, y;
  printf("Enter the coordinates of the point p: ");
  scanf("%d %d", &x, &y);

  if (x == 0 && y == 0) printf("The point p lies on both x-axis and y-axis\n");
  else if (x == 0) printf("The point p lies on the y-axis\n");
  else if (y == 0) printf("The point p lies on the x-axis\n");
  
  if (x > 0) {
    if (y > 0) printf("The point p is in quadrant 1\n");
    if (y < 0) printf("The point p is in quadrant 2\n");
  }
  if (x < 0) {
    if (y > 0) printf("The point p is in quadrant 4\n");
    if (y < 0) printf("The point p is in quadrant 3\n");
  }
  
  
  return 0;
}
