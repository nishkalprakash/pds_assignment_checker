#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f, g, h, p, q;
    printf("Enter the coordinates (a,b) of bottom-left corner of the rectangle\n");
    scanf("%d%d", &a, &b);
    printf("Enter the coordinates (c,d) of top-right corner of the rectangle\n");
    scanf("%d%d", &c, &d);
    e = a;
    f = d;
    g = c;
    h = b;
    printf("The four corners of the rectangle are (%d, %d),(%d, %d),(%d, %d),(%d, %d)\n", a, b, e, f, c, d, g, h);
    printf("Enter the coordinates (p,q) of the point P\n");
    scanf("%d%d", &p, &q);
    if (p > a && p < c)
    if (q > b && q < d)
        printf("The point (%d, %d) is inside the rectangle\n",p ,q);

    else
        printf("The point (%d, %d) is not inside the rectangle\n",p ,q);


    }
