//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter the coordinates of bottom left corner of rectangle:");
  scanf("%d %d",&a,&b);
  printf("Enter the coordinates of the top right corner of the rectangle:");
  scanf("%d %d",&c,&d);
  int perim=2*((c-a)+(d-b));
  int area=(c-a)*(d-b);
  printf("The area of rectangle is %d and perimeter is %d \n", area,perim);
  
  float p=(float) (a+c)/2;
  float q=(float) (b+d)/2;
  printf("The coordinates of point of intersection of two diagonals is(%f,%f)",p,q);
  return 0;
}
