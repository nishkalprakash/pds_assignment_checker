#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, p, q;
    printf("Enter coordinates of the bottom-left corner  ");
    scanf("%d%d", &a, &b);
    printf("\nEnter coordinates of top-right corner  ");
    scanf("%d%d", &c, &d);
    e = a;
    f = d;
    g = c;
    h = b;
    printf("\nThe coordinates of the rectangle are (%d,%d),(%d,%d),(%d,%d) and (%d,%d)", a, b, e, f, c, d, g, h);
    printf("\nEnter coordinates of the point to be checked  ");
    scanf("%d%d", &p, &q);
    if((p > a) && (p < c) && (q > b) && (q < d))
    {
        printf("\nThe point (%d,%d) is inside the rectangle", p, q);
    }
    else
    {
        printf("\nThe point (%d,%d) is not inside the rectangle", p, q);
    }
    return 0;
}
