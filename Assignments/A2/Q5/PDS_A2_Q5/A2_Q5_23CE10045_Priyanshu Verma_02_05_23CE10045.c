//Roll No.:23CE10045
//Name:PRIYANSHU VERMA


#include <stdio.h>

int main()
{

  int a;
  int b;
  int c;
  int d;
  
  printf("Enter coordinates of bottom left point: ");
  scanf ("%d %d", &a , &b);
  printf("Enter coordinates of top right point: ");
  scanf ("%d %d", &c , &d);
  int area =  (c-a)*(d-b);
  int perim =  ((c-a)+(d-b))*2;
  printf("Area of the rectangle is: %d and Perimeter of the rectangle is: %d", area, perim);

  float x;
  float y;
  printf("\nIntersection point of the diagonals is %f %f", x = a + (c-a)/2, y = b + (d-b)/2);
  
 
  return 0;
}
