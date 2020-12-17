#include<stdio.h>

int main()
{
    int a, b, x2,y2, c, d, x4, y4, p, q;

    printf("Enter the co-ordinates of the bottom left corner:\n");
    scanf("%d%d", &a, &b);
    printf("Enter the co-ordinates of the top right corner: \n");
    scanf("%d%d", &c, &d);
    x2 = a;
    y2 = d;
    x4 = c;
    y4 = b;
    printf("The four corners of the rectangle are: (%d,%d), (%d,%d), (%d,%d) and (%d,%d)\n", a, b, x2, y2, c, d, x4, y4);
    printf("Enter the co-ordinates of the point to be checked:\n");
    scanf("%d%d", &p, &q);
    if( p>a && p<c && q>b && q<d)
    {
        printf("The point (%d,%d) lies inside the rectangle.", p, q);
    }
    else
    {
        printf("The point (%d,%d) lies outside the rectangle.", p, q);
    }
    return 0;
}
