/*
4.	A rectangle with sides parallel to the X and Y-axes can be fully specified by specifying the (x,y) coordinates of the bottom-left corner and the top-right corner as shown below:

Your program should do the following:
I.	Read four integer values representing  the coordinates  (a, b) and (c, d) --- the bottom-left and top-right corners of the rectangle. First, check if the rectangle is well-formed, that is, if (c,d) really lies to the right of and above of (a,b) or not. If not, display “Ill formed rectangle”  and exit the program.
II.	Read a pair of integers x and y representing a point p=(x,y). Check if the point p lies inside the rectangle, outside the rectangle, or only on one of the sides of the rectangle (left, right, top, or bottom side), or on two of the sides (that is, on any corner of the rectangle). Display an appropriate message.
Example: If (a=0, b=0)  (c=100,d=100), then if (p =50,100), your display should be  “p = (50,100) lies on the top side of the rectangle.  If p =(x=100, and y=100), then your display should be “p =(100,100) lies on the top right corner of the rectangle. If p = (x=210,y=50), you should display “p = (210,50) lies outside the rectangle” 
Note: a,b,c,d,x,y are all integers (i.e., positive, zero, or negative)
*/

// Name: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>
int main()
{
    // Variables to store the coordinates
    int a, b, c, d, x, y;

    // Input from user
    printf("Enter the coordinates of the bottom-left corner: ");
    scanf("%d %d", &a, &b);
    printf("Enter the coordinates of the top-right corner: ");
    scanf("%d %d", &c, &d);
    // Check if rectangle is well-formed
    if(c <= a || d <= b){
        printf("Ill formed rectangle.\n");
        return 0;
    }
    printf("Enter the coordinates of the point: ");
    scanf("%d %d", &x, &y);
    
    // Check if point lies on left side
    if(x == a && y >= b && y <= d)
        printf("Point lies on left side of the rectangle.\n");
    // Check if point lies on right side
    else if(x == c && y >= b && y <= d)
        printf("Point lies on right side of the rectangle.\n");
    // Check if point lies on bottom side
    else if(y == b && x >= a && x <= c)
        printf("Point lies on bottom side of the rectangle.\n");
    // Check if point lies on top side
    else if(y == d && x >= a && x <= c)
        printf("Point lies on top side of the rectangle.\n");
    // Check if point lies on top-left corner
    else if(x == a && y == d)
        printf("Point lies on top-left corner of the rectangle.\n");
    // Check if point lies on top-right corner
    else if(x == c && y == d)
        printf("Point lies on top-right corner of the rectangle.\n");
    // Check if point lies on bottom-left corner
    else if(x == a && y == b)
        printf("Point lies on bottom-left corner of the rectangle.\n");
    // Check if point lies on bottom-right corner
    else if(x == c && y == b)
        printf("Point lies on bottom-right corner of the rectangle.\n");
    // Check if point lies inside the rectangle
    else if(x > a && x < c && y > b && y < d)
        printf("Point lies inside the rectangle.\n");
    // Check if point lies outside the rectangle
    else
        printf("Point lies outside the rectangle.\n");
    return 0;
}
/*Output:
5 5 1 1
Ill formed rectangle.

1 1 5 5 1 1
Point lies on left side of the rectangle.

1 1 5 5 1 5
Point lies on left side of the rectangle.

1 1 5 5 5 1
Point lies on right side of the rectangle.

1 1 5 5 5 5
Point lies on right side of the rectangle.

1 1 5 5 1 3
Point lies on left side of the rectangle.

1 1 5 5 5 3
Point lies on right side of the rectangle.

1 1 5 5 3 5
Point lies on top side of the rectangle.

1 1 5 5 3 1
Point lies on bottom side of the rectangle.

1 1 5 5 3 3
Point lies inside the rectangle.

1 1 5 5 6 3
Point lies outside the rectangle.
*/
    

