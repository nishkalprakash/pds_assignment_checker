#include <stdio.h>

/*
I have printed the area without limiting the number of digits for variable Area (float variable type), to get more general output
for points with decimal co-ordinates.

To print only 2 digits, we can write ("Area = %.2f\n", ABC);

*/
int main()
{
    // First let's take the input for the points
    float x1, y1, x2, y2, x3, y3, x4, y4;

    printf("Enter x and y co-ordinates of point A\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter x and y co-ordinates of point B\n");
    scanf("%f %f", &x2, &y2);
    printf("Enter x and y co-ordinates of point C\n");
    scanf("%f %f", &x3, &y3);
    printf("Enter x and y co-ordinates of point D\n");
    scanf("%f %f", &x4, &y4);


    // Area of triangle ABC
    float ABC = (0.50) * ((x1 * (y2 - y3)) + (x2 * ( y3 - y1)) + (x3 * (y1 - y2)));  // 123
    float BCD = (0.50) * ((x2 * (y3 - y4)) + (x3 * ( y4 - y2)) + (x4 * (y2 - y3)));  // 234
    float ABD = (0.50) * ((x1 * (y2 - y4)) + (x2 * ( y4 - y1)) + (x4 * (y1 - y2)));  // 124
    float ACD = (0.50) * ((x1 * (y3 - y4)) + (x3 * ( y4 - y1)) + (x4 * (y1 - y3)));  // 134

    // To get a positive output for area
    if (ABC < 0)
        ABC = ABC * (-1);
    if (BCD < 0)
        BCD = BCD * (-1);
    if (ABD < 0)
        ABD = ABD * (-1);
    if (ACD < 0)
        ACD = ACD * (-1);

    float Area; // variable to print final area

    if (ABC <= BCD && ABC <= ABD && ABC <= ACD)
    {
        Area = ABC;
        printf("Points having the minimum area: (%f, %f), (%f, %f) and (%f, %f)\n", x1, y1, x2, y2, x3, y3);
        printf("Area = %f\n", ABC);
        // To print only 2 digits, we can write ("Area = %.2f\n", ABC);
    }


    else if (BCD <= ABC && BCD <= ABD && BCD <= ACD)
    {
        Area = BCD;
        printf("Points having the minimum area: (%f, %f), (%f, %f) and (%f, %f)\n", x2, y2, x3, y3, x4, y4);
        printf("Area = %f\n", BCD);
    }

    else if (ABD <= ABC && ABD <= BCD && ABD <= ACD)
    {
        Area = ABD;
        printf("Points having the minimum area: (%f, %f), (%f, %f) and (%f, %f)\n", x1, y1, x2, y2, x4, y4);
        printf("Area = %f\n", ABD);
    }

    else if (ACD <= ABC && ACD <= BCD && ACD <= ABD)
    {
        Area = ACD;
        printf("Points having the minimum area: (%f, %f), (%f, %f) and (%f, %f)\n", x1, y1, x3, y3, x4, y4);
        printf("Area = %f\n", ACD);
    }








    return 0;
}
