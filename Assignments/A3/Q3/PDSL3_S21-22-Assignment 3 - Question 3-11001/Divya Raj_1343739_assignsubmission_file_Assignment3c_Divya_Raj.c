#include <stdio.h>
#include <math.h>

int parallel(double *a, double *b) {
    if (a[0] * b[1] - b[0] * a[1] == 0)
        return 1;
    else
        return 0;
}

void intersection(double *a, double *b) {
    double point1, point2;
    point1 = (b[1] * a[2] - a[1] * b[2]) / (a[0] * b[1] - b[0] * a[1]);
    point2 = (b[2] * a[0] - a[2] * b[0]) / (a[0] * b[1] - b[0] * a[1]);
    a[0] = point1;
    a[1] = point2;
}

int main()
{
    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    double x1, y1, x2, y2, x3, y3;
    double d1, d2, d3, area;

    printf("$ Enter the coefficients (a, b, c) of three lines:\n");
    printf("Line 1: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    printf("Line 2: ");
    scanf("%d %d %d", &b1, &b2, &b3);
    printf("Line 3: ");
    scanf("%d %d %d", &c1, &c2, &c3);

    double arr1[] = {a1, a2, a3};
    double arr2[] = {b1, b2, b3};
    double arr3[] = {c1, c2, c3};

    if (parallel(arr1, arr2)) {
        printf("Lines 1 and 2 are parallel; so no point of intersection.\n");
        return 0;
    }
    else if(parallel(arr2, arr3)) {
        printf("Lines 2 and 3 are parallel; so no point of intersection.\n");
        return 0;
    }
    else if(parallel(arr3, arr1)) {
        printf("Lines 3 and 1 are parallel; so no point of intersection.\n");
        return 0;
    }
    intersection(arr1, arr2);
    x1 = arr1[0];
    y1 = arr1[1];

    intersection(arr2, arr3);
    x2 = arr2[0];
    y2 = arr2[1];

    arr1[0] = a1;
    arr1[1] = a2;
    intersection(arr3, arr1);
    x3 = arr3[0];
    y3 = arr3[1];
    printf("Point of intersection between L1 and L2 = (%lf, %lf)\n", x1, y1);
    printf("Point of intersection between L2 and L3 = (%lf, %lf)\n", x2, y2);
    printf("Point of intersection between L3 and L1 = (%lf, %lf)\n", x3, y3);
    d1 = sqrt(pow(x1-x2, 2.0) + pow(y1-y2, 2.0));
    d2 = sqrt(pow(x2-x3, 2.0) + pow(y2-y3, 2.0));
    d3 = sqrt(pow(x3-x1, 2.0) + pow(y3-y1, 2.0));
    area = 0.5*(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3);
    printf("Side lengths = %lf, %lf, %lf.\n", d1, d2, d3);
    printf("Area = %lf", area);

    return 0;
}