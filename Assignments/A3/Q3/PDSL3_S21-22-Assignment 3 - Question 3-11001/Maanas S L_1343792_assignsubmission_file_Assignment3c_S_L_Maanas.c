/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 3(c)
*/
#include <stdio.h>
#include <math.h>
float intx(float a1,float b1,float c1,float a2,float b2,float c2)
{
    if ((b1/a1)==(b2/a2))
    {
        return printf("Lines are parallel\n");
    }
    else
    {
    return ((b2*c1) - (b1*c2))/((a1*b2) - (a2*b1)) ;
    }
}
float inty(float a1,float b1,float c1,float a2,float b2,float c2)
{
    if ((b1/a1)==(b2/a2))
    {
        return printf("Lines are parallel\n");
    }
    else
    {
        return ((a1*c2) - (a2*c1))/((a1*b2) - (a2*b1)) ;
    }
}
float area(float x1, float x2, float x3, float y1, float y2, float y3){
    float a = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(a<0){
        return -a;
    }
    else{
        return a;
    }
}
float dist(float x1, float x2, float y1, float y2)
{
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}
int main()
{
    float a1,b1,c1,a2,b2,c2,a3,b3,c3 ;
    float x1,x2,x3,y1,y2,y3 ;
    printf("Line 1 : ");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("Line 2 : ");
    scanf("%f %f %f",&a2,&b2,&c2);
    printf("Line 3 : ");
    scanf("%f %f %f",&a3,&b3,&c3);
    x1 = intx(a1,b1,c1,a2,b2,c2);
    x2 = intx(a2,b2,c2,a3,b3,c3);
    x3 = intx(a3,b3,c3,a1,b1,c1);
    y1 = inty(a1,b1,c1,a2,b2,c2);
    y2 = inty(a2,b2,c2,a3,b3,c3);
    y3 = inty(a3,b3,c3,a1,b1,c1);
    printf("Point of intersection between L1 and L2 = (%f, %f)",x1,y1);
    printf("\nPoint of intersection between L2 and L3 = (%f, %f)",x2,y2);
    printf("\nPoint of intersection between L1 and L2 = (%f, %f)",x3,y3);
    printf("\nSide Lengths: %f, %f, %f",dist(x1,x2,y1,y2),dist(x2,x3,y2,y3),dist(x3,x1,y3,y1));
    printf("\nArea = %f",area(x1,x2,x3,y1,y2,y3));
}