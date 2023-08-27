//kavya rai
//23CS10031
#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("enter the coordinates of the bottom-left corner of the rectangle :");
  scanf("%d%d", &a,&b);
  printf("\nenter the coordinates of the top-right corner of the rectangle :");
  scanf("%d%d",&c,&d);
  int area=(c-a)*(d-b);
  int perim=((c-a)+(d-b))*2;
  printf("\nThe area of the rectangle = %d\n The perimeter of the rectangle = %d",area,perim);
  float p=(a+c)/2.0;
  float q=(b+d)/2.0;
  printf("\nThe point of intersection of the two diagonals of the rectangle is : (%f,%f)",p,q);
  return 0;
}
