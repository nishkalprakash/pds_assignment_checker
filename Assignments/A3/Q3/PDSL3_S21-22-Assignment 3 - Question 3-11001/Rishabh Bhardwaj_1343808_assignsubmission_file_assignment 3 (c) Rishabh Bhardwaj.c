/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include <stdio.h>
#include<math.h>

int main(void)
{
    float a1, a2, a3, b1,b2,b3,c1,c2,c3, x1,x2,x3,y1,y2,y3, sidelength, area, length1, length2, length3;
    float det1, det2, det3;
    printf("Line 1: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Line 2: ");
    scanf("%f %f %f", &a2, &b2, &c2);
    printf("Line 3: ");
    scanf("%f %f %f", &a3, &b3, &c3);

    det1 = a1*b2 - a2*b1;
    det2 = a2*b3 - a3*b2;
    det3 = a3*b1 - a1*b3;

    if (det1 == 0 )
    {
        printf("Lines 1 and 2 are parallel.");
        x1=0;
        y1=0;

    }
    else
    {
        x1 = (c1*b2 - c2*b1)/det1;
        y1 = (a1*c2 - a2*c1)/det1;

        printf("Point of intersection between L1 and L2 = (%f, %f)\n", x1, y1);
    }

    if (det2 == 0 )
    {
        printf("Lines 2 and 3 are parallel.");
        x2=0;
        y2=0;
    }
    else
    {
        x2 = (c2*b3 - c3*b2)/det2;
        y2 = (a2*c3 - a3*c2)/det2;

         printf("Point of intersection between L1 and L2 = (%f, %f)\n", x2, y2);
    }

    if (det3 == 0 )
    {
        printf("Lines 1 and 3 are parallel.");
        x3=0;
        y3=0;
    }
    else
    {
        x3 = (c3*b1 - c1*b3)/det3;
        y3 = (a3*c1 - a3*c1)/det3;

         printf("Point of intersection between L1 and L2 = (%f, %f)\n", x3, y3);
    }


    length1 = pow(pow(x2-x1, 2) + pow(y2 - y1, 2), 0.5);
    length2 = pow(pow(x3-x2, 2) + pow(y3 - y2, 2), 0.5);
    length3 = pow(pow(x1-x3, 2) + pow(y1 - y3, 2), 0.5);

    printf("Side lengths : %f, %f, %f\n", length1, length2, length3);

    area = 0.5*(x1*(y2-y1) + x2*(y3-y1) + x3*(y1-y2));

    printf("Area = %f", area);
    return 0;








}
