#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, area1, area2, area3, area4;

    //Taking input of points
    printf("Enter the coordinates of points : \n");

    printf("(x1,y1) = ");
    scanf("%f,%f", &x1, &y1);

    printf("(x2,y2) = ");
    scanf("%f,%f", &x2, &y2);

    printf("(x3,y3) = ");
    scanf("%f,%f", &x3, &y3);

    printf("(x4,y4) = ");
    scanf("%f,%f", &x4, &y4);

    //Defining all the possible areas
    area1 = (x1*(y2-y3)-x2*(y3-y1)+x3*(y1-y2))/2;
    area2 = (x1*(y3-y4)-x3*(y4-y1)+x4*(y1-y3))/2;
    area3 = (x2*(y3-y4)-x3*(y4-y2)+x4*(y2-y3))/2;
    area4 = (x1*(y2-y4)-x2*(y4-y1)+x4*(y1-y2))/2;

    //Comparing all areas
    if(area1>area2 && area1>area3 && area1>area4)
    {
        printf("Points having the maximum area : (%d, %d), (%d, %d), (%d, %d)", x1, y1, x2, y2, x3, y3);
        float side1, side2, side3, perimeter;
        side1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        side2 = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
        side3 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
        perimeter = side1+side2+side3;
        printf("\n Perimeter : %f", perimeter);
        //We also need to check if points are collinear or not because if collinear perimeter = 0
    }

    else if(area2>area1 && area2>area3 && area2>area4)
    {
        printf("Points having the maximum area : (%f, %f), (%f, %f), (%f, %f)", x1, y1, x3, y3, x4, y4);
        float side1, side2, side3, perimeter;
        side1 = sqrt(pow(x1-x4,2) + pow(y1-y4,2));
        side2 = sqrt(pow(x3-x4,2) + pow(y3-y4,2));
        side3 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
        perimeter = side1+side2+side3;
        printf("\n Perimeter : %f", perimeter);
    }

    else if(area3>area1 && area3>area2 && area3>area4)
    {
        printf("Points having the maximum area : (%f, %f), (%f, %f), (%f, %f)", x2, y2, x3, y3, x4, y4);
        float side1, side2, side3, perimeter;
        side1 = sqrt(pow(x2-x4,2) + pow(y2-y4,2));
        side2 = sqrt(pow(x3-x4,2) + pow(y3-y4,2));
        side3 = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
        perimeter = side1+side2+side3;
        printf("\n Perimeter : %f", perimeter);
    }

    else
    {
        printf("Points having the maximum area : (%f, %f), (%f, %f), (%f, %f)", x1, y1, x2, y2, x4, y4);
        float side1, side2, side3, perimeter;
        side1 = sqrt(pow(x1-x4,2) + pow(y1-y4,2));
        side2 = sqrt(pow(x2-x4,2) + pow(y2-y4,2));
        side3 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        perimeter = side1+side2+side3;
        printf("\n Perimeter : %f", perimeter);
    }

    return 0;
}
