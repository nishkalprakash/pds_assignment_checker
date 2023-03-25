#include<stdio.h>
#include<math.h>
int main(){
float x1, y1, z1, x2, y2, z2, x3, y3, z3, d1, d2, d3, s, area;
printf("Enter first point A:");
scanf("%f,%f,%f", &x1, &y1, &z1);
printf("Enter second point B:");
scanf("%f,%f,%f", &x2, &y2, &z2);
printf("Enter third point C:");
scanf("%f,%f,%f", &x3, &y3, &z3);
printf("A : %f,%f,%f\n", x1, y1, z1);
printf("B : %f,%f,%f\n", x2, y2, z2);
printf("C : %f,%f,%f\n", x3, y3, z3);
d1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
d2 = sqrt(pow(x3-x2,2)+pow(y3-y2,2)+pow(z3-z2,2));
d3 = sqrt(pow(x1-x3,2)+pow(y1-y3,2)+pow(z1-z3,2));
s = (d1+d2+d3)/2;
area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
if(area == 0)
    printf("points are collinear");
else
    printf("points are non collinear");
  return 0;
}
