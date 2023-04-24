/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Description : Lab test 1 question 1
*/

#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3,x4,y4;
    printf("enter x1\n");   //point A has coordinates (x1,y1)
    scanf("%f",&x1);
    printf("enter y1\n");
    scanf("%f",&y1);
    printf("enter x2\n");   //point B has coordinates (x2,y2)
    scanf("%f",&x2);
    printf("enter y2\n");
    scanf("%f",&y2);
    printf("enter x3\n");   //point C has coordinates (x3,y3)
    scanf("%f",&x3);
    printf("enter y3\n");
    scanf("%f",&y3);
    printf("enter x4\n");   //point D has coordinates (x4,y4)
    scanf("%f",&x4);
    printf("enter y4\n");
    scanf("%f",&y4);

    float a1,a2,a3,a4;
    a1= (0.5*(x2*y3-x3*y2-x1*y3+x3*y1+x1*y2-x2*y1)); //area of triangle with A,B,C as coordinates but it is not absolute value of area
    a2= (0.5*(x2*y4-x4*y2-x1*y4+x4*y1+x1*y2-x2*y1)); //area of triangle with A,B,D as coordinates but it is not absolute value of area
    a3= (0.5*(x2*y3-x3*y2-x4*y3+x3*y4+x4*y2-x2*y4)); //area of triangle with D,B,C as coordinates but it is not absolute value of area
    a4= (0.5*(x4*y3-x3*y4-x1*y3+x3*y1+x1*y4-x4*y1)); //area of triangle with A,D,C as coordinates but it is not absolute value of area

    if(a1<0){a1=-a1;} //because area of triangle can not be negative
    else{a1=a1;}
    if(a2<0){a2=-a2;}
    else{a2=a2;}
    if(a3<0){a3=-a3;}
    else{a3=a3;}
    if(a4<0){a4=-a4;}
    else{a4=a4;}

    if(a1<=a2 && a1<=a3 && a1<=a4){
        printf("area of the smallest triangle a1 = %f\n",a1);
        printf("three points that constitute the smallest triangle are:\n ");
        printf("A(%f,%f) ",x1,y1);
        printf("B(%f,%f) ",x2,y2);
        printf("C(%f,%f) ",x3,y3);
    }

    else if(a2<=a1 && a2<=a3 && a2<=a4){
        printf("area of the smallest triangle a2 = %f\n",a2);
        printf("three points that constitute the smallest triangle are:\n ");
        printf("A(%f,%f) ",x1,y1);
        printf("B(%f,%f) ",x2,y2);
        printf("D(%f,%f) ",x4,y4);

    }

    else if(a3<=a2 && a3<=a1 && a3<=a4){
        printf("area of the smallest triangle a3 = %f\n",a3);
        printf("three points that constitute the smallest triangle are:\n ");
        printf("D(%f,%f) ",x4,y4);
        printf("B(%f,%f) ",x2,y2);
        printf("C(%f,%f) ",x3,y3);
    }

    else if(a4<=a2 && a4<=a3 && a4<=a1){
        printf("area of the smallest triangle a1 = %f\n",a4);
        printf("three points that constitute the smallest triangle are:\n ");
        printf("A(%f,%f) ",x1,y1);
        printf("D(%f,%f) ",x4,y4);
        printf("C(%f,%f) ",x3,y3);
    }

return 0;
}
