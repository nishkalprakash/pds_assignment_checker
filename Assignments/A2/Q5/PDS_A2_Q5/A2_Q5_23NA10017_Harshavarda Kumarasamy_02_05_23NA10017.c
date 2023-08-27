//Roll No:<23NA10017>//
//Name:<Harshavarda Kumarasamy//
#include <stdio.h>

int main()
{
  int a, b, c, d;
  int area, perim;

  printf("Declare the x-coordinate and y-coordinate of the bottom left corner respectively:\n");
  scanf("%d%d", &a, &b);

  printf("Declare the x-coordinate and y-coordinate of the top right corner respectively:\n");
  scanf("%d%d", &c, &d);

  area=(d-b)*(c-a);
  perim= 2*(d-b) + 2*(c-a);

  printf("The area of the rectangle:%d\n", area);
  printf("The perimeter of the rectangle:%d\n", perim);

  return 0;
}
  

  
    
