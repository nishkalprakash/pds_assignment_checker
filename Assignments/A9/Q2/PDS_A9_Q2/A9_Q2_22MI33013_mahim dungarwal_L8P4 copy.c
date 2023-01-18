/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 9
*/

#include <stdio.h>
#include <math.h>

struct circle1{
    float x_co1;
    float y_co1;
    float radius1;
};

struct circle2{
    float x_co2;
    float y_co2;
    float radius2;
};

void IsCircleIntersecting(struct circle1 x1, struct circle1 y1, struct circle1 r1, struct circle2 x2, struct circle2 y2, struct circle2 r2) {

float dbc = sqrt((x2.x_co2 - x1.x_co1)*(x2.x_co2 - x1.x_co1) + (y2.y_co2 - y1.y_co1)*(y2.y_co2 - y1.y_co1)); // dbc = distance betwwen centres
float R = (r2.radius2+r1.radius1); // R = sum of radii of two circle

if(dbc < R) {
printf("yes circles intersect each other ");
}
else {
printf(" circles do not intersect each other ");
}

return ;
}