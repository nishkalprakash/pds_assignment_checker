/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description- Program to find minimum area between 3 points out of 4 points.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4;
    float a1,a2,a3,a4;

    printf("(x1,y1)=");
    scanf("%f,%f",&x1,&y1);
    printf("(x2,y2)=");
    scanf("%f,%f",&x2,&y2);
    printf("(x3,y3)=");
    scanf("%f,%f",&x3,&y3);
    printf("(x4,y4)=");
    scanf("%f,%f",&x4,&y4);

    a1=fabs(0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
    a2=fabs(0.5*(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3)));
    a3=fabs(0.5*(x3*(y4-y1)+x4*(y1-y3)+x1*(y3-y4)));
    a4=fabs(0.5*(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2)));


    if (((a1<=a2)&&(a1<=a3))&&(a1<=a4))
    {
        printf("Points having the minimum area : (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)",x1,y1,x2,y2,x3,y3);
        printf("\nArea = %.2f",a1);
    }
    else if (((a2<=a1)&&(a2<=a3))&&(a2<=a4))
    {
        printf("Points having the minimum area : (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)",x2,y2,x3,y3,x4,y4);
        printf("\nArea = %.2f",a2);
    }
    else if (((a3<=a2)&&(a3<=a1))&&(a3<=a4))
    {
        printf("Points having the minimum area : (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)",x3,y3,x4,y4,x1,y1);
        printf("\nArea = %.2f",a3);
    }
    else if (((a4<=a2)&&(a4<=a3))&&(a4<=a1))
    {
        printf("Points having the minimum area : (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)",x1,y1,x2,y2,x4,y4);
        printf("\nArea = %.2f",a4);
    }
    else
    {
        printf("try another time");
    }

    return 0;
}
