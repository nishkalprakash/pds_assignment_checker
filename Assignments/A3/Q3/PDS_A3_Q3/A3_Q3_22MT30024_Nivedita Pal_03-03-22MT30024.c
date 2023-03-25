#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,z1,z2,z3,area;
    printf("Enter the value of coordinate point A(\n");
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    printf("Enter the value of coordinate point B\n");
    scanf("%lf%lf%lf",&x2,&y2,&z2);
    printf("Enter the value of coordinate point C\n");
    scanf("%lf%lf%lf",&x3,&y3,&z3);
    printf("The three coordinate points are: A(%lf%lf%lf) B(%lf%lf%lf) and C(%lf%lf%lf)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    area=0.5*(x1*(y2*z3-y3*z2)-y1*(x2*z3-x3*z2)+z1*(x2*y3-x3*y2));
    if(area==0)
        printf("The three points are collinear");
        else printf("The three points are not collinear");


        return 0;
}
