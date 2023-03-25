#include<stdio.h>
#include<math.h>
//NAME - NAIN ADITYA / ROLL NO . 22AG10029/ SECTION 2
int main(){
    float x1,y1,z1,x2,y2,z2,x3,y3,z3,det;
    scanf("%f%f%f",&x1,&y1,&z1);
    scanf("%f%f%f",&x2,&y2,&z2);
    scanf("%f%f%f",&x3,&y3,&z3);
    det=x1*(z3*y2-z2*y3)-y1*(x2*z3-z2*x3)+z1*(x2*y3-x3*y2);
    if (det==0){
        printf("the points are collinear");
    }
    else printf("the points are not collinear");


    /*if ((x1!=x2)&&(x2!=x3)&&(x1!=x3)){
       else if (x1>x2 && x2>x3){
            printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);}
        else if (x1>x2 && x3>x2){
            printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);}

        else if (x2>x1 && x1>x3){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);}
        else if (x2>x1 && x1<x3){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);}
        else if (x3>x1 && x1>x2){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);}
        else if (x3>x1 && x1<x2){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);}

    }
    else if ((x1!=x2)&&(x2=x3)){
        if (x1>x2){
            if (y2>y3){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);}
            else if (y3>y2){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x1,y1,z1);
            }
            else {if (z2>z3){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);}
            else if (z3>z2){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);}}
               }
        if (x2>x1){
            if (y2>y3){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);}
            else if (y3>y2){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
            }
            else {if (z2>z3){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);}
            else if (z3>z2){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);}}
               }}
        else if ((x2!=x1)&&(x1=x3)){
        if (x1>x2){
            if (y1>y3){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);}
            else if (y3>y1){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            }
            else {if (z1>z3){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);}
            else if (z3>z1){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);}}
               }
        if (x2>x1){
            if (y1>y3){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);}
            else if (y3>y1){
                printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            }
            else {if (z1>z3){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x2,y2,z2,x1,y1,z1,x2,y2,z2);}
            else if (z3>z2){printf("(%f,%f,%f)>(%f,%f,%f)>(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x3,y3,z3);}}
               }}*/

        return 0;

}
