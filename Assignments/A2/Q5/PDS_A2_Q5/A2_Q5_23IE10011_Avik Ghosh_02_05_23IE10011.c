//Roll no.: 23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( )
{ int a,b,c,d,area,perim;
  //area is used to find the area of the rectangle and perim is used to find the perimeter of the rectangle
  printf("Coordinates of bottom-left corner of the rectangle\n");
  scanf("%d %d",&a,&b);
  printf("Coordinates of top-right corner of the rectangle\n");
  scanf("%d %d",&c,&d);
  area= (c-a)*(d-b);
  perim= 2*((c-a)+(d-b));
  printf("Area = %d\n",area);
  printf("Perimeter = %d\n", perim);
  printf("Point of intersection of the two diagonals is (%f,%f)\n", ((float)(a+c))/2,((float)(b+d))/2);
}
  
  
  
