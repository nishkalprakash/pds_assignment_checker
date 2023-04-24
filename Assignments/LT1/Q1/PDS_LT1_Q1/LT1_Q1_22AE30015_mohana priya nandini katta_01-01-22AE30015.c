
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    double a1,a2,a3,a4;
    printf("Enter the four points in 2D space");
    printf("the x-coordinate is :%d",x1);
    scanf("%d",&x1);
    printf("the y-coordinate is :%d",y1);
    scanf("%d",&y1);
    printf("the x-coordinate is :%d",x2);
    scanf("%d",&x2);
    printf("the y-coordinate is :%d",y2);
    scanf("%d",&y2);
    printf("the x-coordinate is :%d",x3);
    scanf("%d",&x3);
    printf("the y-coordinate is :%d",y3);
    scanf("%d",&y3);
    printf("the x--coordinate is :%d",x4);
    scanf("%d",&x4);
    printf("the y-coordinate is %d",y4);
    scanf("%d",&y4);

    a1=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    a2=(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2.0;
    a3=(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))/2.0;
    a4=(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))/2.0;

    if (a1>a2&&a1>a3&&a1>a4);
    printf("area is :%lf",a1);
    if  (a2>a1&&a2>a3&&a2>a4);
    printf("area is :%lf",a2);
    if  (a3>a1&&a3>a2&&a3>a4);
    printf("area is :%lf",a3);
    if  (a4>a1&&a4>a2&&a4>a3);
    printf("area is :%lf",a4);







}
