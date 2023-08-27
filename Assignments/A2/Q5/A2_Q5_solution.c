/*A rectangle with sides parallel to the X and Y-axis can be fully specified by specifying the (x,y) coordinates of its bottom-left corner and its top-right corner as shown below:
Write a program that will do the following (in the given order):
a. Declare to integer variables a, b, c, and d
b. Read the coordinates (a, b) of the bottom-left corner of the rectangle (read both a and b in a single scanf statement)
c. Read the coordinates (c, d) of the top-right corner of the rectangle (read both c and d in a single scanf statement)
d. Compute the area and perimeter of the rectangle. Store them in integer variables named area and perim respectively.
e. Display the values of area and perim with a suitable message (using a single printf statement)
f. Compute the coordinates (p,q) of the point of intersection of the two diagonals of the rectangle. The point of intersection (p,q) are floating point numbers.
g. Display the coordinates (p,q) with a suitable message (using a single printf statement)*/

// Roll No: 19CS91R05
// Name: Nishkal Prakash
#include <stdio.h>
int main()
{
    int a, b, c, d;
    int area, perim;
    float p, q;
    printf("Enter the coordinates (a,b) of the bottom-left corner of the rectangle: ");
    scanf("%d%d", &a, &b);
    printf("Enter the coordinates (c,d) of the top-right corner of the rectangle: ");
    scanf("%d%d", &c, &d);
    area = (c - a) * (d - b); // area of a rectangle = length * breadth
    perim = 2 * ((c - a) + (d - b)); // perimeter of a rectangle = 2 * (length + breadth)
    printf("The area of the rectangle is %d and the perimeter is %d\n", area, perim);
    p = (float)(a + c) / 2; // the x-coordinate of the point of intersection of the diagonals is the average of the x-coordinates of the two opposite corners
    q = (float)(b + d) / 2; // the y-coordinate of the point of intersection of the diagonals is the average of the y-coordinates of the two opposite corners
    printf("The coordinates of the point of intersection of the two diagonals of the rectangle is (%f,%f)\n", p, q);
    return 0;
}
/*
Enter the coordinates (a,b) of the bottom-left corner of the rectangle: 0 0
Enter the coordinates (c,d) of the top-right corner of the rectangle: 1 1
The area of the rectangle is 1 and the perimeter is 4
The coordinates of the point of intersection of the two diagonals of the rectangle is (0.500000,0.500000)
*/