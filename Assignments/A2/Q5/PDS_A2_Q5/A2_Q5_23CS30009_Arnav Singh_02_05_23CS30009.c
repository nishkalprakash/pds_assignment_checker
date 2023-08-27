//Roll No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int a,b,c,d;
  int area, perim;
  printf("Enter the coordinates of the bottom-left corner point (space separated): ");
  scanf("%d%d", &a, &b);
  printf("Enter the coordinates of the top-right corner point (space separated): ");
  scanf("%d%d", &c, &d);
  area=(c-a)*(d-b);   //Product of 2 sides
  perim=2*((c-a)+(d-b));   //2 times the sum of sides
  printf("The area and perimeter of the rectangle are %d square units and %d units respectively.\n", area, perim);
  printf("The point of intersection of the 2 diagonals of the rectange is (%f,%f).\n", (a+c)/2.0, (b+d)/2.0);
  //The point of intersection of diagonals is mid point of 2 diagonally opposite points.
  return 0;
}
