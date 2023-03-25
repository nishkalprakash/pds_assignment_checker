#include <stdio.h>
#include <math.h>
int main(){
double x1, y1, z1, x2, y2, z2, x3, y3, z3;
double d1, d2 ,d3;
printf("A(x1,y1,z1):");
scanf("%lf%lf%lf",&x1, &y1, &z1);
printf("B(x2,y2,z2):");
scanf("%lf%lf%lf",&x2, &y2, &z2);
printf("C(x3,y3,z3):");
scanf("%lf%lf%lf",&x3, &y3, &y3);
printf("A(x1,y1,z1):(%lf,%lf,%lf)\n",x1,y1,z1);
printf("B(x2,y2,z2):(%lf,%lf,%lf)\n",x2,y2,z2);
printf("C(x3,y3,z3):(%lf,%lf,%lf)\n",x3,y3,z3);
d1= sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
d2= sqrt(pow((x3-x2),2)+pow((y3-y2),2)+pow((z3-z2),2));
d3= sqrt(pow((x3-x1),2)+pow((y3-y1),2)+pow((z3-z1),2));
if(((d1+d2)==d3) || ((d1+d3)==d2) || ((d2+d3)==d1))
    printf("The given three points  are collinear\n");
    else
        printf("The given three points are not collinear\n");
if(x1<x2 && x1<x3){
    printf("A(%lf,%lf,%lf)< B(%lf,%lf,%lf)< C(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3 );

}
else
    printf("A(%lf,%lf,%lf)< B(%lf,%lf,%lf)< C(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);

return 0;



}
