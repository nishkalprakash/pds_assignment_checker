#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, x3, y1, y2, y3, s1, s2, s3;
    printf("enter x1 and y1:");
    scanf("%d%d", &x1, &y1);
    printf("enter x2 and y2:");
    scanf("%d%d", &x2, &y2);
    printf("enter x3 and y3:");
    scanf("%d%d", &x3, &y3);
    s1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    s2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    s3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    if (s1 + s2 < s3 || s1 + s3 < s2 || s2 + s3 < s1)
    {
        printf("This is an invalid triangle");
        return 0;
    }
    if (s1 == s2 && s2 == s3 && s3 == s1)
    {
        printf("\nThis is a valid triangle");
        printf("\nTriangle is Equilateral");
    }
    else if (s1 == s2 || s2 == s3 || s3 == s1)
    {
        printf("\nThis is a valid triangle");
        printf("\nTriangle is isocleles");
    }
    else if (s1 * s1 == s2 * s2 + s3 * s3 || s2 * s2 == s1 * s1 + s3 * s3 || s3 * s3 == s2 * s2 + s1 * s1)
    {
        printf("\nThis is a valid triangle");
        printf("\nTriangle is right triangle");
    }
    else
    {
        printf("\nThis is a valid triangle");
        printf("\nTriangle is Scalene");
    }
}
