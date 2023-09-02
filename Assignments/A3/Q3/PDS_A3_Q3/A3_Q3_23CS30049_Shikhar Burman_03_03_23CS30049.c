//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int x, y; 

    // Input pair of integers from user
    printf("Enter integer coordinates of a point p(keep a space between them): ");
    scanf("%d %d", &x, &y);

    // Conditional statements to find the position of point p in the coordinate plane
    if (x == 0 && y != 0)
        printf("Point p lies on the Y axis only\n");
    if (y == 0 && x != 0)
        printf("Point p lies on the X axis only\n");
    if (x == 0 && y == 0)
        printf("Point p lies on both X axis and Y axis\n");
    if (x > 0 && y > 0)
        printf("Point p lies in the 1st quadrant\n");
    if (x > 0 && y < 0)
        printf("Point p lies in the 2nd quadrant\n");
    if (x < 0 && y < 0)
        printf("Point p lies in the 3rd quadrant\n");
    if (x < 0 && y > 0)
        printf("Point p lies in the 4th quadrant\n");
}