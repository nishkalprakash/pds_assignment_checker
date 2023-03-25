#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3,z1,z2,z3,d1,d2,d3;
    printf("input 3 set of points for 3D plain:");
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
    printf("A(x1,y1,z1): (%lf,%lf,%lf)\n",x1,y1,z1);
    printf("A(x2,y2,z2): (%lf,%lf,%lf)\n",x2,y2,z2);
    printf("A(x3,y3,z3): (%lf,%lf,%lf)\n",x3,y3,z3);
    d1=sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
    d2=sqrt(pow((x3-x2),2)+pow((y3-y2),2)+pow((z3-z2),2));
    d3=sqrt(pow((x1-x3),2)+pow((y1-y3),2)+pow((z1-z3),2));
    if (d1==d2+d3) {printf("The points are collinear");}
    else if (d2==d1+d3) {printf("The points are collinear");}
    else if (d3==d1+d2) {printf("The points are collinear");}
    return 0;


}
