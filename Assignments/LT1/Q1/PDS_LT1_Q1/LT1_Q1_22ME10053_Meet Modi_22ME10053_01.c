// LAB TEST QUESTION 1
#include<stdio.h>
#include<math.h>

int main(){

    // Q1)a READING INPUT FORM USER

    // NOTE : USING DOUBLE INSTEAD OF INT , SINCE FEW COMPILER SHOW ERROR FOR MATH.H LIB USING DOUBLE ONLY

    double x1,x2,x3,x4,y1,y2,y3,y4;
    printf("Enter the four points : \n");
    printf("(x1,y1) = ");
    scanf("%lf,%lf",&x1,&y1);
    printf("\n");
    printf("(x2,y2) = ");
    scanf("%lf,%lf",&x2,&y2);
    printf("\n");
    printf("(x3,y3) = ");
    scanf("%lf,%lf",&x3,&y3);
    printf("\n");
    printf("(x4,y4) = ");
    scanf("%lf,%lf",&x4,&y4);
    printf("\n");

    double a1,b1,c1;
    double s1,A1;
    a1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    b1 = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
    c1 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    s1= (a1+b1+c1)/3;
    A1=sqrt(s1*(s1-a1)*(s1-b1)*(s1-c1));

    double a2,b2,c2;
    double s2,A2;
    a2 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    b2 = sqrt(pow(x2-x4,2) + pow(y2-y4,2));
    c2 = sqrt(pow(x1-x4,2) + pow(y1-y4,2));
    s2 = (a2+b2+c2)/3;
    A2 = sqrt(s2*(s2-a2)*(s2-b2)*(s2-c2));

    double a3,b3,c3;
    double s3,A3;
    a3 = sqrt(pow(x1-x4,2) + pow(y1-y4,2));
    b3 = sqrt(pow(x4-x3,2) + pow(y4-y3,2));
    c3 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    s3 = (a3+b3+c3)/3;
    A3 = sqrt(s3*(s3-a3)*(s3-b3)*(s3-c3));

    double a4,b4,c4;
    double s4,A4;
    a4 = sqrt(pow(x4-x2,2) + pow(y4-y2,2));
    b4 = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
    c4 = sqrt(pow(x4-x3,2) + pow(y4-y3,2));
    s4 = (a4+b4+c4)/3;
    A4 = sqrt(s4*(s4-a4)*(s4-b4)*(s4-c4));

    double min=A1;
    min = (min>A2)? A2:min;
    min = (min>A3)? A3:min;
    min = (min>A4)? A4:min;

    //Q1) b,c PRINTING THE POINTS WITH MINIMUM AREA AND THEIR AREA

    printf("Points having minimum area : \n");

    if(min==A1){
        printf("(%lf,%lf),(%lf,%lf),(%lf,%lf) \n" ,(x1,y1),(x2,y2),(x3,y3));
        printf("Area = %lf",A1);
    }

    else if(min==A2){
        printf("(%lf,%lf),(%lf,%lf),(%lf,%lf) \n" ,(x1,y1),(x2,y2),(x4,y4));
        printf("Area = %lf",A2);
    }

    else if(min==A3){
        printf("(%lf,%lf),(%lf,%lf),(%lf,%lf) \n" ,(x1,y1),(x3,y3),(x4,y4));
        printf("Area = %lf",A3);
    }

    else{
        printf("(%lf,%lf),(%lf,%lf),(%lf,%lf) \n" ,(x2,y2),(x3,y3),(x4,y4));
        printf("Area = %lf",A4);
    }


    return 0;
}
