#include <stdio.h>
#include <math.h>

int main()
{
   int a, b, c, d;
   printf("enter the coordinate of point A\n");
   scanf("%d%d", &a, &b);
   printf("enter the coordinates of point B\n");
   scanf("%d%d", &c, &d);
   printf("the coordinates of the rectangle are (%d,%d), (%d,%d), (%d,%d), (%d,%d)\n", a, b, a, d, c, d, c, b);

   int x, y;
   printf("enter the coordinates of the point:");
   scanf("%d%d", &x, &y);
   {
       if(x>a && x<c && y>b && y<d)printf("the point (%d,%d) is inside rectangle\n", x, y);
       else printf("the point (%d,%d) is outside the rectangle\n", x, y);
   }
}
