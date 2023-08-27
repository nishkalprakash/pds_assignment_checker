//Roll no. : 23EE10036
//Name : Kushagra Poonia

#include <stdio.h>

int main(){
  int a=0;
  int b=0;
  int c=0;
  int d=0;

  printf("Enter the Coordinates of the bottom left corner of the rectangle (separated by a space): ");
  scanf("%d %d", &a, &b);

  printf("Enter the Coordinates of the top right corner of the rectangle (separated by a space): ");
  scanf("%d %d", &c, &d);

  int area = (c-a)*(d-b);
  int perim = 2*(c+d-a-b);

  printf("The area and the perimeter of the rectangle so formed are %d and %d, respectively.\n", area, perim);

  printf("The coordinates of the point of intersection of the diagonals of the given rectangle are (%f,%f).\n", ((c+a)/2.0), ((b+d)/2.0));
}

  
