/*
Section 2
Roll No : 22CS10077
Name: Surla Navaneeth
Problem no : 1
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    float A1,A2,A3,A4,P1,P2,P3,P4,a1,a2,a3,a4;
    printf("Enter the co-ordinates of x1,y1 : ");
    scanf("%d,%d",&x1,&y1);
    printf("Enter the co-ordinates of x2,y2 : ");
    scanf("%d,%d",&x2,&y2);
    printf("Enter the co-ordinates of x3,y3 : ");
    scanf("%d,%d",&x3,&y3);
    printf("Enter the co-ordinates of x4,y4 : ");
    scanf("%d,%d",&x4,&y4);
    A1 = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    if (A1 < 0)
    {
        a1 = A1;
        A1 = -a1;
    }
    A2 = (x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))/2.0;
    if (A2 < 0)
    {
        a2 = A2;
        A2 = -a2;
    }
    A3 = (x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))/2.0;
    if (A3 < 0)
    {
        a3 = A3;
        A3 = -a3;
    }
    A4 = (x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2.0;
    if (A4 < 0)
    {
        a4 = A4;
        A4 = -a4;
    }
    P1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) + sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) + sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    P2 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) + sqrt((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4)) + sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1));
    P3 = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3)) + sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4)) + sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1));
    P4 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) + sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4)) + sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2));
    if ( A1 > A2 && A1 > A3 && A1 > A4 )
    {
        printf("Points with the maximum area: \n");
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x2,y2,x3,y3);
        printf("Perimeter = %f",P1);
    }
    else if ( A2 > A1 && A2 > A3 && A2 > A4 )
    {
        printf("Points with the maximum area: \n");
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x2,y2,x4,y4);
        printf("Perimeter = %f",P2);
    }
    else if ( A3 > A1 && A3 > A4 && A3 > A2 )
    {
        printf("Points with the maximum area: \n");
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x3,y3,x4,y4);
        printf("Perimeter = %f",P3);
    }
    else if ( A4 > A1 && A4 > A2 && A4 > A3 )
    {
        printf("Points with the maximum area: \n");
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x2,y2,x3,y3,x4,y4);
        printf("Perimeter = %f",P4);
    }
    else if ( A1 == 0 && A2 == 0 && A3 == 0 && A4 == 0 )
    {
        printf("Points with the maximum area: \n");
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x2,y2,x3,y3);
        printf("Perimeter = 0 (since there is no triangle)");
    }
    else if ( A1 == A2 && A2 == A3 && A3 == A4 )
    {
        printf("Points with the maximum area: \n");
        printf("(%d,%d), (%d,%d), (%d,%d)\n",x1,y1,x2,y2,x3,y3);
        printf("Perimeter = %f",&P1);
    }
}



