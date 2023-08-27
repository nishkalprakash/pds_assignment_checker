#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c,d,area,perim;
 
  printf("Enter the coordinates of bottom left (a,b) \n");
  scanf("%d%d", &a,&b);

  printf("Enter the coordinates of top right (c,d) \n");
  scanf("%d%d", &c,&d);

  area = (d-b)*(c-a);
  perim = 2*((d-b)+(c-a));

  printf("The area of the rectangle is %d \n", area);
  printf("The perimeter of rectangle is %d \n", perim);

}
  

