/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>
#include <math.h>

void main(){

    float x1,y1,x2,y2,x3,y3;
    float a,b,c;

    printf("enter the coordinates of first point:");
    scanf("%f %f",&x1,&y1);
    printf("enter the coordinates of second point:");
    scanf("%f %f",&x2,&y2);
    printf("enter the coordinates of third point:");
    scanf("%f %f",&x3,&y3);

    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));

    printf("The side lengths of the triangle formed by the points are %f,%f and %f.\n",a,b,c);

    if (a>=c&&a>=b) {
        if (a<(b+c)){
            printf("It is a valid triangle.\n");
        }
        else {
            printf("It is an invalid triangle.\n");
        }
        if ((pow(a,2))==(pow(b,2)+pow(c,2))){
            printf("It is a right-angled triangle.");
        }
        else if ((pow(a,2))<(pow(b,2)+pow(c,2))){
            printf("It is an acute-angled triangle.");
        }
        else {
            printf("It is an obtuse-angled triangle.");
        }
    }

    else if (b>=a&&b>=c){
        if (b<(a+c)){
            printf("It is a valid triangle.\n");
        }
        else {
            printf("It is an invalid triangle.\n");
        }
        if ((pow(b,2))==(pow(a,2)+pow(c,2))){
            printf("It is a right-angled triangle.");
        }
        else if ((pow(b,2))<(pow(a,2)+pow(c,2))){
            printf("It is an acute-angled triangle.");
        }
        else {
            printf("It is an obtuse-angled triangle.");
        }
    }

    else if (c>=a&&c>=b){
        if (c<(b+a)){
            printf("It is a valid triangle.\n");
        }
        else {
            printf("It is an invalid triangle.\n");
        }
        if ((pow(c,2))==(pow(b,2)+pow(a,2))){
            printf("It is a right-angled triangle");
        }
        else if ((pow(c,2))<(pow(b,2)+pow(a,2))){
            printf("It is an acute-angled triangle.");
        }
        else {
            printf("It is an obtuse-angled triangle.");
        }
    }
}
