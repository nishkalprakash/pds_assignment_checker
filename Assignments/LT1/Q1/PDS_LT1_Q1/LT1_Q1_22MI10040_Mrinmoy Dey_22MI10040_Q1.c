/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Lab Test 01
Description
*/
#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float a1,a2,a3,a4,s1,s2,s3,s4;
    float d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;
    printf("(x1,y1) = ");
    scanf("%f,%f",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%f,%f",&x2,&y2);
    printf("(x3,y3) = " );
    scanf("%f,%f",&x3,&y3);
    printf("(x4,y4) = " );
    scanf("%f,%f",&x4,&y4);

    // finding area of coordinates (x1,y1) (x2,y2) (x3,y3)
    d1 = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    d2 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    d3 = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    s1 = (d1+d2+d3)/2;
    a1 = sqrt(s1*(s1-d1)*(s1-d2)*(s1-d3));
    //finding area of coordinates (x1,y1) (x2,y2) (x4,y4)
    d4 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    d5 = sqrt(pow(x4-x2,2)+pow(y4-y2,2));
    d6 = sqrt(pow(x4-x1,2)+pow(y4-y1,2));
    s2 = (d4+d5+d6)/2;
    a2 = sqrt(s2*(s2-d4)*(s2-d5)*(s2-d6));
    //finding area of coordinates (x1,y1) (x4,y4) (x3,y3)
    d7 = sqrt(pow(x4-x1,2)+pow(y4-y1,2));
    d8 = sqrt(pow(x3-x4,2)+pow(y3-y4,2));
    d9 = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    s3 = (d7+d8+d9)/2;
    a3 = sqrt(s3*(s3-d1)*(s3-d2)*(s3-d3));
    //finding area of coordinates (x4,y4) (x2,y2) (x3,y3)
    d10 = sqrt(pow(x2-x4,2)+pow(y2-y4,2));
    d11 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    d12 = sqrt(pow(x3-x4,2)+pow(y3-y4,2));
    s4 = (d10+d11+d12)/2;
    a4 = sqrt(s4*(s4-d1)*(s4-d2)*(s4-d3));

    //finding the minimum area
    if ((a1<=a2)&&(a1<=a3)&&(a1<=a4)){
        printf("Points having the minimum area: (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)\n",x1,y1,x2,y2,x3,y3);
        printf("Area = %.2f\n",a1);
    }
    if ((a2<=a1)&&(a2<=a3)&&(a2<=a4)){
        printf("Points having the minimum area: (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)\n",x1,y1,x2,y2,x4,y4);
        printf("Area = %.2f\n",a2);
    }
    if ((a3<=a1)&&(a3<=a2)&&(a1<=a4)){
        printf("Points having the minimum area: (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)\n",x1,y1,x3,y3,x4,y4);
        printf("Area = %.2f\n",a3);
    }
    if ((a4<=a2)&&(a4<=a3)&&(a4<=a1)){
        printf("Points having the minimum area: (%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f)\n",x2,y2,x3,y3,x4,y4);
        printf("Area = %.2f\n",a4);
    }
}

