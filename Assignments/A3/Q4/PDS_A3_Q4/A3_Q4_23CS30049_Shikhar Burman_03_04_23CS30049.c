//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int a, b, c, d;

    // Input coordinates from user
    printf("Enter coordinates of bottom-left corner of rectangle (keep a space between them): ");
    scanf("%d %d", &a, &b);
    printf("Enter coordinates of top-right corner of rectangle (keep a space between them): ");
    scanf("%d %d", &c, &d);

    // First checking if the rectangle is well formed
    if (c > a && d > b)
    {
        int x, y;

        // Input coordinates of point p from the user
        printf("Enter coordinates of point p(keep a space between them): ");
        scanf("%d %d", &x, &y);

        // Conditional statements to find position of point p wrt to rectangle
        if (x == a && y == b)
            printf("p = (%d,%d) lies on the bottom-left corner of the rectangle\n", x, y);
        else if (x == a && y == d)
            printf("p = (%d,%d) lies on the top-left corner of the rectangle\n", x, y);
        else if (x == c && y == d)
            printf("p = (%d,%d) lies on the top-right corner of the rectangle\n", x, y);
        else if (x == c && y == b)
            printf("p = (%d,%d) lies on the bottom-right corner of the rectangle\n", x, y);
        else if (x == a && y > b && y < d)
            printf("p = (%d,%d) lies on the left side of the rectangle\n", x, y);
        else if (x == c && y > b && y < d)
            printf("p = (%d,%d) lies on the right side of the rectangle\n", x, y);
        else if (y == b && x > a && x < c)
            printf("p = (%d,%d) lies on the bottom side of the rectangle\n", x, y);
        else if (y == d && x > a && x < c)
            printf("p = (%d,%d) lies on the top side of the rectangle\n", x, y);
        else if (x > a && x < c && y > b && y < d)
            printf("p = (%d,%d) lies inside the rectangle\n", x, y);
        else   
            printf("p = (%d,%d) lies outside the rectangle\n", x, y);
    }
    else
        printf("Ill formed rectangle\n");

}