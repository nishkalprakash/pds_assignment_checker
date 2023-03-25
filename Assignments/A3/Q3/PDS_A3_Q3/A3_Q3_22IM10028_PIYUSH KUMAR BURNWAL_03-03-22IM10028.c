#include <stdio.h>
int main(){
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;

    printf("Enter three coordinates of the first point A");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Enter three coordinates of the first point B");
    scanf("%f%f%f",&x2,&y2,&z2);
    printf("Enter three coordinates of the first point C");
    scanf("%f%f%f",&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%0.2f,%0.2f,%0.2f)\n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%0.2f,%0.2f,%0.2f)\n",x2,y2,z2);
    printf("A(x3,y3,z3) : (%0.2f,%0.2f,%0.2f)\n\n",x3,y3,z3);
    //printing the points part completed
    //now checking for collinearity
    /*for three points being collinear the determinant of 3*3 of x1,x2,x3
    y1,y2,y3
    1,1,1 should evaluate to 0*/
    //the formula is derived from expanding the determinant
    if (((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))==0){
            printf("The given three points are collinear\n\n");


    }
    else{
        printf("The given three points are not collinear\n\n");

    }
    if ((x1<x2)&&(x2<x3)){
        printf("A(%0.2f,%0.2f,%0.2f) < B(%0.2f,%0.2f,%0.2f) < C(%0.2f,%0.2f,%0.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);

    }
    else if((x2<x3)&&(x3<x1)){
        printf("B(%0.2f,%0.2f,%0.2f) < C(%0.2f,%0.2f,%0.2f) < A(%0.2f,%0.2f,%0.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
    }
    else if((x1<x3)&&(x3<x2)){
        printf("A(%0.2f,%0.2f,%0.2f) < C(%0.2f,%0.2f,%0.2f) < B(%0.2f,%0.2f,%0.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
    }
    else if((x2<x1)&&(x1<x3)){
        printf("B(%0.2f,%0.2f,%0.2f) < A(%0.2f,%0.2f,%0.2f) < C(%0.2f,%0.2f,%0.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
    }
    else if((x3<x1)&&(x1<x2)){
        printf("C(%0.2f,%0.2f,%0.2f) < A(%0.2f,%0.2f,%0.2f) < B(%0.2f,%0.2f,%0.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
    }
    else if((x3<x2)&&(x2<x1)){
        printf("C(%0.2f,%0.2f,%0.2f) < B(%0.2f,%0.2f,%0.2f) < A(%0.2f,%0.2f,%0.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
    }






    return 0;

}
