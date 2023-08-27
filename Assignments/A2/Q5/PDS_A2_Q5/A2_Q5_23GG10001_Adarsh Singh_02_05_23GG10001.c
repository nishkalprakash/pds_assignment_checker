#include<stdio.h>
int main()
{
  int a,b,c,d;
  int area;
  int perim;
  float p,q;
  printf("Enter the coordinates (a,b) \n");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates (c,d) \n");
  scanf("%d%d",&c,&d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  printf("The area of the rectangle is area=%d and its perimeter=%d",area,perim);
  p=((float)(c-a))/2;
  q=((float)(d-b))/2;
  printf("The coordinates of the point of intersection of the two diagonals of the rectangle is (%f,%f)",p,q);
  return 0;
}  
