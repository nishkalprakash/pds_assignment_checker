#include<stdio.h>
int main()
{
    float x1 ,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4;
    printf("enter x1 and y1:");
    scanf("%f %f",&x1 &y1");
    printf("enter x2 and y2:");
    scanf("%f %f",&x2 &y2");
    printf("enter x3 and y3:");
    scanf("%f %f",&x3 &y3");
    printf("enter x4 and y4:");
    scanf("%f %f",&x4 and y4:");
    a1=(x1*(y1-y2)+x2*(y3-y1)+x3*(y2-y3));
    a1/=2;
    a2=(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3));
    a2/=2;
    a3=(x3*(y4-y1)+x4*(y1-y3)+x1*(y3-y4));
    a3/=2;
    a4=(x4*(y1-y2)+x1(y2-y4)+x2(y4-y1));
    a4/=2;