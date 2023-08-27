#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  
  printf("ENTER (a,b) [coordinates of bottom left corner]:");
  scanf("%d%d", &a, &b);

  printf("ENTER (c,d) [coordinates of top right corner]:");
  scanf("%d%d", &c, &d);

  area = ((c-a)*(d-b));
  printf("AREA = %d\n", area);

  perim = (2*(c-a))+(2*(d-b));
  printf("PERIMETER = %d\n", perim);

  p = (a+c)/2;
  q = (b+d)/2;
  printf("INTERSECTION OF DIAGONALS: (%f,%f)",p,q);

  return 0;
}
