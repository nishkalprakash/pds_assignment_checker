#include <stdio.h>
#include <math.h>

int main()
{
    //Taking input of all points
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    printf("Type the 1st point (x1, y1) = \n");
    scanf("%f %f", &x1, &y1);
    printf("Type the 2nd point (x2, y2) = \n");
    scanf("%f %f", &x2, &y2);
    printf("Type the 3rd point (x3, y3) = \n");
    scanf("%f %f", &x3, &y3);
    printf("Type the 4th point (x4, y4) = \n");
    scanf("%f %f", &x4, &y4);

    float area1, area2, area3, area4;
    // Calculating the area of triangle with the help of determinant
    area1 = x1*(y2-y3)-x2*(y1-y3)+x3*(y1-y2);
    // Making area positive
    if(area1 < 0){
        area1 = -area1/2;}
    else{
        area1 = area1/2;
    }
    area2 = x2*(y3-y4)-x3*(y2-y4)+x4*(y2-y3);
    // Making area positive
    if(area1 < 0){
        area2 = -area2/2;}
    else{
         area2 = area1/2;
    }
    area3 = x1*(y3-y4)-x3*(y1-y4)+x4*(y1-y3);
    // Making area positive
    if(area3 < 0){
        area3 = -area3/2;}
    else{area3 = area3/2;
    }
    area4 = x2*(y1-y4)-x1*(y2-y4)+x4*(y2-y1);
    // Making area positive
    if(area4 < 0){
        area4 = -area4/2;}
    else{area4 = area4/2;
    }
    printf("Area = %f", area1);

    if((area1 < area2) && (area2 < area3) && (area1 < area4))
        {printf("Area = %f", area1);}
        else if((area2 < area3) && (area2 < area4) && (area1 < area1))
        {printf("Area = %f", area2);}

    else if((area3 < area2) && (area3 < area1) && (area3 < area4))
        {printf("Area = %f", area3);}
    else if((area4 < area2) && (area2 < area3) && (area1 < area1))
        {printf("Area = %f", area4);}

    return 0;
}
