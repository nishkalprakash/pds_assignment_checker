#include<stdio.h>
int main()
{
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;
    scanf("%f%f%f",&x1,&y1,&z1);
    scanf("%f%f%f",&x2,&y2,&z2);
    scanf("%f%f%f",&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%1.2f,%1.2f,%1.2f)\n",x1,y1,z1);
    printf("A(x2,y2,z2) : (%1.2f,%1.2f,%1.2f)\n",x2,y2,z2);
    printf("A(x3,y3,z3) : (%1.2f,%1.2f,%1.2f)\n\n",x3,y3,z3);
    float area;
    area = x1*(y2*z3-y3*z2)-x2*(y1*z3-y3*z1)+x3*(y1*z2-y2*z1);
    if(area==0) printf("The given three points are collinear.\n\n");
    else printf("The given three points are not collinear.\n\n");

    if(x1>x2 && x1>x3){
            if(x2>x3) printf("C(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
            else printf("B(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
    }
    if(x2>x3 && x2>x1){
        if(x1>x3) printf("C(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f)",x3,y3,z3,x1,y1,z1,x3,y3,z3);
            else printf("A(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
    }
    if(x3>x1 && x3>x2){
        if(x1>x2) printf("B(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            else printf("A(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    }

    ////for equal x
    if(x1==x3 && x1==x2){
             if(y1>y2 && y1>y3){
             if(y2>y3) printf("C(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
             else printf("B(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
             }
             if(y2>y3 && y2>y1){
             if(y1>y3) printf("C(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f)",x3,y3,z3,x1,y1,z1,x3,y3,z3);
             else printf("A(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
            }
             if(y3>y1 && y3>y2){
            if(y1>y2) printf("B(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            else printf("A(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            }
            //if y3 y2 and y1 are equal
            if(y3==y1 && y3==y2){
                if(z1>z2 && z1>z3){
             if(z2>z3) printf("C(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
             else printf("B(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
             }
             if(z2>z3 && z2>z1){
             if(z1>z3) printf("C(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f)",x3,y3,z3,x1,y1,z1,x3,y3,z3);
             else printf("A(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
            }
             if(z3>z1 && z3>z2){
            if(z1>z2) printf("B(%1.2f,%1.2f,%1.2f) < A(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            else printf("A(%1.2f,%1.2f,%1.2f) < B(%1.2f,%1.2f,%1.2f) < C(%1.2f,%1.2f,%1.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            }
            }

            }
    return 0;
}
