/*Section:2
Roll No.: 22ME10091
Name: Shreya Vadhavkar
Assignment: Lab Test
Description:Minimum area*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    float x1,y1,x2,y2,x3,y3,x4,y4;
    printf("(x1,y1) = ");
    scanf("%f, %f",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%f, %f",&x2,&y2);
    printf("(x3,y3) = ");
    scanf("%f, %f",&x3,&y3);
    printf("(x4,y4) = ");
    scanf("%f, %f",&x4,&y4);
    float a1,a2,a3,a4;
    if(((x1,y1)!=(x2,y2))&&((x1,y1)!=(x3,y3))&&((x1,y1)!=(x4,y4))&&((x3,y3)!=(x2,y2))&&((x4,y4)!=(x2,y2))&&((x3,y3)!=(x4,y4))){
    a1 = (x2*y3)-(x3*y2)+(x3*y4)-(x4*y3)+(x4*y2)-(x2*y4);
    a2 = (x1*y3)-(x3*y1)+(x3*y4)-(x4*y3)+(x4*y1)-(x1*y4);
    a3 = (x1*y2)-(x2*y1)+(x2*y4)-(x4*y2)+(x4*y1)-(x1*y4);
    a4 = (x1*y2)-(x2*y1)+(x2*y3)-(x3*y2)+(x3*y1)-(x1*y3);
    float small1,small2,small;
    a1 = fabs(a1);
    a2 = fabs(a2);
    a3 = fabs(a3);
    a4 = fabs(a4);
    if((a1!=a2)&&(a3!=a4))
    {
    small1 = fmin(a1,a2);
    small2 = fmin(a3,a4);
    }
    else if((a1==a2)&&(a3==a4))
    {
        small1 = a2;
        small2 = a4;
    }

    else if((a1==a2)&&(a4!=a3))
    {
        small1 = a2;
        small2 = fmin(a3,a4);
    }
    else if((a3==a4)&&(a1!=a2))
    {
        small2=a4;
        small1 = fmin(a1,a2);
    }
    if(small1!=small2)
    small = fmin(small1,small2);
     else if(small1==small2)
    {
        small = small2;
    }
    if((a1==a2)&&(small==small1)&&(small!=small2))
    {
        printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x3,y3,x4,y4);
        goto line;
    }
    if((a3==a4)&&(small==small2)&&(small!=small1))
    {
       printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x3,y3);
       goto line;
    }
    if((a2==a4)&&(small==small1)&&(small==small2))
    {
        printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x3,y3);
       goto line;
    }
    if(small==a1)
    {
        printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x2,y2,x3,y3,x4,y4);
    }
    else if(small==a2)
    {
       printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x3,y3,x4,y4);
    }
    else if(small == a3)
    {
        printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x4,y4);
    }
    else
    {
        printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x3,y3);
    }
    line : printf("\nArea = %f", (small/2.0));
    }
    else
    {
        if((x1,y1)==(x2,y2))
        {
            printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x3,y3,x4,y4);
            printf("\nArea = %f", fabs((x1*y3)-(x3*y1)+(x3*y4)-(x4*y3)+(x4*y1)-(x1*y4))/2);
        }
        if((x1,y1)==(x3,y3))
        {
            printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x4,y4);
            printf("\nArea = %f", fabs((x1*y2)-(x2*y1)+(x2*y4)-(x4*y2)+(x4*y1)-(x1*y4))/2);
        }
        if((x1,y1)==(x4,y4))
        {
            printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x3,y3);
            printf("\nArea = %f", fabs((x1*y3)-(x3*y1)+(x3*y2)-(x2*y3)+(x3*y1)-(x1*y3))/2);
        }
        if((x3,y3)==(x2,y2))
        {
            printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x4,y4);
            printf("\nArea = %f", fabs((x1*y2)-(x2*y1)+(x2*y4)-(x4*y2)+(x4*y1)-(x1*y4))/2);
        }
        if((x4,y4)==(x2,y2))
        {
            printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x3,y3);
            printf("\nArea = %f", fabs((x1*y2)-(x2*y1)+(x2*y3)-(x3*y2)+(x3*y1)-(x1*y3))/2);
        }
        if((x3,y3)==(x4,y4))
        {
            printf("Points having the minimum area: (%f,%f), (%f,%f) , (%f,%f)",x1,y1,x2,y2,x3,y3);
            printf("\nArea = %f", fabs((x1*y2)-(x2*y1)+(x2*y3)-(x3*y2)+(x3*y1)-(x1*y3))/2);
        }

    }
    return 0;
}
