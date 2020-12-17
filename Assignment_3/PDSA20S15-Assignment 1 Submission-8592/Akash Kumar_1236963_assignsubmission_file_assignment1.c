#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, x1, y1, x2, y2, p, q;
    printf("Enter the coordinate of bottom left corner of the rectangle\n");
    scanf("%d%d", &a, &b);
    printf("The bottom left corner of rectangle is (%d %d)\n", a, b);
    printf("Enter the coordinate of top right corner of the rectangle\n");
    scanf("%d%d", &c, &d);
    printf("The coordinate of top right corner of rectangle is (%d %d)\n", c, d);

      x1 = a;
      y1 = d;
      x2 = c;
      y2 = b;

      printf("The four corners of rectangle are (%d %d), (%d %d), (%d %d), (%d %d)\n", a, b, x1, y1, c, d, x2, y2);
      printf("Enter the coordinate of point you wish to check\n");

      scanf("%d%d", &p, &q);

      if(p >= c || p <= a && q >= d || q <=b)
      printf("The point lies outside the rectangle");
      else
        printf("The point lies inside the rectangle");

    }
