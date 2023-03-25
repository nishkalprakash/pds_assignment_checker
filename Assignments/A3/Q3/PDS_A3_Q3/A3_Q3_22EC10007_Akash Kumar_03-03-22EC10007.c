#include <stdio.h>

int main()
{
    float x1, x2, x3, y1, y2, y3, z1, z2, z3;

    printf("Enter the numbers x1, y1, z1, x2, y2, z2, x3, y3, z3\n");
    scanf("%f %f %f %f %f %f %f %f %f", &x1, &y1, &z1, &x2, &y2, &z2, &x3, &y3, &z3);

    printf("A(x1, y1, z1) : A(%f, %f, %f)\n", x1, y1, z1);
    printf("B(x2, y2, z2) : B(%f, %f, %f)\n", x2, y2, z2);
    printf("C(x3, y3, z3) : C(%f, %f, %f)\n", x3, y3, z3);

    float c1 = (x3-x2)/(x2-x1);
    float c2 = (y3-y2)/(y2-y1);
    float c3 = (z3-z2)/(z2-z1);

    if (c1 == c2 == c3)
    {
         printf("The given points are collinear.\n");
    }

    else
        printf("The given points are non-collinear.\n");

    return 0;
}
