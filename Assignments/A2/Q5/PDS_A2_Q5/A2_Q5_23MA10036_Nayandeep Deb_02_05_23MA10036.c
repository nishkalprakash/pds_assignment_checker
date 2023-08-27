//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main() {
  int a,b,c,d;
  printf("Give coordinates of the bottom-left point: ");
  scanf("%i %i", &a, &b);
  printf("Give coordinates of the top-right point: ");
  scanf("%i %i", &c, &d);
  int length = c - a;
  int breadth = d - b; //calculating dimensions
  int perim = 2*(length + breadth);
  int area = length * breadth;
  printf("The perimeter of the rectangle = %i\n",perim);
  printf("The area of the rectangle = %i\n", area);
  float p = (a+c)/2.0;
  float q = (b+d)/2.0; //intersections of diagonals is mean of coordinates
  printf("The coordinates of the intersection of diagonals = (%.1f, %.1f)\n",p, q);
  return 0;
}
