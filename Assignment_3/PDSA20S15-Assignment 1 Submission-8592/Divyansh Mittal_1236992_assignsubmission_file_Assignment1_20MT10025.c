#include<stdio.h>

int main()
{
    int a, b, c, d, p, q;
    printf("Please enter coordinates of bottom-left corner of rectangle:\n");
    scanf("%d%d", &a, &b);
    printf("\nPlease enter coordinates of top-right corner of rectangle:\n");
    scanf("%d%d", &c, &d);
    printf("\nThe four corners of the rectangle are: (%d, %d), (%d, %d), (%d, %d), (%d, %d)", a, b, a, d, c, d, c, b);
    printf("\n\nPlease enter coordinates of point  to be checked: \n");
    scanf("%d%d", &p, &q);
    printf("\n");
    if ((p > a) && (p < c))
        if((q > b) && (q < d))
            printf("Point (%d, %d) in inside the rectangle.", p, q);
        else if ((q == b) || (q == d))
            printf("Point (%d, %d) is on the rectangle.", p, q);
        else
            printf("Point (%d, %d) is outside the rectangle.", p, q);
    else if ((p == a) || (p == c))
        if((q >= b) && (q <= d))
            printf("Point (%d, %d) in on the rectangle.", p, q);
        else
            printf("Point (%d, %d) is outside the rectangle.", p, q);
    else
        printf("Point (%d, %d) is outside the rectangle.", p, q);
    printf("\n");
    return 0;
}
