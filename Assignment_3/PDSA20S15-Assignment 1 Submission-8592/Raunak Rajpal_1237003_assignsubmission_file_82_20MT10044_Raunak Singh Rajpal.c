/*Program to check whether a given random point lies inside the rectangle, formed via asking two diagonal points. */

#include<stdio.h>

int main()
{
    int a,b,c,d,p,q;

    printf("Enter coordinate for bottom-left point A(a,b):\n");
    scanf("%d%d", &a, &b);
    printf("Enter coordinate for top-right point C(c,d):\n");
    scanf("%d%d", &c, &d);

    printf("The corners of the rectangle are : A(%d,%d), B(%d,%d), C(%d,%d), D(%d,%d)\n\n", a,b, a,d, c,d, c,b);

    printf("Enter a random point (p,q):\n");
    scanf("%d%d", &p, &q);

    if(a<p && p<c && b<q && q<d)
      {
        printf("Point P (%d,%d) lies inside the rectangle", p, q);
      }
    else
      {
        printf("Point P (%d,%d) does not lie inside the rectangle", p, q);
      }

    return 0;
}
