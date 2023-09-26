/*

3.	Read a pair of integers representing the x and y coordinates of a point p and display a message telling if the point p lies either on the x-axis or the y-axis (or both). If it neither lies on x axis nor on y axis, then display a message telling in which quadrant it lies (the quadrants are numbered as shown below).
*/

// Name: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>

int main()
{
    // Variables to store the coordinates
    int x, y;

    // Input from user
    printf("Enter the coordinates of the point: ");
    scanf("%d %d", &x, &y);

    // Check if point lies on both axes
    if(x == 0 && y == 0)
        printf("Point lies on both axes.\n");
    // Check if point lies on x-axis
    else if(x == 0)
        printf("Point lies on x-axis.\n");
    // Check if point lies on y-axis
    else if(y == 0)
        printf("Point lies on y-axis.\n");
    // Check if point lies in 1st quadrant
    else if(x > 0 && y > 0)
        printf("Point lies in 1st quadrant.\n");
    // Check if point lies in 2nd quadrant
    else if(x > 0 && y < 0)
        printf("Point lies in 2nd quadrant.\n");
    // Check if point lies in 3rd quadrant
    else if(x < 0 && y < 0)
        printf("Point lies in 3rd quadrant.\n");
    // Check if point lies in 4th quadrant
    else if(x < 0 && y > 0)
        printf("Point lies in 4th quadrant.\n");
    return 0;
}
/*
Output:
Enter the coordinates of the point: 0 0
Point lies on both axes.
Enter the coordinates of the point: 10 0
Point lies on x-axis.
Enter the coordinates of the point: 0 10
Point lies on y-axis.
Enter the coordinates of the point: 1 5
Point lies in 1st quadrant.
Enter the coordinates of the point: 1 -5
Point lies in 2nd quadrant.
Enter the coordinates of the point: -1 -5
Point lies in 3rd quadrant.
Enter the coordinates of the point: -1 5
Point lies in 4th quadrant.
*/
