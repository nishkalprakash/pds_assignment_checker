/* Name- Rishi Dhoble
Roll no.- 21ME30053
Department- Mechanical Engineering
Package- Code blocks
Question-3b
*/

#include<stdio.h>
#include<math.h>



float x_intersection(float a1,float b1,float c1,float a2,float b2,float c2){           // x cordinate of intersection

    float det;

    det = (a1*b2) - (a2*b1);

    if (det == 0) {printf("lines are parallel\n");}
    else {return ( (c1*b2) - (c2*b1) ) / det ;}

}

float y_intersection(float a1,float b1,float c1,float a2,float b2,float c2){           // x cordinate of intersection

    float det;

    det = (a1*b2) - (a2*b1);

    if (det == 0) {printf("lines are parallel\n");}
    else {return ( (c2*a1) - (c1*a2) ) / det ;}

}

float distance(float a1,float b1,float a2,float b2) {

    float d = sqrt( pow(a2-a1,2) + pow(b2-b1,2) );
    return d;
}

float area(float a, float b, float c) {

    float s = (a + b +c) / 2.0 ;

    float ar = sqrt ( s*(s-a)*(s-b)*(s-c) ) ;
    return ar;
}

int main() {

    float p1[3], p2[3], p3[3], x1,y1, x2, y2, x3, y3;

    printf("enter value of a, b, c for point 1");
    scanf("%f", &p1[0]); scanf("%f", &p1[1]); scanf("%f", &p1[2]);
    printf("\n");

    printf("enter value of a, b, c for point 2");
    scanf("%f", &p2[0]); scanf("%f", &p2[1]); scanf("%f", &p2[2]);
    printf("\n");

    printf("enter value of a, b, c for point 3");
    scanf("%f", &p3[0]); scanf("%f", &p3[1]); scanf("%f", &p3[2]);
    printf("\n");

    printf("point of intersection of line 1 and 2 is (%f, %f):", x_intersection(p1[0], p1[1], p1[2], p2[0], p2[1], p2[2]), y_intersection(p1[0], p1[1], p1[2], p2[0], p2[1], p2[2]));
    printf("\n");

    printf("point of intersection of line 2 and 3 is (%f, %f):", x_intersection(p2[0], p2[1], p2[2], p3[0], p3[1], p3[2]), y_intersection(p2[0], p2[1], p2[2], p3[0], p3[1], p3[2]));
    printf("\n");

    printf("point of intersection of line 3 and 1 is (%f, %f):", x_intersection(p3[0], p3[1], p3[2], p1[0], p1[1], p1[2]), y_intersection(p3[0], p3[1], p3[2], p1[0], p1[1], p1[2]));
    printf("\n");


    x1 = x_intersection(p1[0], p1[1], p1[2], p2[0], p2[1], p2[2]);
    y1 = y_intersection(p1[0], p1[1], p1[2], p2[0], p2[1], p2[2]);

    x2 = x_intersection(p2[0], p2[1], p2[2], p3[0], p3[1], p3[2]);
    y2 = y_intersection(p2[0], p2[1], p2[2], p3[0], p3[1], p3[2]);

    x3 = x_intersection(p3[0], p3[1], p3[2], p1[0], p1[1], p1[2]);
    y3 = y_intersection(p3[0], p3[1], p3[2], p1[0], p1[1], p1[2]);


    printf("length of side 1:");
    printf("%f", distance(x1, y1, x2, y2));
    printf("\n");

    printf("length of side 2:");
    printf("%f", distance(x3, y3, x2, y2));
    printf("\n");

    printf("length of side 3:");
    printf("%f", distance(x1, y1, x3, y3));
    printf("\n");

    printf("area of intersection points is: %f", area(distance(x1, y1, x2, y2), distance(x3, y3, x2, y2), distance(x1, y1, x3, y3)));


return 0;
}
