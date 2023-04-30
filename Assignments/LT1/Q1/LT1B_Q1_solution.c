// Code Creator: Abhishek Topwal
/*
LT1_Q1B:
1.	a) Read any four points (x1, y1, x2, y2, x3,y3, x4, y4) in 2D Euclidean space.
    b) Print the three points that constitute the largest triangle (based on the area of the triangle).
    c) Print the perimeter of the largest triangle.

*/
#include <stdio.h>
#include <math.h>


int main() {
    float x1, y1, x2, y2, x3, y3, x4, y4;
    float a, b, c, area1,area2,area3,area4, max_area,max_param;

    printf("Enter the coordinates of four points in 2D Euclidean space:\n");
    scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    //calculate the area of the triangle formed by points p1,p2,p3
    a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    c = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
    float s1 = (a+b+c)/2;
    area1 = sqrt(s1*(s1-a)*(s1-b)*(s1-c));

    //calculate the area of the triangle formed by points p1,p2,p4
    a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    b = sqrt(pow(x4-x2,2) + pow(y4-y2,2));
    c = sqrt(pow(x4-x1,2) + pow(y4-y1,2));
    float s2 = (a+b+c)/2;
    area2 = sqrt(s2*(s2-a)*(s2-b)*(s2-c));

    //calculate the area of the triangle formed by points p1,p3,p4
    a = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
    b = sqrt(pow(x4-x3,2) + pow(y4-y3,2));
    c = sqrt(pow(x4-x1,2) + pow(y4-y1,2));
    float s3 = (a+b+c)/2;
    area3 = sqrt(s3*(s3-a)*(s3-b)*(s3-c));

    //calculate the area of the triangle formed by points p2,p3,p4
    a = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    b = sqrt(pow(x4-x3,2) + pow(y4-y3,2));
    c = sqrt(pow(x4-x2,2) + pow(y4-y2,2));
    float s4 = (a+b+c)/2;
    area4 = sqrt(s4*(s4-a)*(s4-b)*(s4-c));


    //find the maximum area and print the points having maximum area
    max_area = area1;
    max_param = s1;
    if (area2 > max_area) {
        max_area = area2;
        max_param = s2;

    }
    if (area3 > max_area) {
        max_area = area3;
        max_param = s3;
    }
    if (area4 > max_area) {
        max_area = area4;
        max_param = s4;
    }

    if(max_area==area1){
        printf("The points with maximum area are (%f,%f), (%f,%f), (%f,%f)", x1, y1, x2, y2, x3, y3);
    }
    else if(max_area==area2){
        printf("The points with maximum area are (%f,%f), (%f,%f), (%f,%f)", x1, y1, x2, y2, x4, y4);
    }
    else if(max_area==area3){
        printf("The points with maximum area are (%f,%f), (%f,%f), (%f,%f)", x1, y1, x3, y3, x4, y4);
    }
    else if(max_area==area4){
        printf("The points with maximum area are (%f,%f), (%f,%f), (%f,%f)", x2, y2, x3, y3, x4, y4);
    }


    // print the maximum area
    // printf(" and the maximum area is %f", max_area);

    if(max_area==0){
        max_param = 0;
    }

    // print the perimeter of the triangle having maximum area
    printf(" and the perimeter is %f", max_param);

    return 0;
}
