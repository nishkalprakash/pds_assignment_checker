/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Problem No. - 01
Description - Taken input from 4 points and then calculated the smallest area of possible triangles
*/
#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float A1,A2,A3,A4;
    float a1,a2,a3,a4;
    printf("Enter Point 1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter Point 2 : ");
    scanf("%f%f",&x2,&y2);
    printf("Enter Point 3 : ");
    scanf("%f%f",&x3,&y3);
    printf("Enter Point 4 : ");
    scanf("%f%f",&x4,&y4);

    A1 = 0.5*(y1*(x3-x2)+y2*(x1-x3)+y3*(x2-x1));
    A2 = 0.5*(y2*(x3-x4)+y4*(x2-x3)+y3*(x4-x2));
    A3 = 0.5*(y1*(x2-x4)+y4*(x1-x2)+y2*(x4-x1));
    A4 = 0.5*(y1*(x3-x4)+y4*(x1-x3)+y3*(x4-x1));

    if(A1>=0) a1=A1;
    else a1=-A1;
    if(A2>=0) a2=A2;
    else a2=-A2;
    if(A3>=0) a3=A3;
    else a3=-A3;
    if(A4>=0) a4=A4;
    else a4=-A4;

    printf("Points having minimum area : ");

    if(a1<a2&&a1<a3&&a1<a4)
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n", x1,y1,x2,y2,x3,y3);
        printf("Area = %.2f", a1);
    }
    if(a2<a1&&a2<a3&&a2<a4)
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n", x2,y2,x3,y3,x4,y4);
        printf("Area = %.2f", a2);
    }
    if(a3<a1&&a3<a2&&a3<a4)
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n", x1,y1,x2,y2,x4,y4);
        printf("Area = %.2f", a3);

    }
    if(a4<a1&&a4<a2&&a4<a3)
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n", x1,y1,x3,y3,x4,y4);
        printf("Area = %f", a4);

    }
    if(a1==0||a2==0||a3==0||a4==0)
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n", x1,y1,x2,y2,x3,y3);
        printf("Area = %.2f", a1);
    }
    if((a1==a2||a1==a3||a1==a4) && a1!=0)
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n", x1,y1,x2,y2,x3,y3);
        printf("Area = %.2f", a1);
    }
    return 0;
}
