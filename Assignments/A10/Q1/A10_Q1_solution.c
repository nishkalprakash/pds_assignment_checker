/*
Problem 1:
	Define a structure Point to store a 2D point. 
        Create a method read() to read the coordinate values of a point.
	Define another structure to store three 2D points of a triangle. 
        Create a method read_triangle() to read three points of a triangle. Also define a method area()  to calculate the area of a triangle.
	In your main(), write statements to create a triangle and print the coordinates of the triangle. In addition, check if the three points are lying on a straight line.

Test cases:							

#	INPUT (Points)	OUTPUT
1	(0, 0), (4, 0), (0, 3)	Triangle coordinates: (0, 0), (4, 0), (0, 3)
Area: 6.0
Collinearity: Not Collinear
2	(0, 0), (1, 1), (2, 2)	Triangle coordinates: (0, 0), (1, 1), (2, 2)
Area: 0.0
Collinearity: Collinear
3	(-3, -2), (1, 4), (4, -3)	Triangle coordinates: (-3, -2), (1, 4), (4, -3)
Area: 23
Collinearity: Not Collinear
4	(0, 0), (3, 3), (0, 0)	Triangle coordinates: (0, 0), (3, 3), (0, 0)
Area: 0.0
Collinearity: Collinear

*/

// Code Creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Code to compute the area of a triangle and check if the three points are lying on a straight line
#include <stdio.h>
#include <math.h>

// The structure Point to store a 2D point
struct Point {
    int x, y;
};

// The structure to store three 2D points of a triangle
struct Triangle {
    struct Point p1, p2, p3;
};

// Method to read the coordinate values of a point
void read_point(struct Point *p) {
    scanf("%d %d", &p->x, &p->y);
}

// Method to read three points of a triangle
void read_traingle(struct Triangle *t) {
    read_point(&t->p1);
    read_point(&t->p2);
    read_point(&t->p3);
}

// Method to calculate the area of a triangle
float area(struct Triangle t) {
    return abs((t.p1.x * (t.p2.y - t.p3.y) + t.p2.x * (t.p3.y - t.p1.y) + t.p3.x * (t.p1.y - t.p2.y)) / 2.0);
}

int main() {
    struct Triangle t;
    // Reading the coordinates of the triangle
    read_traingle(&t);
    // Printing the coordinates of the triangle
    printf("Triangle coordinates: (%d, %d), (%d, %d), (%d, %d)\n", t.p1.x, t.p1.y, t.p2.x, t.p2.y, t.p3.x, t.p3.y);
    // Printing the area of the triangle
    printf("Area: %.1f\n", area(t));
    // Checking if the three points are lying on a straight line
    if (area(t) == 0) 
        printf("Collinearity: Collinear\n");
    else 
        printf("Collinearity: Not Collinear\n");
    return 0;
}