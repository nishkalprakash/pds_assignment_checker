/*
Section:2
Roll No:22CS30036
Name: Lakshya Agrawal
Question No:01
Description:
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    float a1,a2,a3,a4,max1,max2,max,perimeter;
    printf("(x1,y1) = ");
    scanf("%d%d",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3) = ");
    scanf("%d%d",&x3,&y3);
    printf("(x4,y4) = ");
    scanf("%d%d",&x4,&y4);

    printf("\nPoints having the maximum area: ");
    a1 = ((x1*(y2-y3))-(y1*(x2-x3))+(x2*y3-x3*y2))/2;
    a2 = ((x2*(y3-y4)) -(y2*(x3-x4)) + (x3*y4-x4*y3))/2;
    a3 = ((x1*(y3-y4))-(y1*(x3-x4))+(x3*y4-y3*x4))/2;
    a4 = ((x1*(y2-y4))-(y1*(x2-x4))+(x2*y4-y2*x4))/2;

    a1 = (a1>0)? a1:-a1;
    a2 = (a2>0)? a2:-a2;
    a3 = (a3>0)? a3:-a3;
    a4 = (a4>0)? a4:-a4;

    if(a1>a2)
        max1 = a1;
    else
        max1=a2;
    if(a3>a4)
        max2 = a3;
    else
        max2 = a4;
    if(max1>max2)
        max = max1;
    else
        max = max2;

    if(max==a1)
    {
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x2,y2,x3,y3);
        if(a1!=0)
         perimeter = sqrt(pow((x1-x2),2)+pow((y1-y2),2)) + sqrt(pow((x2-x3),2)+pow((y2-y3),2)) + sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        else
         perimeter = 0;
    }else if(max==a2)
    {
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x2,y2,x3,y3,x4,y4);
        if(a2!=0)
        perimeter = sqrt(pow((x2-x3),2)+pow((y2-y3),2)) + sqrt(pow((x3-x4),2)+pow((y3-y4),2)) + sqrt(pow((x4-x2),2)+pow((y4-y2),2));
        else
            perimeter = 0;
    }else if(max==a3)
    {
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x3,y3,x4,y4);
        if(a3!=0)
        perimeter = sqrt(pow((x1-x3),2)+pow((y1-y3),2)) + sqrt(pow((x3-x4),2)+pow((y3-y4),2)) + sqrt(pow((x4-x1),2)+pow((y4-y1),2));
        else
            perimeter = 0;
    }else
    {
         printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x2,y2,x4,y4);
         if(a4!=0)
         perimeter = sqrt(pow((x1-x2),2)+pow((y1-y2),2)) + sqrt(pow((x2-x4),2)+pow((y2-y4),2)) + sqrt(pow((x4-x1),2)+pow((y4-y1),2));
         else
            perimeter = 0;
    }

    if(perimeter==0)
    {
        printf("\nPerimeter = %d (since there is no triangle)",(int)(perimeter));
    }else{
         printf("\nPerimeter = %.2f",perimeter);
    }

    return 0;
}
