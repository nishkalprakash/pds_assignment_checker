/*
    3.	A point in 3D space P(x,y,z) is defined as x,y and z coordinate values which are real numbers. Write a program to do the following:
    a)	Read any three points A(x1,y1,z1), B(x2,y2,,z2) and C (x3,y3,z3) from the keyboard. Print the points on the screen.

    b)	Check if the three points are collinear (i.e they lie on a straight line).

    c)	Two ordered triplets are called in collating sequence (also called a sort sequence), if they are ordered in increasing order according to the order of positions of the elements in them. For example, (b, a, d) < (d, a, d); (m, a, p) < (m, a, t); (a, b, c) < (a, b, d), and so on.

    Print the three points A, B and C in their collating sequence (i.e. if A<B<C etc.)
*/
// Code creator: Abhishek Topwal and Nishkal Prakash
#include <stdio.h>
#include <limits.h>
int main()
{
    double x1, y1, z1;
    double x2, y2, z2;
    double x3, y3, z3;

    printf("A(x1,y1,z1) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    printf("B(x2,y2,z2) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);
    printf("C(x3,y3,z3) : ");
    scanf("%lf %lf %lf", &x3, &y3, &z3);

    // print the given three points
    printf("A(x1,y1,z1) : (%.2lf,%.2lf,%.2lf)\n", x1, y1, z1);
    printf("B(x2,y2,z2) : (%.2lf,%.2lf,%.2lf)\n", x2, y2, z2);
    printf("C(x3,y3,z3) : (%.2lf,%.2lf,%.2lf)\n", x3, y3, z3);

    /*
    We can find the collinearity with three points in different methods such as:
    (i) Using slope formula (slope of AB = slope of AC)
    (ii) Using distance formula (AB AC BC AB+AC=BC)
    (iii) Using area of triangle formula (area of triangle ABC = 0)
    (iv) Using equation method (x1(y2-y3)+x2(y3-y1)+x3(y1-y2)=0)
    (v) Using cross product method (AB X AC = 0)
    */

   
    // if the given three points (A,B,C) are collinear
    // then cross product of vector AB and vector AC is zero

    double x1_x2 = x1 - x2;
    double y1_y2 = y1 - y2;
    double z1_z2 = z1 - z2;

    double x1_x3 = x1 - x3;
    double y1_y3 = y1 - y3;
    double z1_z3 = z1 - z3;

    double i = y1_y2 * z1_z3 - z1_z2 * y1_y3;
    double j = z1_z2 * x1_x3 - x1_x2 * z1_z3;
    double k = x1_x2 * y1_y3 - y1_y2 * x1_x3;

    if (i == 0 && j == 0 && k == 0)
        printf("\nThe given three points are collinear.\n\n");
    else
        printf("\nThe given three points are not collinear.\n\n");

    // print the points in collating sequence
    char r1 = 'A', r2 = 'B', r3 = 'C';
    double temp;
    // bubble sort by x axis
    if ((x1 > x2) || ((x1 == x2) && ((y1 > y2) || ((y1 == y2) && (z1 > z2)))))
    {
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y1 = y2;
        y2 = temp;
        temp = z1;
        z1 = z2;
        z2 = temp;
        temp = r1;
        r1 = r2;
        r2 = temp;
    }
    if ((x2 > x3) || ((x2 == x3) && ((y2 > y3) || ((y2 == y3) && (z2 > z3)))))
    {
        temp = x2;
        x2 = x3;
        x3 = temp;
        temp = y2;
        y2 = y3;
        y3 = temp;
        temp = z2;
        z2 = z3;
        z3 = temp;
        temp = r2;
        r2 = r3;
        r3 = temp;
    }
    if ((x1 > x2) || ((x1 == x2) && ((y1 > y2) || ((y1 == y2) && (z1 > z2)))))
    {
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y1 = y2;
        y2 = temp;
        temp = z1;
        z1 = z2;
        z2 = temp;
        temp = r1;
        r1 = r2;
        r2 = temp;
    }
    printf("The collating sequence of the points is : %c(%lf,%lf,%lf) < %c(%lf,%lf,%lf) < %c(%lf,%lf,%lf)",r1,x1,y1,z1,r2,x2,y2,z2,r3,x3,y3,z3);
}