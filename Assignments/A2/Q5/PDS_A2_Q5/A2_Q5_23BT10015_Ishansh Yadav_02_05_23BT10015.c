#include<stdio.h>

int main()
{   int a, b, c, d;
    printf("The coordinates of the bottom-left corner are:");
    scanf("%d %d", &a, &b);
    printf("The coordinates of the top-right corner are:");
    scanf("%d %d", &c, &d);
    int area = (c-a)*(d-b);
    int perim = 2*((c-a)+(d-b));
    printf("The perimeter of the rectangle will be %d, while its area will be %d\n", perim, area);
    float p = (c+a)/2.0, q = (b+d)/2.0;
    printf("The coordinates of the point of intersection of the diagonals of the rectangle are (%f,%f)\n", p, q);
    return 0;
}
