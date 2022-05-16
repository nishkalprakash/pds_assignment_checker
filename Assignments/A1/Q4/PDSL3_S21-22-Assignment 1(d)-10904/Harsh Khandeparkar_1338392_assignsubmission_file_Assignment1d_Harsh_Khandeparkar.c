/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 1(d)
*/

#include <stdio.h>
#include <math.h>

// distance formula is used to find the distance between two points
// from their cartesian coordinates
float distance_formula(
    float x1, float y1, // first point
    float x2, float y2  // second point
) {
    return sqrt(
        pow(x1 - x2, 2) +
        pow(y1 - y2, 2)
    );
}

// given lengths of all three sides, the cosine of any angle of a triangle can be found
float cosine_rule(
    float adj1, // length of one side adjacent to the angle
    float adj2, // length of second side adjacent to the angle
    float opp   // length of side opposite to the angle
) {
    return (
        pow(adj1, 2) + pow(adj2, 2) - pow(opp, 2)
    ) / (2 * adj1 * adj2);
}

// since floating point numbers can have precision error
int isAlmostZero(float f) {
    // if f multiplied by a large number and rounded is 0, then f is close enough to 0
    return round(f * 1000000) == 0;
}

int main() {
    float x1, y1; // first point
    float x2, y2; // second point
    float x3, y3; // third point

    printf("Enter the three coordinates (ordered pairs in () separated by comma): ");
    scanf(
        "(%f, %f), (%f, %f), (%f, %f)",
        &x1, &y1,
        &x2, &y2,
        &x3, &y3
    );

    float a = distance_formula(x1, y1, x2, y2), // length of first side
          b = distance_formula(x2, y2, x3, y3),   // length of second side
          c = distance_formula(x3, y3, x1, y1);   // length of third side

    float longest_side = fmax(a, fmax(b, c));
    float shortest_side = fmin(a, fmin(b, c));
    float third_side = a + b + c - longest_side - shortest_side;

    if (longest_side < shortest_side + third_side) {
        printf("This is a valid triangle.\n");

        float cosA = cosine_rule(b, c, a), // cos of angle opposite to side a
              cosB = cosine_rule(a, c, b), // cos of angle opposite to side b
              cosC = cosine_rule(a, b, c); // cos of angle opposite to side c

        if (isAlmostZero(cosA) || isAlmostZero(cosB) || isAlmostZero(cosC)) {
            // cos(90) = 0
            // if the cosine of any angle is 0, it means the triangle is right angled

            printf("This is a right-angled triangle.\n");
        }
        else if (cosA < 0 || cosB < 0 || cosC < 0) {
            // cos of obtuse angles is negative
            // if the cosine of any angle is negative, it means the triangle is obtuse

            printf("This is a obtuse-angled triangle.\n");
        }
        else printf("This is an acute-angled triangle.\n");
    }
    else printf("This is an invalid triangle.\n");

    return 0;
}