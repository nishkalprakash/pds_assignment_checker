//22EE10036//
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, x2, x3, y1, y2, y3, z1, z2, z3;
    printf("Write the coordinates of point A\n");
    scanf("%le %le %le", &x1, &x2, &x3);
    printf("Write the coordinates of point B\n");
    scanf("%le %le %le", &y1, &y2, &y3);
    printf("Write the coordinates of point C\n");
    scanf("%le %le %le", &z1, &z2, &z3);
    printf("The coordinates of A are (%f, %f, %f)\n", x1, x2, x3);
    printf("The coordinates of B are (%f, %f, %f)\n", y1, y2, y3);
    printf("The coordinates of C are (%f, %f, %f)\n", z1, z2, z3);

    float lengtha, lengthb, lengthc;
    lengtha = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
    lengthb = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)+(z3-z2)*(z3-z2));
    lengthb = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)+(z3-z1)*(z3-z1));

    printf("The distance between A and B is %le\n", lengtha);
    printf("The distance between B and C is %le\n", lengthb);
    printf("The distance between A and C is %le\n", lengthc);
    if (lengtha = lengthb + lengthc) {
        printf("A, B and C are collinear\n");
    }
    else printf("They are not collinear\n");

    if (x1 < x2) {
        if(x2 < x3)
            printf("A < B < C\n");
    else if (x1 > x3);
        printf("C < A < B\n");
    return 0;
}
