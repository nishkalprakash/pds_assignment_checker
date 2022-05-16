// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int intersect(float a1, float b1, float c1, float a2, float b2, float c2, float arr1[2])
{
    // calculating points of intersection using Crammer's rule
    float det = (a1 * b2) - (a2 * b1);
    if (det == 0)
    {
        return 0; // to indicate lines are parallel
    }
    arr1[0] = ((b2 * c1) - (b1 * c2)) / det; // x-coordinate
    arr1[1] = ((a1 * c2) - (a2 * c1)) / det; // y-coordinate
    return 1;                                // to indicate lines are not parallel
}

float slength(float x1, float y1, float x2, float y2)
{
    // calculating length of line segment
    float lensq = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    float len = sqrt(lensq);
    return len;
}

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    // calculating area of triangle
    float ar = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    if (ar < 0)
        ar *= -1; // to ensure that the area returned is positive
    return ar;
}

int main()
{
    float a1, b1, c1, a2, b2, c2, a3, b3, c3; // variables to store co-efficients
    printf("\n$ Enter the coefficients (a, b, c) of three lines:\n");
    printf("Line 1: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Line 2: ");
    scanf("%f %f %f", &a2, &b2, &c2);
    printf("Line 3: ");
    scanf("%f %f %f", &a3, &b3, &c3);

    int flag; // flag to check if lines are parallel
    float arr1[2], arr2[6];

    flag = intersect(a1, b1, c1, a2, b2, c2, arr1);
    if (flag != 0)
    {
        // program proceeds if l1 and l2 are not parallel
        arr2[0] = arr1[0];
        arr2[1] = arr1[1];
        flag = intersect(a2, b2, c2, a3, b3, c3, arr1);
        if (flag != 0)
        {
            // program proceeds if l2 and l3 are not parallel
            arr2[2] = arr1[0];
            arr2[3] = arr1[1];
            flag = intersect(a3, b3, c3, a1, b1, c1, arr1);
            {
                if (flag != 0)
                {
                    // program proceeds if l3 and l1 are not parallel
                    arr2[4] = arr1[0];
                    arr2[5] = arr1[1];
                }
                else
                {
                    printf("Lines 1 and 3 are parallel; so no point of intersection.\n");
                    exit(0);
                }
            }
        }
        else
        {
            printf("Lines 2 and 3 are parallel; so no point of intersection.\n");
            exit(0);
        }
    }
    else
    {
        printf("Lines 1 and 2 are parallel; so no point of intersection.\n");
        exit(0);
    }

    // program reaches here only if none of the lines are parallel
    float sl1, sl2, sl3, ar;
    sl1 = slength(arr2[0], arr2[1], arr2[2], arr2[3]);
    sl2 = slength(arr2[2], arr2[3], arr2[4], arr2[5]);
    sl3 = slength(arr2[4], arr2[5], arr2[0], arr2[1]);
    ar = area(arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

    // printing output
    printf("Point of intersection between L1 and L2 = (%f, %f).\n", arr2[0], arr2[1]);
    printf("Point of intersection between L2 and L3 = (%f, %f).\n", arr2[2], arr2[3]);
    printf("Point of intersection between L3 and L1 = (%f, %f).\n", arr2[4], arr2[5]);
    printf("Side lengths = %f, %f, %f.\n", sl1, sl2, sl3);
    printf("Area = %f\n", ar);
}
