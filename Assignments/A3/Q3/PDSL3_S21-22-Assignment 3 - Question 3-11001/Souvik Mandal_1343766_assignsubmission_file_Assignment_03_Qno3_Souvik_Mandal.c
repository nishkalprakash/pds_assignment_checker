/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/




#include <stdio.h>
#include <math.h>

//Void function created
void funct(int a1, int b1, int c1, int a2, int b2, int c2, int a3, int b3, int c3)

{

    float x1, y1, x2, y2, x3, y3;

    float line1, line2, line3;

    float area;

    float s;

    // Finding the points of interactions

    x1 = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);

    y1 = (a2 * c1 - a1 * c2) / (a1 * b2 - a2 * b1);

    x2 = (b2 * c3 - b3 * c2) / (a2 * b3 - a3 * b2);

    y2 = (a3 * c2 - a2 * c3) / (a2 * b3 - a3 * b2);

    x3 = (b3 * c1 - b1 * c3) / (a3 * b1 - a1 * b3);

    y3 = (a1 * c3 - a3 * c1) / (a3 * b1 - a1 * b3);

    printf("Line of intersection: %f , %f\n", x1,y1);

    printf("Line of intersection: %f , %f\n", x2,y2);

    printf("Line of intersection: %f , %f\n", x3,y3);

    // Length of the sides --->

    line1 = sqrt(pow((y2 - y1), 2) + pow((x2 - x1), 2));

    line2 = sqrt(pow((y2 - y3), 2) + pow((x2 - x3), 2));

    line3 = sqrt(pow((y3 - y1), 2) + pow((x3 - x1), 2));

    printf("Sidelength :  %f %f %f \n", line1,line2,line3);

    s = (line1 + line2 + line3) / 2;

    area = sqrt(s * (s - line1) * (s - line2) * (s - line3));  //Area

    printf("Area : %f \n", area);
}

int main()

{

    int a1, b1, c1, a2, b2, c2, a3, b3, c3;

    printf("Enter coefficients (a,b,c) of three lines \n");

    printf("Line 1 : "); // User enter the points of line 1
    scanf("%d %d %d", &a1, &b1, &c1);

    printf("Line 2 : "); // User enter the points of line 2
    scanf("%d %d %d", &a2, &b2, &c2);

    printf("Line 3 : "); // User enter the points of line 3
    scanf("%d %d %d", &a3, &b3, &c3);

    // Function called

    funct(a1, b1, c1, a2, b2, c2, a3, b3, c3);

    return 0;
}