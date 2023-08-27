//Roll No.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int a=0,b=0,c=0,d=0,area=0,perim=0;
  float p=0,q=0;
  printf("Enter the coordinates of bottom-left corner of rectangle");
  scanf("%d%d",&a,&b);
  printf("\nEnter the coordinates of top-right corner of rectangle");
  scanf("%d%d",&c,&d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  p=(a+c)/2.0;
  q=(b+d)/2.0;
  printf("\nThe area of rectangle is %d and the perimeter is %d",area,perim);
  printf("\nThe coordinates of the point of intersection of diagonals is (%f,%f)",p,q);
}
